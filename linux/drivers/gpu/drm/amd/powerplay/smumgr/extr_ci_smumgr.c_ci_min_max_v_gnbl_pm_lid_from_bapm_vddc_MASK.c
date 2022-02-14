
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pp_hwmgr {scalar_t__ smu_backend; } ;
struct TYPE_2__ {int* BapmVddCVidHiSidd; int* BapmVddCVidLoSidd; int GnbLPMLMaxVid; int GnbLPMLMinVid; } ;
struct ci_smumgr {TYPE_1__ power_tune_table; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1)
{
 struct ci_smumgr *VAR_2 = (struct ci_smumgr *)(VAR_1->smu_backend);
 u8 *VAR_3 = VAR_2->power_tune_table.BapmVddCVidHiSidd;
 u8 *VAR_4 = VAR_2->power_tune_table.BapmVddCVidLoSidd;
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = VAR_7 = VAR_3[0];
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  if (0 != VAR_3[VAR_5]) {
   if (VAR_6 > VAR_3[VAR_5])
    VAR_6 = VAR_3[VAR_5];
   if (VAR_7 < VAR_3[VAR_5])
    VAR_7 = VAR_3[VAR_5];
  }

  if (0 != VAR_4[VAR_5]) {
   if (VAR_6 > VAR_4[VAR_5])
    VAR_6 = VAR_4[VAR_5];
   if (VAR_7 < VAR_4[VAR_5])
    VAR_7 = VAR_4[VAR_5];
  }
 }

 if ((VAR_6 == 0) || (VAR_7 == 0))
  return -VAR_0;
 VAR_2->power_tune_table.GnbLPMLMaxVid = (u8)VAR_7;
 VAR_2->power_tune_table.GnbLPMLMinVid = (u8)VAR_6;

 return 0;
}
