
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iommu_cmd {int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iommu_cmd*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iommu_cmd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct iommu_cmd *VAR_4, u16 VAR_5, int VAR_6,
          int VAR_7, int VAR_8, bool VAR_9)
{
 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->data[0] = VAR_5;
 if (VAR_9) {
  VAR_4->data[1] = VAR_6;
  VAR_4->data[2] = VAR_1;
 }
 VAR_4->data[3] = VAR_8 & 0x1ff;
 VAR_4->data[3] |= (VAR_7 & VAR_2) << VAR_3;

 FUNC_0(VAR_4, VAR_0);
}
