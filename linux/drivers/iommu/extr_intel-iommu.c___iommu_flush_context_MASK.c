
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct intel_iommu {int register_lock; scalar_t__ reg; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;

 int const FUNC_1 (int ) ;

 int const FUNC_2 (int ) ;

 int VAR_1 ;
 int const FUNC_3 (int ) ;
 int FUNC_4 (struct intel_iommu*,scalar_t__,int ,int,int) ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct intel_iommu *VAR_3,
      u16 VAR_4, u16 VAR_5, u8 VAR_6,
      u64 VAR_7)
{
 u64 VAR_8 = 0;
 unsigned long VAR_9;

 switch (VAR_7) {
 case 128:
  VAR_8 = 128;
  break;
 case 129:
  VAR_8 = 129|FUNC_1(VAR_4);
  break;
 case 130:
  VAR_8 = 130|FUNC_1(VAR_4)
   | FUNC_3(VAR_5) | FUNC_2(VAR_6);
  break;
 default:
  FUNC_0();
 }
 VAR_8 |= VAR_1;

 FUNC_6(&VAR_3->register_lock, VAR_9);
 FUNC_5(VAR_3->reg + VAR_0, VAR_8);


 FUNC_4(VAR_3, VAR_0,
  VAR_2, (!(VAR_8 & VAR_1)), VAR_8);

 FUNC_7(&VAR_3->register_lock, VAR_9);
}
