
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_hwmgr {int dpm_flags; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_3)
{
 int VAR_4 = 0;
 struct smu8_hwmgr *VAR_5 = VAR_3->backend;
 unsigned long VAR_6 = 0;

 if (VAR_5->dpm_flags & VAR_0) {
  VAR_6 |= VAR_2;
  VAR_5->dpm_flags &= ~VAR_0;
  VAR_4 = FUNC_0(VAR_3,
     VAR_1,
     VAR_6);
 }
 return VAR_4;
}
