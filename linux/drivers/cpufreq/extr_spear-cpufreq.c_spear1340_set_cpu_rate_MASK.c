
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int dummy; } ;
struct TYPE_2__ {int clk; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int ) ;
 int FUNC_3 (struct clk*,struct clk*) ;
 int FUNC_4 (struct clk*,unsigned long) ;
 int FUNC_5 (char*,...) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_6(struct clk *VAR_1, unsigned long VAR_2)
{
 struct clk *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_2(VAR_0.clk);
 if (FUNC_0(VAR_3)) {
  FUNC_5("failed to get cpu's parent (sys) clock\n");
  return FUNC_1(VAR_3);
 }


 VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_5("Failed to set sys clk rate to %lu\n", VAR_2);
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_3, VAR_1);
 if (VAR_4) {
  FUNC_5("Failed to set sys clk parent\n");
  return VAR_4;
 }

 return 0;
}
