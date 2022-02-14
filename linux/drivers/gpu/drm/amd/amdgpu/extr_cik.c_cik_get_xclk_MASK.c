
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ spll; } ;
struct amdgpu_device {int flags; TYPE_2__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_1(struct amdgpu_device *VAR_5)
{
 u32 VAR_6 = VAR_5->clock.spll.reference_freq;

 if (VAR_5->flags & VAR_0) {
  if (FUNC_0(VAR_4) & VAR_2)
   return VAR_6 / 2;
 } else {
  if (FUNC_0(VAR_3) & VAR_1)
   return VAR_6 / 4;
 }
 return VAR_6;
}
