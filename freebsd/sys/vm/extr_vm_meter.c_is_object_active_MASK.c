
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
struct TYPE_3__ {scalar_t__ ref_count; scalar_t__ shadow_count; } ;



__attribute__((used)) static bool
FUNC_0(vm_object_t VAR_0)
{

 return (VAR_0->ref_count > VAR_0->shadow_count);
}
