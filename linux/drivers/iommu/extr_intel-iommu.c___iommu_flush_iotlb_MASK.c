
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct intel_iommu {int register_lock; scalar_t__ reg; int cap; int ecap; } ;


 int FUNC_0 () ;
 int const FUNC_1 (int ) ;


 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int const VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct intel_iommu*,int,int ,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,unsigned long long,unsigned long long) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(struct intel_iommu *VAR_4, u16 VAR_5,
    u64 VAR_6, unsigned int VAR_7, u64 VAR_8)
{
 int VAR_9 = FUNC_8(VAR_4->ecap);
 u64 VAR_10 = 0, VAR_11 = 0;
 unsigned long VAR_12;

 switch (VAR_8) {
 case 129:

  VAR_10 = 129|VAR_0;
  break;
 case 130:
  VAR_10 = 130|VAR_0|FUNC_1(VAR_5);
  break;
 case 128:
  VAR_10 = 128|VAR_0|FUNC_1(VAR_5);

  VAR_11 = VAR_7 | VAR_6;
  break;
 default:
  FUNC_0();
 }
 if (FUNC_6(VAR_4->cap))
  VAR_10 |= VAR_2;

 FUNC_11(&VAR_4->register_lock, VAR_12);

 if (VAR_11)
  FUNC_7(VAR_4->reg + VAR_9, VAR_11);
 FUNC_7(VAR_4->reg + VAR_9 + 8, VAR_10);


 FUNC_4(VAR_4, VAR_9 + 8,
  VAR_3, (!(VAR_10 & VAR_0)), VAR_10);

 FUNC_12(&VAR_4->register_lock, VAR_12);


 if (FUNC_2(VAR_10) == 0)
  FUNC_10("Flush IOTLB failed\n");
 if (FUNC_2(VAR_10) != FUNC_3(VAR_8))
  FUNC_9("TLB flush request %Lx, actual %Lx\n",
   (unsigned long long)FUNC_3(VAR_8),
   (unsigned long long)FUNC_2(VAR_10));
}
