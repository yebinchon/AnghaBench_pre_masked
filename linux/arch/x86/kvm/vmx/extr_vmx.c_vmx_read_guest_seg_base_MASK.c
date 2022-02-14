
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_5__ {TYPE_1__* seg; } ;
struct vcpu_vmx {TYPE_2__ segment_cache; } ;
struct TYPE_6__ {int base; } ;
struct TYPE_4__ {int base; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vcpu_vmx*,unsigned int,int ) ;

__attribute__((used)) static ulong FUNC_2(struct vcpu_vmx *VAR_2, unsigned VAR_3)
{
 ulong *VAR_4 = &VAR_2->segment_cache.seg[VAR_3].base;

 if (!FUNC_1(VAR_2, VAR_3, VAR_0))
  *VAR_4 = FUNC_0(VAR_1[VAR_3].base);
 return *VAR_4;
}
