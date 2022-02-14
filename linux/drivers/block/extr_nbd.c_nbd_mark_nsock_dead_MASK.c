
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbd_sock {int dead; scalar_t__ sent; int * pending; int sock; } ;
struct nbd_device {TYPE_1__* config; int index; } ;
struct link_dead_args {int work; int index; } ;
struct TYPE_2__ {int runtime_flags; int live_connections; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 struct link_dead_args* FUNC_4 (int,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct nbd_device*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct nbd_device *VAR_6, struct nbd_sock *VAR_7,
    int VAR_8)
{
 if (!VAR_7->dead && VAR_8 && !FUNC_5(VAR_6->config)) {
  struct link_dead_args *VAR_9;
  VAR_9 = FUNC_4(sizeof(struct link_dead_args), VAR_0);
  if (VAR_9) {
   FUNC_0(&VAR_9->work, VAR_4);
   VAR_9->index = VAR_6->index;
   FUNC_7(VAR_5, &VAR_9->work);
  }
 }
 if (!VAR_7->dead) {
  FUNC_3(VAR_7->sock, VAR_3);
  if (FUNC_1(&VAR_6->config->live_connections) == 0) {
   if (FUNC_9(VAR_2,
            &VAR_6->config->runtime_flags)) {
    FUNC_8(VAR_1,
     &VAR_6->config->runtime_flags);
    FUNC_2(FUNC_6(VAR_6),
     "Disconnected due to user request.\n");
   }
  }
 }
 VAR_7->dead = 1;
 VAR_7->pending = ((void*)0);
 VAR_7->sent = 0;
}
