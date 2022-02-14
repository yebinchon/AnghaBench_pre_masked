
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct page {int dummy; } ;
struct kvmppc_pte {int raddr; } ;
struct kvm_vcpu {int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int * FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_4, struct kvmppc_pte *VAR_5)
{
 struct page *VAR_6;
 u64 VAR_7;
 u32 *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(VAR_4->kvm, VAR_5->raddr >> VAR_3);
 if (FUNC_4(VAR_6))
  return;

 VAR_7 = VAR_5->raddr & ~VAR_2;
 VAR_7 &= ~0xFFFULL;
 VAR_7 /= 4;

 FUNC_2(VAR_6);
 VAR_8 = FUNC_5(VAR_6);


 for (VAR_9=VAR_7; VAR_9 < VAR_7 + (VAR_0 / 4); VAR_9++)
  if ((FUNC_0(VAR_8[VAR_9]) & 0xff0007ff) == VAR_1)
   VAR_8[VAR_9] &= FUNC_1(0xfffffff7);

 FUNC_6(VAR_8);
 FUNC_7(VAR_6);
}
