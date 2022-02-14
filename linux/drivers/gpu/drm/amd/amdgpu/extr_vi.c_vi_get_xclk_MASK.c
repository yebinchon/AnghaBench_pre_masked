
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
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u32 FUNC_2(struct amdgpu_device *VAR_7)
{
 u32 VAR_8 = VAR_7->clock.spll.reference_freq;
 u32 VAR_9;

 if (VAR_7->flags & VAR_0)
  return VAR_8;

 VAR_9 = FUNC_1(VAR_6);
 if (FUNC_0(VAR_9, VAR_2, VAR_3))
  return 1000;

 VAR_9 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_9, VAR_1, VAR_4))
  return VAR_8 / 4;

 return VAR_8;
}
