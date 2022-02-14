
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int caps; } ;
struct amdgpu_device {TYPE_1__ virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_3, 0, VAR_4);
 if (VAR_6 & 1)
  VAR_5->virt.caps |= VAR_2;

 if (VAR_6 & 0x80000000)
  VAR_5->virt.caps |= VAR_1;

 if (!VAR_6) {
  if (FUNC_1())
   VAR_5->virt.caps |= VAR_0;
 }
}
