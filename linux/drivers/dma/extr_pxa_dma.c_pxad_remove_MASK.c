
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxad_device {int slave; } ;
struct platform_device {int dummy; } ;


 struct pxad_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct pxad_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct pxad_device *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->slave);
 return 0;
}
