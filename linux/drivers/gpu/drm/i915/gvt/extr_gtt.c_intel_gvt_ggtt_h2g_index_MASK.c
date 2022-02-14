
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct intel_vgpu {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct intel_vgpu*,unsigned long,unsigned long*) ;

int FUNC_1(struct intel_vgpu *VAR_1, unsigned long VAR_2,
        unsigned long *VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2 << VAR_0,
           &VAR_4);
 if (VAR_5)
  return VAR_5;

 *VAR_3 = VAR_4 >> VAR_0;
 return 0;
}
