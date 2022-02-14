
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vic {int clk; int rst; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct vic* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct vic *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_4(10, 20);

 VAR_2 = FUNC_3(VAR_1->rst);
 if (VAR_2 < 0)
  goto disable;

 FUNC_4(10, 20);

 return 0;

disable:
 FUNC_0(VAR_1->clk);
 return VAR_2;
}
