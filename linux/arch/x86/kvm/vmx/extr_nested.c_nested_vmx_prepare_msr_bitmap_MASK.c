
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmcs12 {int msr_bitmap; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_host_map {scalar_t__ hva; } ;
struct TYPE_4__ {unsigned long* msr_bitmap; } ;
struct TYPE_5__ {struct kvm_host_map msr_bitmap_map; TYPE_1__ vmcs02; } ;
struct TYPE_6__ {TYPE_2__ nested; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*,int ,struct kvm_host_map*) ;
 int FUNC_5 (struct kvm_vcpu*,struct kvm_host_map*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct vmcs12*,int ) ;
 scalar_t__ FUNC_8 (struct vmcs12*) ;
 scalar_t__ FUNC_9 (struct vmcs12*) ;
 scalar_t__ FUNC_10 (struct vmcs12*) ;
 int FUNC_11 (unsigned long*,unsigned long*,int ,int) ;
 TYPE_3__* FUNC_12 (struct kvm_vcpu*) ;

__attribute__((used)) static inline bool FUNC_13(struct kvm_vcpu *VAR_13,
       struct vmcs12 *VAR_14)
{
 int VAR_15;
 unsigned long *VAR_16;
 unsigned long *VAR_17 = FUNC_12(VAR_13)->nested.vmcs02.msr_bitmap;
 struct kvm_host_map *VAR_18 = &FUNC_12(VAR_13)->nested.msr_bitmap_map;


 if (!FUNC_1() ||
     !FUNC_7(VAR_14, VAR_4))
  return 0;

 if (FUNC_4(VAR_13, FUNC_3(VAR_14->msr_bitmap), VAR_18))
  return 0;

 VAR_16 = (unsigned long *)VAR_18->hva;






 FUNC_2(VAR_17);

 if (FUNC_10(VAR_14)) {
  if (FUNC_8(VAR_14)) {






   for (VAR_15 = 0x800; VAR_15 <= 0x8ff; VAR_15 += VAR_3) {
    unsigned VAR_19 = VAR_15 / VAR_3;

    VAR_17[VAR_19] = VAR_16[VAR_19];
   }
  }

  FUNC_11(
   VAR_16, VAR_17,
   FUNC_0(VAR_2),
   VAR_10 | VAR_12);

  if (FUNC_9(VAR_14)) {
   FUNC_11(
    VAR_16, VAR_17,
    FUNC_0(VAR_0),
    VAR_12);
   FUNC_11(
    VAR_16, VAR_17,
    FUNC_0(VAR_1),
    VAR_12);
  }
 }


 FUNC_11(VAR_16, VAR_17,
          VAR_5, VAR_11);

 FUNC_11(VAR_16, VAR_17,
          VAR_6, VAR_11);

 FUNC_11(VAR_16, VAR_17,
          VAR_9, VAR_11);
 if (!FUNC_6(VAR_13, VAR_8))
  FUNC_11(
     VAR_16, VAR_17,
     VAR_8,
     VAR_10 | VAR_12);

 if (!FUNC_6(VAR_13, VAR_7))
  FUNC_11(
     VAR_16, VAR_17,
     VAR_7,
     VAR_12);

 FUNC_5(VAR_13, &FUNC_12(VAR_13)->nested.msr_bitmap_map, 0);

 return 1;
}
