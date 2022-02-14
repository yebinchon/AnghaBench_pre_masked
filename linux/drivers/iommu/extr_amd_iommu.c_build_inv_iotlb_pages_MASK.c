
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,size_t,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iommu_cmd*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct iommu_cmd *VAR_5, u16 VAR_6, int VAR_7,
      u64 VAR_8, size_t VAR_9)
{
 u64 VAR_10;
 bool VAR_11;

 VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_4);
 VAR_11 = 0;

 if (VAR_10 > 1) {




  VAR_8 = VAR_0;
  VAR_11 = 1;
 }

 VAR_8 &= VAR_3;

 FUNC_3(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->data[0] = VAR_6;
 VAR_5->data[0] |= (VAR_7 & 0xff) << 24;
 VAR_5->data[1] = VAR_6;
 VAR_5->data[2] = FUNC_2(VAR_8);
 VAR_5->data[3] = FUNC_4(VAR_8);
 FUNC_0(VAR_5, VAR_2);
 if (VAR_11)
  VAR_5->data[2] |= VAR_1;
}
