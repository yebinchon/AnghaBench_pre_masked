
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qcom_iommu_ctx {int asid; int dev; int domain; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,int ,int,int ) ;
 int FUNC_1 (struct qcom_iommu_ctx*,int ) ;
 int FUNC_2 (struct qcom_iommu_ctx*,int ) ;
 int FUNC_3 (struct qcom_iommu_ctx*,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_8, void *VAR_9)
{
 struct qcom_iommu_ctx *VAR_10 = VAR_9;
 u32 VAR_11, VAR_12;
 u64 VAR_13;

 VAR_11 = FUNC_1(VAR_10, VAR_1);

 if (!(VAR_11 & VAR_4))
  return VAR_6;

 VAR_12 = FUNC_1(VAR_10, VAR_2);
 VAR_13 = FUNC_2(VAR_10, VAR_0);

 if (!FUNC_4(VAR_10->domain, VAR_10->dev, VAR_13, 0)) {
  FUNC_0(VAR_10->dev,
        "Unhandled context fault: fsr=0x%x, "
        "iova=0x%016llx, fsynr=0x%x, cb=%d\n",
        VAR_11, VAR_13, VAR_12, VAR_10->asid);
 }

 FUNC_3(VAR_10, VAR_1, VAR_11);
 FUNC_3(VAR_10, VAR_3, VAR_7);

 return VAR_5;
}
