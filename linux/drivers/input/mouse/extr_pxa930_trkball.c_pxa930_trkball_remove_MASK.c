
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa930_trkball {int mmio_base; int input; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int,struct pxa930_trkball*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pxa930_trkball*) ;
 struct pxa930_trkball* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct pxa930_trkball *VAR_1 = FUNC_4(VAR_0);
 int VAR_2 = FUNC_5(VAR_0, 0);

 FUNC_1(VAR_1->input);
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_1->mmio_base);
 FUNC_3(VAR_1);

 return 0;
}
