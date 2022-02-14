
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bitmap; } ;
struct ppc4xx_msi {int* msi_virqs; int msi_dev; int msi_regs; TYPE_2__ bitmap; } ;
struct TYPE_3__ {struct ppc4xx_msi* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct ppc4xx_msi *VAR_2 = VAR_1->dev.platform_data;
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_2->msi_virqs[VAR_3];
  if (VAR_4)
   FUNC_1(VAR_4);
 }

 if (VAR_2->bitmap.bitmap)
  FUNC_2(&VAR_2->bitmap);
 FUNC_0(VAR_2->msi_regs);
 FUNC_3(VAR_2->msi_dev);

 return 0;
}
