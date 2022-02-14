
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_exception {int dummy; } ;
struct x86_emulate_ctxt {int dummy; } ;
struct read_write_emulator_ops {int write; int (* read_write_mmio ) (struct kvm_vcpu*,int,unsigned int,void*) ;scalar_t__ (* read_write_emulate ) (struct kvm_vcpu*,int,void*,unsigned int) ;} ;
struct TYPE_2__ {unsigned long gpa_val; scalar_t__ gpa_available; struct x86_emulate_ctxt emulate_ctxt; } ;
struct kvm_vcpu {scalar_t__ mmio_nr_fragments; struct kvm_mmio_fragment* mmio_fragments; TYPE_1__ arch; } ;
struct kvm_mmio_fragment {int gpa; unsigned int len; void* data; } ;
typedef int gpa_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct x86_emulate_ctxt*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int,void*,unsigned int) ;
 int FUNC_3 (struct kvm_vcpu*,int,unsigned int,void*) ;
 int FUNC_4 (struct kvm_vcpu*,unsigned long,int,int) ;
 int FUNC_5 (struct kvm_vcpu*,unsigned long,int*,struct x86_exception*,int) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_4, void *VAR_5,
           unsigned int VAR_6,
           struct x86_exception *VAR_7,
           struct kvm_vcpu *VAR_8,
           const struct read_write_emulator_ops *VAR_9)
{
 gpa_t VAR_10;
 int VAR_11, VAR_12;
 bool VAR_13 = VAR_9->write;
 struct kvm_mmio_fragment *VAR_14;
 struct x86_emulate_ctxt *VAR_15 = &VAR_8->arch.emulate_ctxt;
 if (VAR_8->arch.gpa_available &&
     FUNC_1(VAR_15) &&
     (VAR_4 & ~VAR_1) == (VAR_8->arch.gpa_val & ~VAR_1)) {
  VAR_10 = VAR_8->arch.gpa_val;
  VAR_12 = FUNC_4(VAR_8, VAR_4, VAR_10, VAR_13);
 } else {
  VAR_12 = FUNC_5(VAR_8, VAR_4, &VAR_10, VAR_7, VAR_13);
  if (VAR_12 < 0)
   return VAR_3;
 }

 if (!VAR_12 && VAR_9->read_write_emulate(VAR_8, VAR_10, VAR_5, VAR_6))
  return VAR_2;




 VAR_11 = VAR_9->read_write_mmio(VAR_8, VAR_10, VAR_6, VAR_5);
 if (VAR_11 == VAR_6)
  return VAR_2;

 VAR_10 += VAR_11;
 VAR_6 -= VAR_11;
 VAR_5 += VAR_11;

 FUNC_0(VAR_8->mmio_nr_fragments >= VAR_0);
 VAR_14 = &VAR_8->mmio_fragments[VAR_8->mmio_nr_fragments++];
 VAR_14->gpa = VAR_10;
 VAR_14->data = VAR_5;
 VAR_14->len = VAR_6;
 return VAR_2;
}
