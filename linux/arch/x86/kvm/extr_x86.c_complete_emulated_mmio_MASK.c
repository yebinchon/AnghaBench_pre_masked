
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* complete_userspace_io ) (struct kvm_vcpu*) ;} ;
struct kvm_vcpu {size_t mmio_cur_fragment; size_t mmio_nr_fragments; int mmio_read_completed; TYPE_2__ arch; scalar_t__ mmio_is_write; scalar_t__ mmio_needed; struct kvm_mmio_fragment* mmio_fragments; struct kvm_run* run; } ;
struct TYPE_3__ {unsigned int data; unsigned int phys_addr; unsigned int len; scalar_t__ is_write; } ;
struct kvm_run {TYPE_1__ mmio; int exit_reason; } ;
struct kvm_mmio_fragment {int len; unsigned int data; unsigned int gpa; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct kvm_run *VAR_2 = VAR_1->run;
 struct kvm_mmio_fragment *VAR_3;
 unsigned VAR_4;

 FUNC_0(!VAR_1->mmio_needed);


 VAR_3 = &VAR_1->mmio_fragments[VAR_1->mmio_cur_fragment];
 VAR_4 = FUNC_3(8u, VAR_3->len);
 if (!VAR_1->mmio_is_write)
  FUNC_2(VAR_3->data, VAR_2->mmio.data, VAR_4);

 if (VAR_3->len <= 8) {

  VAR_3++;
  VAR_1->mmio_cur_fragment++;
 } else {

  VAR_3->data += VAR_4;
  VAR_3->gpa += VAR_4;
  VAR_3->len -= VAR_4;
 }

 if (VAR_1->mmio_cur_fragment >= VAR_1->mmio_nr_fragments) {
  VAR_1->mmio_needed = 0;


  if (VAR_1->mmio_is_write)
   return 1;
  VAR_1->mmio_read_completed = 1;
  return FUNC_1(VAR_1);
 }

 VAR_2->exit_reason = VAR_0;
 VAR_2->mmio.phys_addr = VAR_3->gpa;
 if (VAR_1->mmio_is_write)
  FUNC_2(VAR_2->mmio.data, VAR_3->data, FUNC_3(8u, VAR_3->len));
 VAR_2->mmio.len = FUNC_3(8u, VAR_3->len);
 VAR_2->mmio.is_write = VAR_1->mmio_is_write;
 VAR_1->arch.complete_userspace_io = FUNC_4;
 return 0;
}
