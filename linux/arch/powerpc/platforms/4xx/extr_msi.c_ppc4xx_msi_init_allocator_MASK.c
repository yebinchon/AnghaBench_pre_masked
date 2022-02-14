
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppc4xx_msi {int bitmap; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1,
  struct ppc4xx_msi *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->bitmap, VAR_0,
         VAR_1->dev.of_node);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(&VAR_2->bitmap);
 if (VAR_3 < 0) {
  FUNC_1(&VAR_2->bitmap);
  return VAR_3;
 }

 return 0;
}
