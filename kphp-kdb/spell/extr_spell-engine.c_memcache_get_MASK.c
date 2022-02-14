
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keep_mc_store {int text_id; int* res; } ;
struct connection {TYPE_1__* Tmp; } ;
struct TYPE_2__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (struct connection*,char const*,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct connection*) ;
 int FUNC_6 (scalar_t__,char*,int,int,int) ;
 int FUNC_7 (char const*,char*,int*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char const*,char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_10 (struct connection *VAR_7, const char *VAR_8, int VAR_9) {
  VAR_1++;
  int VAR_10 = FUNC_1 (VAR_8, VAR_9);
  VAR_8 += VAR_10;
  VAR_9 -= VAR_10;
  if (VAR_9 >= 5 && !FUNC_9 (VAR_8, "stats", 5)) {
    int VAR_11 = FUNC_5 (VAR_7);
    FUNC_3 (VAR_7, VAR_8 - VAR_10, VAR_4, VAR_11);
    return 0;
  }
  struct keep_mc_store *VAR_12 = 0;
  if (VAR_7->Tmp) {
    VAR_12 = (struct keep_mc_store *) VAR_7->Tmp->start;
  }
  int VAR_13;
  if (VAR_12 && FUNC_7 (VAR_8, "request%d", &VAR_13) == 1 && VAR_12->text_id == VAR_13) {
    VAR_2++;
    return FUNC_3 (VAR_7, VAR_8 - VAR_10, VAR_4, FUNC_6 (VAR_4, "%d,%d,%d", VAR_12->res[0], VAR_12->res[1], VAR_12->res[2]));
  }
  if (VAR_9 == 5 && !FUNC_2 (VAR_8, "dicts", 5)) {
  int VAR_14 = FUNC_4 (VAR_4, VAR_0);
    VAR_2++;
    return FUNC_3 (VAR_7, VAR_8 - VAR_10, VAR_4, VAR_14);
  }
  if (VAR_5 && VAR_6 && VAR_9 == 18 && !FUNC_2 (VAR_8, "worst_misspell_msg", 18)) {
    VAR_2++;
    return FUNC_3 (VAR_7, VAR_8 - VAR_10, VAR_6,FUNC_8 (VAR_6));
  }
  FUNC_0 (VAR_7);
  VAR_3++;
  return 0;
}
