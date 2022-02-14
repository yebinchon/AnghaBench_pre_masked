
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned short port; int in; unsigned int count; int size; } ;
struct TYPE_6__ {TYPE_1__ pio; int pio_data; } ;
struct kvm_vcpu {TYPE_4__* run; TYPE_2__ arch; } ;
struct TYPE_7__ {int size; int data_offset; unsigned int count; unsigned short port; int direction; } ;
struct TYPE_8__ {TYPE_3__ io; int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_5, int VAR_6,
          unsigned short VAR_7, void *VAR_8,
          unsigned int VAR_9, bool VAR_10)
{
 VAR_5->arch.pio.port = VAR_7;
 VAR_5->arch.pio.in = VAR_10;
 VAR_5->arch.pio.count = VAR_9;
 VAR_5->arch.pio.size = VAR_6;

 if (!FUNC_0(VAR_5, VAR_5->arch.pio_data)) {
  VAR_5->arch.pio.count = 0;
  return 1;
 }

 VAR_5->run->exit_reason = VAR_0;
 VAR_5->run->io.direction = VAR_10 ? VAR_1 : VAR_2;
 VAR_5->run->io.size = VAR_6;
 VAR_5->run->io.data_offset = VAR_3 * VAR_4;
 VAR_5->run->io.count = VAR_9;
 VAR_5->run->io.port = VAR_7;

 return 0;
}
