
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pckmo; } ;
struct TYPE_6__ {TYPE_1__ subfuncs; } ;
struct TYPE_7__ {TYPE_2__ model; } ;
struct kvm {TYPE_3__ arch; } ;
struct TYPE_8__ {int pckmo; } ;


 TYPE_4__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long*) ;

__attribute__((used)) static bool FUNC_1(struct kvm *VAR_1, unsigned long VAR_2)
{
 if (FUNC_0(VAR_2, (unsigned long *)&VAR_1->arch.model.subfuncs.pckmo) &&
     FUNC_0(VAR_2, (unsigned long *)&VAR_0.pckmo))
  return 1;
 return 0;
}
