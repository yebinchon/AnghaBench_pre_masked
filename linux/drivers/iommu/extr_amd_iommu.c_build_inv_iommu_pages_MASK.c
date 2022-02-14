
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct iommu_cmd {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iommu_cmd*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,size_t,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iommu_cmd*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct iommu_cmd *VAR_6, u64 VAR_7,
      size_t VAR_8, u16 VAR_9, int VAR_10)
{
 u64 VAR_11;
 bool VAR_12;

 VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_5);
 VAR_12 = 0;

 if (VAR_11 > 1) {




  VAR_7 = VAR_0;
  VAR_12 = 1;
 }

 VAR_7 &= VAR_4;

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->data[1] |= VAR_9;
 VAR_6->data[2] = FUNC_2(VAR_7);
 VAR_6->data[3] = FUNC_4(VAR_7);
 FUNC_0(VAR_6, VAR_1);
 if (VAR_12)
  VAR_6->data[2] |= VAR_3;
 if (VAR_10)
  VAR_6->data[2] |= VAR_2;
}
