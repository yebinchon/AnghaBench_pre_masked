
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RArray {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (struct RArray*) ;
 int VAR_0 ;
 int * FUNC_1 (struct RArray*) ;
 int FUNC_2 (struct RArray*,int) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int) ;
 struct RArray* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 struct RArray* FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,int*) ;
 int FUNC_8 (struct RArray*) ;
 int FUNC_9 (int *,int ,char*) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct RArray *VAR_4 = FUNC_6(VAR_3);
  struct RArray *VAR_5;
  mrb_value *VAR_6;
  mrb_int VAR_7, VAR_8;

  FUNC_7(VAR_2, "i", &VAR_7);
  if (VAR_7 < 0) {
    FUNC_9(VAR_2, VAR_1, "negative argument");
  }
  if (VAR_7 == 0) return FUNC_5(VAR_2);
  if (VAR_0 / VAR_7 < FUNC_0(VAR_4)) {
    FUNC_9(VAR_2, VAR_1, "array size too big");
  }
  VAR_8 = FUNC_0(VAR_4);
  VAR_5 = FUNC_4(VAR_2, VAR_8 * VAR_7);
  FUNC_2(VAR_5, VAR_8 * VAR_7);
  VAR_6 = FUNC_1(VAR_5);
  while (VAR_7--) {
    FUNC_3(VAR_6, FUNC_1(VAR_4), VAR_8);
    VAR_6 += VAR_8;
  }

  return FUNC_8(VAR_5);
}
