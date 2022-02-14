
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmp_pdma_phy {int dummy; } ;
struct mmp_pdma_device {int dma_channels; struct mmp_pdma_phy* phy; scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct mmp_pdma_phy*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct mmp_pdma_device *VAR_5 = VAR_4;
 struct mmp_pdma_phy *VAR_6;
 u32 VAR_7 = FUNC_2(VAR_5->base + VAR_0);
 int VAR_8, VAR_9;
 int VAR_10 = 0;

 while (VAR_7) {
  VAR_8 = FUNC_0(VAR_7);

  if (VAR_8 >= VAR_5->dma_channels)
   break;
  VAR_7 &= (VAR_7 - 1);
  VAR_6 = &VAR_5->phy[VAR_8];
  VAR_9 = FUNC_1(VAR_3, VAR_6);
  if (VAR_9 == VAR_1)
   VAR_10++;
 }

 if (VAR_10)
  return VAR_1;

 return VAR_2;
}
