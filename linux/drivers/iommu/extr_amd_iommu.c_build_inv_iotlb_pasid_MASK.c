
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef void* u16 ;
struct iommu_cmd {int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iommu_cmd*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iommu_cmd*,int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct iommu_cmd *VAR_3, u16 VAR_4, int VAR_5,
      int VAR_6, u64 VAR_7, bool VAR_8)
{
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 VAR_7 &= ~(0xfffULL);

 VAR_3->data[0] = VAR_4;
 VAR_3->data[0] |= ((VAR_5 >> 8) & 0xff) << 16;
 VAR_3->data[0] |= (VAR_6 & 0xff) << 24;
 VAR_3->data[1] = VAR_4;
 VAR_3->data[1] |= (VAR_5 & 0xff) << 16;
 VAR_3->data[2] = FUNC_1(VAR_7);
 VAR_3->data[2] |= VAR_0;
 VAR_3->data[3] = FUNC_3(VAR_7);
 if (VAR_8)
  VAR_3->data[2] |= VAR_1;
 FUNC_0(VAR_3, VAR_2);
}
