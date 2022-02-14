
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct revmap_entry {unsigned long forw; unsigned long guest_rpte; } ;
struct TYPE_3__ {scalar_t__ virt; struct revmap_entry* rev; } ;
struct TYPE_4__ {TYPE_1__ hpt; } ;
struct kvm {TYPE_2__ arch; } ;
typedef int __be64 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int*,unsigned long) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (struct kvm*,int*,unsigned long) ;
 int FUNC_8 (unsigned long*) ;
 int FUNC_9 (struct kvm*,struct revmap_entry*) ;
 int FUNC_10 (int*,unsigned long) ;
 int FUNC_11 (unsigned long*) ;
 scalar_t__ FUNC_12 (struct kvm*) ;

__attribute__((used)) static int FUNC_13(struct kvm *VAR_8, unsigned long *VAR_9)
{
 struct revmap_entry *VAR_10 = VAR_8->arch.hpt.rev;
 unsigned long VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15, VAR_16;
 __be64 *VAR_17;
 int VAR_18 = 0;

 retry:
 FUNC_8(VAR_9);
 if (!(*VAR_9 & VAR_5)) {
  FUNC_11(VAR_9);
  return VAR_18;
 }

 VAR_12 = VAR_11 = *VAR_9 & VAR_4;
 do {
  unsigned long VAR_19;
  VAR_17 = (__be64 *) (VAR_8->arch.hpt.virt + (VAR_12 << 4));
  VAR_13 = VAR_10[VAR_12].forw;
  VAR_19 = FUNC_1(VAR_17[1]);
  if (!(VAR_19 & VAR_0) &&
      (!FUNC_5(VAR_19) || FUNC_12(VAR_8)))
   continue;

  if (!FUNC_10(VAR_17, VAR_2)) {

   FUNC_11(VAR_9);
   while (VAR_17[0] & FUNC_3(VAR_2))
    FUNC_2();
   goto retry;
  }


  if (!(VAR_17[0] & FUNC_3(VAR_3))) {
   FUNC_0(VAR_17, FUNC_1(VAR_17[0]));
   continue;
  }


  VAR_17[0] |= FUNC_3(VAR_1);
  FUNC_7(VAR_8, VAR_17, VAR_12);
  VAR_15 = FUNC_1(VAR_17[0]);
  VAR_16 = FUNC_1(VAR_17[1]);
  if (VAR_16 & VAR_0) {
   VAR_17[1] = FUNC_3(VAR_16 & ~VAR_0);
   if (!(VAR_10[VAR_12].guest_rpte & VAR_0)) {
    VAR_10[VAR_12].guest_rpte |= VAR_0;
    FUNC_9(VAR_8, &VAR_10[VAR_12]);
   }
   VAR_14 = FUNC_6(VAR_15, VAR_16);
   VAR_14 = (VAR_14 + VAR_7 - 1) >> VAR_6;
   if (VAR_14 > VAR_18)
    VAR_18 = VAR_14;
   FUNC_4();
  }
  VAR_15 &= ~VAR_1;
  VAR_15 |= VAR_3;
  FUNC_0(VAR_17, VAR_15);
 } while ((VAR_12 = VAR_13) != VAR_11);

 FUNC_11(VAR_9);
 return VAR_18;
}
