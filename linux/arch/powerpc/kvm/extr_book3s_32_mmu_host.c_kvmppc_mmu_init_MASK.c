
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct kvmppc_vcpu_book3s {int* context_id; scalar_t__ vsid_next; int * vsid_pool; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct kvm_vcpu*) ;
 struct kvmppc_vcpu_book3s* FUNC_5 (struct kvm_vcpu*) ;

int FUNC_6(struct kvm_vcpu *VAR_3)
{
 struct kvmppc_vcpu_book3s *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;
 ulong VAR_6;
 int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = FUNC_2();
  if (VAR_5 < 0)
   goto init_fail;
  VAR_4->context_id[VAR_7] = VAR_5;


  for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
   VAR_4->vsid_pool[(VAR_7 * 16) + VAR_8] = FUNC_0(VAR_5, VAR_8);
 }

 VAR_4->vsid_next = 0;


 asm ( "mfsdr1 %0" : "=r"(VAR_6) );
 VAR_2 = ((VAR_6 & 0x1FF) << 16) | 0xFFC0;
 VAR_1 = (ulong)FUNC_3(VAR_6 & 0xffff0000);

 FUNC_4(VAR_3);

 return 0;

init_fail:
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (!VAR_4->context_id[VAR_8])
   continue;

  FUNC_1(FUNC_5(VAR_3)->context_id[VAR_8]);
 }

 return -1;
}
