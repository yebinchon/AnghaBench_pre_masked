
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_cmd {int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iommu_cmd*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iommu_cmd*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct iommu_cmd *VAR_2, u64 VAR_3)
{
 u64 VAR_4 = FUNC_2((void *)VAR_3);

 FUNC_1(VAR_3 & 0x7ULL);

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->data[0] = FUNC_3(VAR_4) | VAR_1;
 VAR_2->data[1] = FUNC_5(VAR_4);
 VAR_2->data[2] = 1;
 FUNC_0(VAR_2, VAR_0);
}
