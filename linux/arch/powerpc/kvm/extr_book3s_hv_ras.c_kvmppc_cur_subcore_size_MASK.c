
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* kvm_split_mode; } ;
struct TYPE_6__ {TYPE_2__ kvm_hstate; } ;
struct TYPE_4__ {int subcore_size; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(void)
{
 if (VAR_0->kvm_hstate.kvm_split_mode)
  return VAR_0->kvm_hstate.kvm_split_mode->subcore_size;

 return VAR_1;
}
