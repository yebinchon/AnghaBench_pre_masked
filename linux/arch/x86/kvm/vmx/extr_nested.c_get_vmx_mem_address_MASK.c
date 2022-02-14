
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int base; int type; scalar_t__ unusable; int limit; } ;
typedef int gva_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int,struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (struct kvm_vcpu*,struct kvm_segment*,int) ;

int FUNC_7(struct kvm_vcpu *VAR_6, unsigned long VAR_7,
   u32 VAR_8, bool VAR_9, int VAR_10, gva_t *VAR_11)
{
 gva_t VAR_12;
 bool VAR_13;
 struct kvm_segment VAR_14;
 int VAR_15 = VAR_8 & 3;
 int VAR_16 = (VAR_8 >> 7) & 7;
 bool VAR_17 = VAR_8 & (1u << 10);
 int VAR_18 = (VAR_8 >> 15) & 7;
 int VAR_19 = (VAR_8 >> 18) & 0xf;
 bool VAR_20 = !(VAR_8 & (1u << 22));
 int VAR_21 = (VAR_8 >> 23) & 0xf;
 bool VAR_22 = !(VAR_8 & (1u << 27));

 if (VAR_17) {
  FUNC_2(VAR_6, VAR_2);
  return 1;
 }



 VAR_12 = VAR_7;
 if (VAR_16 == 1)
  VAR_12 = (gva_t)FUNC_5(VAR_12, 31);
 else if (VAR_16 == 0)
  VAR_12 = (gva_t)FUNC_5(VAR_12, 15);
 if (VAR_22)
  VAR_12 += FUNC_4(VAR_6, VAR_21);
 if (VAR_20)
  VAR_12 += FUNC_4(VAR_6, VAR_19)<<VAR_15;
 FUNC_6(VAR_6, &VAR_14, VAR_18);







 if (VAR_16 == 1)
  VAR_12 &= 0xffffffff;
 else if (VAR_16 == 0)
  VAR_12 &= 0xffff;


 VAR_13 = 0;
 if (FUNC_0(VAR_6)) {





  if (VAR_18 == VAR_3 || VAR_18 == VAR_4)
   *VAR_11 = VAR_14.base + VAR_12;
  else
   *VAR_11 = VAR_12;





  VAR_13 = FUNC_1(*VAR_11, VAR_6);
 } else {





  *VAR_11 = (VAR_14.base + VAR_12) & 0xffffffff;







  if (VAR_9)



   VAR_13 = ((VAR_14.type & 0xa) == 0 || (VAR_14.type & 8));
  else



   VAR_13 = ((VAR_14.type & 0xa) == 8);
  if (VAR_13) {
   FUNC_3(VAR_6, VAR_0, 0);
   return 1;
  }


  VAR_13 = (VAR_14.unusable != 0);







  if (!(VAR_14.base == 0 && VAR_14.limit == 0xffffffff &&
       ((VAR_14.type & 8) || !(VAR_14.type & 4))))
   VAR_13 = VAR_13 || ((u64)VAR_12 + VAR_10 - 1 > VAR_14.limit);
 }
 if (VAR_13) {
  FUNC_3(VAR_6,
          VAR_18 == VAR_5 ?
      VAR_1 : VAR_0,
          0);
  return 1;
 }

 return 0;
}
