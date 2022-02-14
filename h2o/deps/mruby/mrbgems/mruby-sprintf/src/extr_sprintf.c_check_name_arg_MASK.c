
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,int ,...) ;
 int FUNC_2 (int *,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_1, int VAR_2, const char *VAR_3, mrb_int VAR_4)
{
  if (VAR_2 > 0) {
    FUNC_1(VAR_1, VAR_0, "named%S after unnumbered(%S)",
               FUNC_2(VAR_1, (VAR_3), (VAR_4)), FUNC_0(VAR_2));
  }
  if (VAR_2 == -1) {
    FUNC_1(VAR_1, VAR_0, "named%S after numbered", FUNC_2(VAR_1, (VAR_3), (VAR_4)));
  }
}
