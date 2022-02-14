
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct iommu_cmd {int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iommu_cmd*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iommu_cmd*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct iommu_cmd *VAR_4, u16 VAR_5, int VAR_6,
      u64 VAR_7, bool VAR_8)
{
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 VAR_7 &= ~(0xfffULL);

 VAR_4->data[0] = VAR_6;
 VAR_4->data[1] = VAR_5;
 VAR_4->data[2] = FUNC_1(VAR_7);
 VAR_4->data[3] = FUNC_3(VAR_7);
 VAR_4->data[2] |= VAR_2;
 VAR_4->data[2] |= VAR_1;
 if (VAR_8)
  VAR_4->data[2] |= VAR_3;
 FUNC_0(VAR_4, VAR_0);
}
