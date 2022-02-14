
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_iommu_dev {int ncb; scalar_t__ base; } ;
typedef int irqreturn_t ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (struct msm_iommu_dev*) ;
 int FUNC_3 (struct msm_iommu_dev*) ;
 int VAR_0 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

irqreturn_t FUNC_8(int VAR_1, void *VAR_2)
{
 struct msm_iommu_dev *VAR_3 = VAR_2;
 unsigned int VAR_4;
 int VAR_5, VAR_6;

 FUNC_6(&VAR_0);

 if (!VAR_3) {
  FUNC_4("Invalid device ID in context interrupt handler\n");
  goto fail;
 }

 FUNC_4("Unexpected IOMMU page fault!\n");
 FUNC_4("base = %08x\n", (unsigned int)VAR_3->base);

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6)
  goto fail;

 for (VAR_5 = 0; VAR_5 < VAR_3->ncb; VAR_5++) {
  VAR_4 = FUNC_0(VAR_3->base, VAR_5);
  if (VAR_4) {
   FUNC_4("Fault occurred in context %d.\n", VAR_5);
   FUNC_4("Interesting registers:\n");
   FUNC_5(VAR_3->base, VAR_5);
   FUNC_1(VAR_3->base, VAR_5, 0x4000000F);
  }
 }
 FUNC_2(VAR_3);
fail:
 FUNC_7(&VAR_0);
 return 0;
}
