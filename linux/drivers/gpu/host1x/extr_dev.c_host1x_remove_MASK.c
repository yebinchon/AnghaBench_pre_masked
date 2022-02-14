
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct host1x {int group; scalar_t__ domain; int iova; int clk; int rst; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct host1x*) ;
 int FUNC_2 (struct host1x*) ;
 int FUNC_3 (struct host1x*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 struct host1x* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_0)
{
 struct host1x *VAR_1 = FUNC_8(VAR_0);

 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_10(VAR_1->rst);
 FUNC_0(VAR_1->clk);

 if (VAR_1->domain) {
  FUNC_9(&VAR_1->iova);
  FUNC_4(VAR_1->domain, VAR_1->group);
  FUNC_5(VAR_1->domain);
  FUNC_7();
  FUNC_6(VAR_1->group);
 }

 return 0;
}
