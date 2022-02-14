
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int fmode_t ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char*,int,int ) ;

int
FUNC_11(mrb_state *VAR_5, const char *VAR_6, mrb_int VAR_7, mrb_int VAR_8)
{
  mrb_value VAR_9;
  int VAR_10, VAR_11 = VAR_0;
  char* VAR_12 = FUNC_5(VAR_6, -1);







reopen:
  VAR_10 = FUNC_10(VAR_12, (int)VAR_7, (fmode_t)VAR_8);
  if (VAR_10 == -1) {
    if (!VAR_11) {
      switch (VAR_4) {
        case 128:
        case 129:
        FUNC_3(VAR_5);
        VAR_11 = VAR_3;
        goto reopen;
      }
    }

    VAR_9 = FUNC_2(VAR_5, "open %S", FUNC_7(VAR_5, VAR_6));
    FUNC_6(VAR_5, FUNC_8(VAR_9));
    FUNC_9(VAR_5, FUNC_0(VAR_9));
  }
  FUNC_4(VAR_12);

  if (VAR_10 <= 2) {
    FUNC_1(VAR_5, VAR_10);
  }
  return VAR_10;
}
