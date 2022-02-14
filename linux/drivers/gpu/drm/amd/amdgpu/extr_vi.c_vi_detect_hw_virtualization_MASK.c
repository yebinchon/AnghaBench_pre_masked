
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int caps; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_9)
{
 uint32_t VAR_10 = 0;

 if (VAR_9->asic_type == VAR_5 ||
     VAR_9->asic_type == VAR_4) {
        VAR_10 = FUNC_1(VAR_8);

        if (FUNC_0(VAR_10, VAR_3, VAR_6))
         VAR_9->virt.caps |= VAR_2;

        if (FUNC_0(VAR_10, VAR_3, VAR_7))
         VAR_9->virt.caps |= VAR_1;
 }

 if (VAR_10 == 0) {
  if (FUNC_2())
   VAR_9->virt.caps |= VAR_0;
 }
}
