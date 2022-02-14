
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_device {TYPE_1__* df_funcs; } ;
struct TYPE_2__ {int (* get_fb_channel_number ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static u32 FUNC_2(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->df_funcs->get_fb_channel_number(VAR_1);
 if (VAR_2 >= FUNC_0(VAR_0))
  VAR_2 = 0;

 return VAR_0[VAR_2];
}
