
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RRange {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (struct RRange*) ;
 int FUNC_1 (struct RRange*) ;
 scalar_t__ FUNC_2 (struct RRange*) ;
 int FUNC_3 (int *,int ) ;
 struct RRange* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,char*,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2, VAR_3;
  struct RRange *VAR_4 = FUNC_4(VAR_0, VAR_1);

  VAR_2 = FUNC_3(VAR_0, FUNC_0(VAR_4));
  VAR_3 = FUNC_3(VAR_0, FUNC_1(VAR_4));
  VAR_2 = FUNC_7(VAR_0, VAR_2);
  FUNC_5(VAR_0, VAR_2, "...", FUNC_2(VAR_4) ? 3 : 2);
  FUNC_6(VAR_0, VAR_2, VAR_3);

  return VAR_2;
}
