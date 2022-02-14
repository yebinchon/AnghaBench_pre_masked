
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cryp_protection_config {int privilege_access; scalar_t__ secure_access; } ;
struct cryp_device_data {TYPE_1__* base; } ;
struct TYPE_2__ {int cr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_3 ;

int FUNC_2(struct cryp_device_data *VAR_4,
         struct cryp_protection_config *VAR_5)
{
 if (((void*)0) == VAR_5)
  return -VAR_3;

 FUNC_1(&VAR_4->base->cr,
         (u32) VAR_5->secure_access,
         VAR_2);
 FUNC_0(&VAR_4->base->cr,
        VAR_5->privilege_access,
        VAR_1,
        VAR_0);

 return 0;
}
