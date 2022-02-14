
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u32 ;
struct x86_exception {int dummy; } ;
struct x86_emulate_ctxt {scalar_t__ mode; } ;
struct read_write_emulator_ops {int (* read_write_exit_mmio ) (struct kvm_vcpu*,int ,void*,unsigned int) ;int write; scalar_t__ (* read_write_prepare ) (struct kvm_vcpu*,void*,unsigned int) ;} ;
struct kvm_vcpu {int mmio_needed; TYPE_3__* run; int mmio_is_write; TYPE_1__* mmio_fragments; scalar_t__ mmio_cur_fragment; scalar_t__ mmio_nr_fragments; } ;
typedef int gpa_t ;
struct TYPE_5__ {int phys_addr; int is_write; int len; } ;
struct TYPE_6__ {TYPE_2__ mmio; int exit_reason; } ;
struct TYPE_4__ {int len; int gpa; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct kvm_vcpu* FUNC_0 (struct x86_emulate_ctxt*) ;
 int FUNC_1 (unsigned long,void*,unsigned int,struct x86_exception*,struct kvm_vcpu*,struct read_write_emulator_ops const*) ;
 int FUNC_2 (unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,void*,unsigned int) ;
 int FUNC_4 (struct kvm_vcpu*,int ,void*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct x86_emulate_ctxt *VAR_4,
   unsigned long VAR_5,
   void *VAR_6, unsigned int VAR_7,
   struct x86_exception *VAR_8,
   const struct read_write_emulator_ops *VAR_9)
{
 struct kvm_vcpu *VAR_10 = FUNC_0(VAR_4);
 gpa_t VAR_11;
 int VAR_12;

 if (VAR_9->read_write_prepare &&
    VAR_9->read_write_prepare(VAR_10, VAR_6, VAR_7))
  return VAR_2;

 VAR_10->mmio_nr_fragments = 0;


 if (((VAR_5 + VAR_7 - 1) ^ VAR_5) & VAR_1) {
  int VAR_13;

  VAR_13 = -VAR_5 & ~VAR_1;
  VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_13, VAR_8,
       VAR_10, VAR_9);

  if (VAR_12 != VAR_2)
   return VAR_12;
  VAR_5 += VAR_13;
  if (VAR_4->mode != VAR_3)
   VAR_5 = (u32)VAR_5;
  VAR_6 += VAR_13;
  VAR_7 -= VAR_13;
 }

 VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_10, VAR_9);
 if (VAR_12 != VAR_2)
  return VAR_12;

 if (!VAR_10->mmio_nr_fragments)
  return VAR_12;

 VAR_11 = VAR_10->mmio_fragments[0].gpa;

 VAR_10->mmio_needed = 1;
 VAR_10->mmio_cur_fragment = 0;

 VAR_10->run->mmio.len = FUNC_2(8u, VAR_10->mmio_fragments[0].len);
 VAR_10->run->mmio.is_write = VAR_10->mmio_is_write = VAR_9->write;
 VAR_10->run->exit_reason = VAR_0;
 VAR_10->run->mmio.phys_addr = VAR_11;

 return VAR_9->read_write_exit_mmio(VAR_10, VAR_11, VAR_6, VAR_7);
}
