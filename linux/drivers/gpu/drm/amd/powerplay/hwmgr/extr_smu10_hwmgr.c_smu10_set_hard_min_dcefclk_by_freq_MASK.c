
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu10_hwmgr {scalar_t__ dcf_actual_hard_min_freq; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1, uint32_t VAR_2)
{
 struct smu10_hwmgr *VAR_3 = (struct smu10_hwmgr *)(VAR_1->backend);

 if (VAR_3->dcf_actual_hard_min_freq &&
  VAR_3->dcf_actual_hard_min_freq != VAR_2) {
  VAR_3->dcf_actual_hard_min_freq = VAR_2;
  FUNC_0(VAR_1,
     VAR_0,
     VAR_3->dcf_actual_hard_min_freq);
 }
 return 0;
}
