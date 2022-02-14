
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* bar; } ;
struct intel_vgpu {TYPE_2__ cfg_space; } ;
typedef int phys_addr_t ;
struct TYPE_3__ {int tracked; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_vgpu*,int,int,unsigned long,int) ;
 int FUNC_1 (struct intel_vgpu*) ;
 int FUNC_2 (struct intel_vgpu*) ;
 unsigned long FUNC_3 (struct intel_vgpu*) ;
 int* FUNC_4 (struct intel_vgpu*) ;

__attribute__((used)) static int FUNC_5(struct intel_vgpu *VAR_4, bool VAR_5)
{
 phys_addr_t VAR_6 = FUNC_2(VAR_4);
 unsigned long VAR_7 = FUNC_3(VAR_4);
 u64 VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (VAR_5 == VAR_4->cfg_space.bar[VAR_0].tracked)
  return 0;

 VAR_9 = FUNC_4(VAR_4)[VAR_2];
 if (VAR_9 & VAR_3)
  VAR_9 = *(u64 *)(FUNC_4(VAR_4) + VAR_2);
 else
  VAR_9 = *(u32 *)(FUNC_4(VAR_4) + VAR_2);

 VAR_8 = (VAR_9 + FUNC_1(VAR_4)) >> VAR_1;

 VAR_10 = FUNC_0(VAR_4, VAR_8,
        VAR_6 >> VAR_1,
        VAR_7 >> VAR_1,
        VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_4->cfg_space.bar[VAR_0].tracked = VAR_5;
 return 0;
}
