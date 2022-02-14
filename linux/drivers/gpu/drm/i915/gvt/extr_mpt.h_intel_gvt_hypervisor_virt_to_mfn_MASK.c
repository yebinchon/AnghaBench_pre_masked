
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mpt; } ;
struct TYPE_3__ {unsigned long (* from_virt_to_mfn ) (void*) ;} ;


 TYPE_2__ VAR_0 ;
 unsigned long FUNC_0 (void*) ;

__attribute__((used)) static inline unsigned long FUNC_1(void *VAR_1)
{
 return VAR_0.mpt->from_virt_to_mfn(VAR_1);
}
