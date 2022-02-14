
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct keep_mc_store {int list_id; int num; int magic; } ;
struct TYPE_5__ {scalar_t__ start; } ;
struct connection {TYPE_1__ Out; int In; TYPE_1__* Tmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct connection*) ;
 int FUNC_5 (int ,char*,int,char const*,int,int,int,int ) ;
 int FUNC_6 (struct connection*) ;
 int FUNC_7 (char*,int ,int,int *,int) ;
 int FUNC_8 (char const*,char*,int*) ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (TYPE_1__*,char*,int) ;

int FUNC_10 (struct connection *VAR_5, int VAR_6, const char *VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
  int VAR_12 = 0;
  struct keep_mc_store *VAR_13 = 0;



  if (VAR_4 > 0) {
    FUNC_5 (VAR_2, "mc_store: op=%d, key=\"%s\", flags=%d, expire=%d, bytes=%d, noreply=%d\n", VAR_6, VAR_7, VAR_9, VAR_10, VAR_11, 0);
  }

  if (VAR_11 >= 0 && VAR_11 < 1048576) {
    if (FUNC_8 (VAR_7, "userlist%d", &VAR_12) == 1 && VAR_12 < 0) {
      if (!VAR_5->Tmp) {
        VAR_5->Tmp = FUNC_2();
        FUNC_3 (VAR_5->Tmp);
      }
      VAR_13 = (struct keep_mc_store *) VAR_5->Tmp->start;
      VAR_13->magic = VAR_0;
      VAR_13->list_id = VAR_12;
      VAR_13->num = FUNC_7 (VAR_3, VAR_1, 1, &VAR_5->In, VAR_11);
      FUNC_1 (VAR_5->Tmp, sizeof (struct keep_mc_store));
      if (VAR_13->num > 0 && VAR_12 < 0) {
        FUNC_9 (VAR_5->Tmp, VAR_3, VAR_13->num * 4);
      }
    } else {
      FUNC_0 (&VAR_5->In, VAR_11);
    }
  } else {
    FUNC_0 (&VAR_5->In, VAR_11);
  }

  if (!VAR_13 || VAR_13->num <= 0 || VAR_12 >= 0) {
    FUNC_9 (&VAR_5->Out, "NOT_STORED\r\n", 12);
    FUNC_4 (VAR_5);
    FUNC_6 (VAR_5);
  } else {
    FUNC_9 (&VAR_5->Out, "STORED\r\n", 8);
    FUNC_4 (VAR_5);
  }

  return VAR_11;
}
