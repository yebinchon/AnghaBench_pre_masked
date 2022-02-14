
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sve_state_reg_region {scalar_t__ klen; scalar_t__ upad; int koffset; } ;
struct TYPE_2__ {int sve_max_vl; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_one_reg {unsigned int id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int VAR_11 ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (unsigned int,size_t) ;
 scalar_t__ FUNC_10 (unsigned int,unsigned int) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 size_t FUNC_13 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_14(struct sve_state_reg_region *VAR_12,
        struct kvm_vcpu *VAR_13,
        const struct kvm_one_reg *VAR_14)
{

 const u64 VAR_15 = FUNC_3(0, 0);
 const u64 VAR_16 = FUNC_3(VAR_7 - 1,
             VAR_6 - 1);


 const u64 VAR_17 = FUNC_2(0, 0);
 const u64 VAR_18 = FUNC_1(VAR_6 - 1);

 unsigned int VAR_19;
 unsigned int VAR_20;

 unsigned int VAR_21, VAR_22;
 unsigned int VAR_23;

 size_t VAR_24;

 const u64 VAR_25 = FUNC_2(VAR_5 - 1,
       VAR_6 - 1);


 FUNC_0(FUNC_1(0) != VAR_25 + 1);


 FUNC_0(VAR_6 != VAR_2);

 VAR_20 = (VAR_14->id & VAR_8) >> VAR_9;

 if (VAR_14->id >= VAR_15 && VAR_14->id <= VAR_16) {
  if (!FUNC_12(VAR_13) || (VAR_14->id & VAR_10) > 0)
   return -VAR_1;

  VAR_19 = FUNC_11(VAR_13->arch.sve_max_vl);

  VAR_21 = FUNC_6(VAR_19, VAR_20) -
    VAR_11;
  VAR_22 = VAR_4;
  VAR_23 = FUNC_7(VAR_19);
 } else if (VAR_14->id >= VAR_17 && VAR_14->id <= VAR_18) {
  if (!FUNC_12(VAR_13) || (VAR_14->id & VAR_10) > 0)
   return -VAR_1;

  VAR_19 = FUNC_11(VAR_13->arch.sve_max_vl);

  VAR_21 = FUNC_4(VAR_19, VAR_20) -
    VAR_11;
  VAR_22 = VAR_3;
  VAR_23 = FUNC_5(VAR_19);
 } else {
  return -VAR_0;
 }

 VAR_24 = FUNC_13(VAR_13);
 if (FUNC_8(!VAR_24))
  return -VAR_0;

 VAR_12->koffset = FUNC_9(VAR_21, VAR_24);
 VAR_12->klen = FUNC_10(VAR_23, VAR_22);
 VAR_12->upad = VAR_22 - VAR_12->klen;

 return 0;
}
