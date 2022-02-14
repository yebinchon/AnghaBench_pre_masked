
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ virt; } ;
struct TYPE_3__ {TYPE_2__ hpt; } ;
struct kvm {TYPE_1__ arch; } ;
typedef unsigned long gva_t ;
typedef int __be64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_0 (int *,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 unsigned long FUNC_6 (TYPE_2__*) ;
 unsigned int FUNC_7 (unsigned long,unsigned long) ;
 unsigned int* VAR_11 ;
 int FUNC_8 (int *,unsigned long) ;

long FUNC_9(struct kvm *VAR_12, gva_t VAR_13, unsigned long VAR_14,
         unsigned long VAR_15)
{
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19, VAR_20;
 unsigned long VAR_21;
 __be64 *VAR_22;
 unsigned long VAR_23, VAR_24;
 unsigned long VAR_25, VAR_26, VAR_27;


 VAR_23 = VAR_5 | VAR_1 | VAR_4;
 VAR_24 = 0;
 VAR_17 = 12;
 if (VAR_14 & VAR_7) {
  VAR_23 |= VAR_3;
  VAR_24 |= VAR_3;
  VAR_17 = VAR_11[(VAR_14 & VAR_8) >> 4];
 }
 if (VAR_14 & VAR_6) {
  VAR_18 = (1UL << 40) - 1;
  VAR_19 = (VAR_14 & ~VAR_5) >> VAR_10;
  VAR_19 ^= VAR_19 << 25;
 } else {
  VAR_18 = (1UL << 28) - 1;
  VAR_19 = (VAR_14 & ~VAR_5) >> VAR_9;
 }
 VAR_20 = (VAR_19 ^ ((VAR_13 & VAR_18) >> VAR_17)) & FUNC_6(&VAR_12->arch.hpt);
 VAR_21 = VAR_14 & ~(VAR_18 >> 16);
 VAR_21 |= (VAR_13 & VAR_18) >> 16;

 if (VAR_17 >= 24)
  VAR_21 &= ~((1UL << (VAR_17 - 16)) - 1);
 else
  VAR_21 &= ~0x7fUL;
 VAR_24 |= VAR_21;

 for (;;) {
  VAR_22 = (__be64 *)(VAR_12->arch.hpt.virt + (VAR_20 << 7));

  for (VAR_16 = 0; VAR_16 < 16; VAR_16 += 2) {

   VAR_25 = FUNC_1(VAR_22[VAR_16]) & ~VAR_2;
   if (FUNC_2(VAR_0))
    VAR_25 = FUNC_5(VAR_25, FUNC_1(VAR_22[VAR_16+1]));


   if (!(VAR_25 & VAR_15) || (VAR_25 & VAR_23) != VAR_24)
    continue;


   while (!FUNC_8(&VAR_22[VAR_16], VAR_2))
    FUNC_3();
   VAR_25 = VAR_27 = FUNC_1(VAR_22[VAR_16]) & ~VAR_2;
   VAR_26 = FUNC_1(VAR_22[VAR_16+1]);
   if (FUNC_2(VAR_0)) {
    VAR_25 = FUNC_5(VAR_25, VAR_26);
    VAR_26 = FUNC_4(VAR_26);
   }




   if ((VAR_25 & VAR_15) && (VAR_25 & VAR_23) == VAR_24 &&
       FUNC_7(VAR_25, VAR_26) == VAR_17)

    return (VAR_20 << 3) + (VAR_16 >> 1);

   FUNC_0(&VAR_22[VAR_16], VAR_27);
  }

  if (VAR_24 & VAR_4)
   break;
  VAR_24 |= VAR_4;
  VAR_20 = VAR_20 ^ FUNC_6(&VAR_12->arch.hpt);
 }
 return -1;
}
