
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mip4_ts {scalar_t__ gpio_ce; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct mip4_ts *VAR_0)
{
 if (VAR_0->gpio_ce) {
  FUNC_0(VAR_0->gpio_ce, 1);


  FUNC_1(200 * 1000, 300 * 1000);
 }

 return 0;
}
