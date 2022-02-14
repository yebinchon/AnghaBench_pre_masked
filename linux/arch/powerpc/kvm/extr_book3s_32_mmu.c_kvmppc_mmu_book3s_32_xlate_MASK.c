
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct kvmppc_pte {int eaddr; int raddr; int may_execute; int may_read; int may_write; int vpage; int page_size; } ;
struct TYPE_2__ {int magic_page_ea; int magic_page_pa; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gva_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int,int) ;
 int FUNC_2 (struct kvm_vcpu*,int,struct kvmppc_pte*,int,int) ;
 int FUNC_3 (struct kvm_vcpu*,int,struct kvmppc_pte*,int,int,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_4, gva_t VAR_5,
          struct kvmppc_pte *VAR_6, bool VAR_7,
          bool VAR_8)
{
 int VAR_9;
 ulong VAR_10 = VAR_4->arch.magic_page_ea;

 VAR_6->eaddr = VAR_5;
 VAR_6->page_size = VAR_2;


 if (FUNC_4(VAR_10) &&
     FUNC_4((VAR_5 & ~0xfffULL) == (VAR_10 & ~0xfffULL)) &&
     !(FUNC_0(VAR_4) & VAR_3)) {
  VAR_6->vpage = FUNC_1(VAR_4, VAR_5, VAR_7);
  VAR_6->raddr = VAR_4->arch.magic_page_pa | (VAR_6->raddr & 0xfff);
  VAR_6->raddr &= VAR_1;
  VAR_6->may_execute = 1;
  VAR_6->may_read = 1;
  VAR_6->may_write = 1;

  return 0;
 }

 VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9 < 0)
  VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8, 1);
 if (VAR_9 == -VAR_0)
  VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8, 0);

 return VAR_9;
}
