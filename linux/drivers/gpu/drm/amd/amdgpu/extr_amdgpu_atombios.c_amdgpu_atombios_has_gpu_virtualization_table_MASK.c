
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int,int *,int *,int *,int *) ;

bool FUNC_2(struct amdgpu_device *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1);
 u8 VAR_4, VAR_5;
 u16 VAR_6, VAR_7;

 if (FUNC_1(VAR_2->mode_info.atom_context, VAR_3, &VAR_7,
       &VAR_4, &VAR_5, &VAR_6))
  return 1;

 return 0;
}
