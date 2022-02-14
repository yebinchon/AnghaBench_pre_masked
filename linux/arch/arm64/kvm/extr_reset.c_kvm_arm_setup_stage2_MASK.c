
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int vtcr; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 () ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

int FUNC_6(struct kvm *VAR_11, unsigned long VAR_12)
{
 u64 VAR_13 = VAR_5;
 u32 VAR_14, VAR_15;
 u8 VAR_16;

 if (VAR_12 & ~VAR_3)
  return -VAR_0;

 VAR_15 = FUNC_0(VAR_12);
 if (VAR_15) {
  if (VAR_15 > VAR_10 ||
      VAR_15 < 32)
   return -VAR_0;
 } else {
  VAR_15 = VAR_2;
 }

 VAR_14 = FUNC_4(VAR_4) & 7;
 if (VAR_14 > VAR_1)
  VAR_14 = VAR_1;
 VAR_13 |= VAR_14 << VAR_7;

 VAR_13 |= FUNC_2(VAR_15);




 VAR_16 = FUNC_5(VAR_15);
 if (VAR_16 < 2)
  VAR_16 = 2;
 VAR_13 |= FUNC_1(VAR_16);






 VAR_13 |= VAR_6;


 VAR_13 |= (FUNC_3() == 16) ?
  VAR_8 :
  VAR_9;
 VAR_11->arch.vtcr = VAR_13;
 return 0;
}
