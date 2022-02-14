
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sec_dev_info {int num_saas; scalar_t__* regs; int dev; } ;
struct iommu_domain {int type; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 struct iommu_domain* FUNC_3 (int ) ;
 int FUNC_4 (struct sec_dev_info*) ;
 int FUNC_5 (struct sec_dev_info*) ;
 int FUNC_6 (struct sec_dev_info*,int) ;
 int FUNC_7 (struct sec_dev_info*,int) ;
 int FUNC_8 (struct sec_dev_info*,int) ;
 int FUNC_9 (struct sec_dev_info*,int) ;
 int FUNC_10 (struct sec_dev_info*,int) ;
 int FUNC_11 (struct sec_dev_info*,int) ;
 int FUNC_12 (struct sec_dev_info*,int*) ;
 int FUNC_13 (struct sec_dev_info*,int,int) ;
 int FUNC_14 (struct sec_dev_info*,int,int ) ;
 int FUNC_15 (struct sec_dev_info*,int ) ;
 int FUNC_16 (struct sec_dev_info*,int) ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct sec_dev_info *VAR_6)
{
 struct iommu_domain *VAR_7;
 u32 VAR_8 = 0;
 u32 VAR_9[10] = {};
 u32 VAR_10, VAR_11;

 VAR_7 = FUNC_3(VAR_6->dev);





 if (VAR_7 && (VAR_7->type & VAR_5))
  VAR_6->num_saas = 5;

 else
  VAR_6->num_saas = 10;

 FUNC_17(FUNC_0(VAR_6->num_saas - 1, 0),
         VAR_6->regs[VAR_4] + VAR_1);


 FUNC_4(VAR_6);

 FUNC_5(VAR_6);


 FUNC_10(VAR_6, 0x7);
 FUNC_9(VAR_6, 0x7);


 FUNC_6(VAR_6, 1);


 FUNC_7(VAR_6, 0);


 FUNC_8(VAR_6, 0);

 FUNC_17((u32)~0, VAR_6->regs[VAR_4] + VAR_2);

 VAR_11 = FUNC_11(VAR_6, VAR_8);
 if (VAR_11) {
  FUNC_2(VAR_6->dev, "Failed to set ipv4 hashmask %d\n", VAR_11);
  return -VAR_0;
 }

 FUNC_12(VAR_6, VAR_9);


 FUNC_15(VAR_6, 0);

 if (VAR_7 && (VAR_7->type & VAR_5)) {
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   FUNC_16(VAR_6, VAR_10);

   FUNC_17(0x3f,
           VAR_6->regs[VAR_4] +
           FUNC_1(VAR_10));
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_6->num_saas; VAR_10++) {
  FUNC_13(VAR_6, VAR_10, 1);
  FUNC_14(VAR_6, VAR_10, 0);
 }

 return 0;
}
