
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_sock {int fallback_index; scalar_t__ dead; } ;
struct nbd_device {int disk; struct nbd_config* config; } ;
struct nbd_config {int num_connections; struct nbd_sock** socks; int runtime_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct nbd_device *VAR_1, int VAR_2)
{
 struct nbd_config *VAR_3 = VAR_1->config;
 int VAR_4 = -1;
 struct nbd_sock *VAR_5 = VAR_3->socks[VAR_2];
 int VAR_6 = VAR_5->fallback_index;

 if (FUNC_2(VAR_0, &VAR_3->runtime_flags))
  return VAR_4;

 if (VAR_3->num_connections <= 1) {
  FUNC_0(FUNC_1(VAR_1->disk),
        "Attempted send on invalid socket\n");
  return VAR_4;
 }

 if (VAR_6 >= 0 && VAR_6 < VAR_3->num_connections &&
     !VAR_3->socks[VAR_6]->dead)
  return VAR_6;

 if (VAR_5->fallback_index < 0 ||
     VAR_5->fallback_index >= VAR_3->num_connections ||
     VAR_3->socks[VAR_5->fallback_index]->dead) {
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_3->num_connections; VAR_7++) {
   if (VAR_7 == VAR_2)
    continue;
   if (!VAR_3->socks[VAR_7]->dead) {
    VAR_4 = VAR_7;
    break;
   }
  }
  VAR_5->fallback_index = VAR_4;
  if (VAR_4 < 0) {
   FUNC_0(FUNC_1(VAR_1->disk),
         "Dead connection, failed to find a fallback\n");
   return VAR_4;
  }
 }
 VAR_4 = VAR_5->fallback_index;
 return VAR_4;
}
