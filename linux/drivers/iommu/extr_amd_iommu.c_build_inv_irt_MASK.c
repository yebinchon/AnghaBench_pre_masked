
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iommu_cmd {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_cmd*,int ) ;
 int FUNC_1 (struct iommu_cmd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct iommu_cmd *VAR_1, u16 VAR_2)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->data[0] = VAR_2;
 FUNC_0(VAR_1, VAR_0);
}
