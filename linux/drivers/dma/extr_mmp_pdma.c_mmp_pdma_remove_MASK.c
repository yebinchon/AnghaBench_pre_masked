
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mmp_pdma_phy {int dma_channels; int device; struct mmp_pdma_phy* phy; } ;
struct mmp_pdma_device {int dma_channels; int device; struct mmp_pdma_device* phy; } ;


 int FUNC_0 (int *,int,struct mmp_pdma_phy*) ;
 int FUNC_1 (int *) ;
 struct mmp_pdma_phy* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct mmp_pdma_device *VAR_1 = FUNC_2(VAR_0);
 struct mmp_pdma_phy *VAR_2;
 int VAR_3, VAR_4 = 0, VAR_5 = 0;


 for (VAR_3 = 0; VAR_3 < VAR_1->dma_channels; VAR_3++) {
  if (FUNC_3(VAR_0, VAR_3) > 0)
   VAR_5++;
 }

 if (VAR_5 != VAR_1->dma_channels) {
  VAR_4 = FUNC_3(VAR_0, 0);
  FUNC_0(&VAR_0->dev, VAR_4, VAR_1);
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_1->dma_channels; VAR_3++) {
   VAR_2 = &VAR_1->phy[VAR_3];
   VAR_4 = FUNC_3(VAR_0, VAR_3);
   FUNC_0(&VAR_0->dev, VAR_4, VAR_2);
  }
 }

 FUNC_1(&VAR_1->device);
 return 0;
}
