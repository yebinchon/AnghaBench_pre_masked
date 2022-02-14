
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_md {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct RClass* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct RClass*) ;
 int FUNC_6 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_7(mrb_state *VAR_3, mrb_value VAR_4, struct mrb_md **VAR_5)
{
  struct RClass *VAR_6;
  struct mrb_md *VAR_7;
  mrb_value VAR_8;

  VAR_6 = FUNC_4(VAR_3, VAR_4);
  VAR_8 = FUNC_1(VAR_3, FUNC_5(VAR_6), FUNC_2(VAR_3, VAR_2));
  if (FUNC_3(VAR_8)) {
    FUNC_6(VAR_3, VAR_0, "Digest::Base is an abstract class");
  }
  VAR_7 = (struct mrb_md *)FUNC_0(VAR_4);
  if (!VAR_7) {
    FUNC_6(VAR_3, VAR_1, "no md found (BUG?)");
  }
  if (VAR_5) *VAR_5 = VAR_7;
}
