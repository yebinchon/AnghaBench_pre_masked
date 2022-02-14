
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_bo {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct amdgpu_bo *VAR_1, unsigned long VAR_2)
{
 FUNC_0("HMM_MIRROR kernel config option is not enabled, "
        "add CONFIG_ZONE_DEVICE=y in config file to fix this\n");
 return -VAR_0;
}
