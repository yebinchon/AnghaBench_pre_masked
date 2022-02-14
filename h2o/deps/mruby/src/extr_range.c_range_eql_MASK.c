
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct RRange {int dummy; } ;
typedef int mrb_value ;
struct TYPE_8__ {int range_class; } ;
typedef TYPE_1__ mrb_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct RRange*) ;
 int FUNC_1 (struct RRange*) ;
 scalar_t__ FUNC_2 (struct RRange*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,char*,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 struct RRange* FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3;
  struct RRange *VAR_4, *VAR_5;

  FUNC_5(VAR_1, "o", &VAR_3);

  if (FUNC_6(VAR_1, VAR_2, VAR_3)) return FUNC_9();
  if (!FUNC_7(VAR_1, VAR_3, VAR_1->range_class)) return FUNC_4();
  if (FUNC_10(VAR_3) != VAR_0) return FUNC_4();

  VAR_4 = FUNC_8(VAR_1, VAR_2);
  VAR_5 = FUNC_8(VAR_1, VAR_3);
  if (!FUNC_3(VAR_1, FUNC_0(VAR_4), FUNC_0(VAR_5)) ||
      !FUNC_3(VAR_1, FUNC_1(VAR_4), FUNC_1(VAR_5)) ||
      (FUNC_2(VAR_4) != FUNC_2(VAR_5))) {
    return FUNC_4();
  }
  return FUNC_9();
}
