
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int MC; } ;
struct pp_hwmgr {int device; TYPE_1__ microcode_version_info; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2)
{
 FUNC_1(VAR_2->device, VAR_1, 0x9F);

 VAR_2->microcode_version_info.MC = FUNC_0(VAR_2->device, VAR_0);

 return 0;
}
