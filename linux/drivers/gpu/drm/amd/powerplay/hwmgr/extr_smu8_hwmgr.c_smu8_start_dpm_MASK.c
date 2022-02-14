
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_hwmgr {int dpm_flags; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_3)
{
 struct smu8_hwmgr *VAR_4 = VAR_3->backend;

 VAR_4->dpm_flags |= VAR_0;

 return FUNC_0(VAR_3,
    VAR_1,
    VAR_2);
}
