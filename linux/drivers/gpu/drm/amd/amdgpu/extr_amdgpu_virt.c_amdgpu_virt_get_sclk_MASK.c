
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct amdgpu_device {TYPE_2__ virt; } ;
struct TYPE_3__ {int (* get_pp_clk ) (struct amdgpu_device*,int ,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct amdgpu_device*,int ,char*) ;

uint32_t FUNC_4(struct amdgpu_device *VAR_4, bool VAR_5)
{
 char *VAR_6 = ((void*)0);
 uint32_t VAR_7 = 0;

 VAR_6 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->virt.ops->get_pp_clk(VAR_4, VAR_3, VAR_6);
 VAR_7 = FUNC_2(VAR_6, VAR_5);

 FUNC_0(VAR_6);

 return VAR_7;
}
