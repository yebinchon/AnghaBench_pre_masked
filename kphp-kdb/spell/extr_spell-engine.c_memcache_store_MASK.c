
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keep_mc_store {scalar_t__* res; int text_id; } ;
struct connection {int Tmp; int In; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (struct connection*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_6 (char const*,char*,int *) ;
 scalar_t__ FUNC_7 (scalar_t__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ,struct keep_mc_store*,int) ;

int FUNC_9 (struct connection *VAR_8, int VAR_9, const char *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14) {
  VAR_1++;
  if (VAR_9 != VAR_4 || VAR_14 >= VAR_0 - 1) {
    FUNC_2 (VAR_8);
    return -2;
  }
  struct keep_mc_store VAR_15;
  if (FUNC_6 (VAR_10, "text%d", &VAR_15.text_id) == 1) {

    if (VAR_3 < VAR_14) {
      VAR_3 = VAR_14;
    }
    FUNC_0 (FUNC_4 (&VAR_8->In, VAR_6, VAR_14) == VAR_14);
    VAR_6[VAR_14] = 0;
    int VAR_16 = FUNC_5 (VAR_6, VAR_15.res, VAR_5);
    if (!VAR_16) {
      if (VAR_2 < VAR_15.res[1]) {
        VAR_2 = VAR_15.res[1];
        if (VAR_5) {
          if (VAR_7) {
            FUNC_1 (VAR_7);
          }
          VAR_7 = FUNC_7 (VAR_6);
        }
      }
      FUNC_3 (VAR_8);
      FUNC_8 (VAR_8->Tmp, &VAR_15, sizeof (struct keep_mc_store));
      return 1;
    }
    FUNC_2 (VAR_8);
    return 0;
  }
  FUNC_2 (VAR_8);
  return -2;
}
