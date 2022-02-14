
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dumb_vga {scalar_t__ ddc; int bridge; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 struct dumb_vga* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct dumb_vga *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->bridge);

 if (VAR_1->ddc)
  FUNC_1(VAR_1->ddc);

 return 0;
}
