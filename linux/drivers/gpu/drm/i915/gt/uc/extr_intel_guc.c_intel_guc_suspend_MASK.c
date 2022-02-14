
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_uncore {int dummy; } ;
struct intel_guc {int dummy; } ;
struct TYPE_2__ {struct intel_uncore* uncore; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intel_uncore*,int ,int ,int ,int ,int,scalar_t__*) ;
 TYPE_1__* FUNC_4 (struct intel_guc*) ;
 int FUNC_5 (struct intel_guc*,scalar_t__*,int ) ;
 int FUNC_6 (struct intel_uncore*,int ,int ) ;

int FUNC_7(struct intel_guc *VAR_5)
{
 struct intel_uncore *VAR_6 = FUNC_4(VAR_5)->uncore;
 int VAR_7;
 u32 VAR_8;
 u32 VAR_9[] = {
  VAR_2,
  VAR_1,
 };
 FUNC_6(VAR_6, FUNC_2(14),
      VAR_3);

 VAR_7 = FUNC_5(VAR_5, VAR_9, FUNC_0(VAR_9));
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_6, FUNC_2(14),
     VAR_3,
     0, 0, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 != VAR_4) {
  FUNC_1("GuC failed to change sleep state. "
     "action=0x%x, err=%u\n",
     VAR_9[0], VAR_8);
  return -VAR_0;
 }

 return 0;
}
