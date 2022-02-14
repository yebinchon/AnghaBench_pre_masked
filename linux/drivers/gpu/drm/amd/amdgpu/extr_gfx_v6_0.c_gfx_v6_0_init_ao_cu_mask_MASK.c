
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int ao_cu_mask; int number; } ;
struct TYPE_4__ {TYPE_1__ cu_info; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_4)
{
 u32 VAR_5;

 FUNC_1(VAR_3, VAR_4->gfx.cu_info.ao_cu_mask);

 VAR_5 = FUNC_0(VAR_2);
 VAR_5 &= ~VAR_0;
 VAR_5 |= (VAR_4->gfx.cu_info.number << VAR_1);
 FUNC_1(VAR_2, VAR_5);
}
