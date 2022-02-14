
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw; } ;
struct clk_branch {int halt_check; TYPE_1__ clkr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,char const*,char*) ;
 scalar_t__ FUNC_1 (struct clk_branch const*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const struct clk_branch *VAR_6, bool VAR_7,
  bool (VAR_8)(const struct clk_branch *, bool))
{
 bool VAR_9 = VAR_6->halt_check & VAR_4;
 const char *VAR_10 = FUNC_2(&VAR_6->clkr.hw);





 if (VAR_6->halt_check == VAR_3 || FUNC_1(VAR_6))
  return 0;

 if (VAR_6->halt_check == VAR_1 || (!VAR_7 && VAR_9)) {
  FUNC_3(10);
 } else if (VAR_6->halt_check == VAR_2 ||
     VAR_6->halt_check == VAR_0 ||
     (VAR_7 && VAR_9)) {
  int VAR_11 = 200;

  while (VAR_11-- > 0) {
   if (VAR_8(VAR_6, VAR_7))
    return 0;
   FUNC_3(1);
  }
  FUNC_0(1, "%s status stuck at 'o%s'", VAR_10,
    VAR_7 ? "ff" : "n");
  return -VAR_5;
 }
 return 0;
}
