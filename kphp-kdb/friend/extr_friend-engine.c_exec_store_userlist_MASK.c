
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keep_mc_header {int list_id; int num; } ;
struct connection {int Tmp; int In; } ;
typedef int D ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct connection*) ;
 int FUNC_2 (struct keep_mc_header*,int ,int,int *,int) ;
 int FUNC_3 (char const*,char*,int*,int*) ;
 struct keep_mc_header* VAR_1 ;
 int FUNC_4 (int ,struct keep_mc_header*,int) ;

int FUNC_5 (struct connection *VAR_2, const char *VAR_3, int VAR_4, int VAR_5) {
  int VAR_6 = 0;
  int VAR_7;
  FUNC_3 (VAR_3, "userlist%d%n", &VAR_7, &VAR_6);
  if (VAR_6 != VAR_4 || VAR_7 >= 0) {
    FUNC_0 (&VAR_2->In, VAR_5);
    return 0;
  }
  int VAR_8 = FUNC_2 (VAR_1, VAR_0, 1, &VAR_2->In, VAR_5);

  if (VAR_8 <= 0) {
    return 0;
  }
  struct keep_mc_header VAR_9;
  VAR_9.list_id = VAR_7;
  VAR_9.num = VAR_8;
  FUNC_1 (VAR_2);
  FUNC_4 (VAR_2->Tmp, &VAR_9, sizeof(VAR_9));
  FUNC_4 (VAR_2->Tmp, VAR_1, VAR_8 * 4);
  return 1;
}
