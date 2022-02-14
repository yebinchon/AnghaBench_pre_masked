
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct TYPE_3__ {int count; int fw_domains; } ;
struct intel_guc {int send_mutex; TYPE_1__ send_regs; } ;
struct TYPE_4__ {struct intel_uncore* uncore; } ;


 int FUNC_0 (char*,int const,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int const) ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct intel_uncore*,int ,int ,int,int,int,int*) ;
 int FUNC_5 (struct intel_guc*,int) ;
 TYPE_2__* FUNC_6 (struct intel_guc*) ;
 int FUNC_7 (struct intel_guc*) ;
 int FUNC_8 (struct intel_uncore*,int ) ;
 int FUNC_9 (struct intel_uncore*,int ) ;
 int FUNC_10 (struct intel_uncore*,int ) ;
 int FUNC_11 (struct intel_uncore*,int ) ;
 int FUNC_12 (struct intel_uncore*,int ,int const) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct intel_guc *VAR_7, const u32 *VAR_8, u32 VAR_9,
   u32 *VAR_10, u32 VAR_11)
{
 struct intel_uncore *VAR_12 = FUNC_6(VAR_7)->uncore;
 u32 VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_1(!VAR_9);
 FUNC_1(VAR_9 > VAR_7->send_regs.count);


 FUNC_1(*VAR_8 & ~VAR_3);


 FUNC_1(*VAR_8 != VAR_2 &&
     *VAR_8 != VAR_1);

 FUNC_14(&VAR_7->send_mutex);
 FUNC_8(VAR_12, VAR_7->send_regs.fw_domains);

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
  FUNC_12(VAR_12, FUNC_5(VAR_7, VAR_14), VAR_8[VAR_14]);

 FUNC_10(VAR_12, FUNC_5(VAR_7, VAR_14 - 1));

 FUNC_7(VAR_7);





 VAR_15 = FUNC_4(VAR_12,
        FUNC_5(VAR_7, 0),
        VAR_4,
        VAR_5 <<
        VAR_6,
        10, 10, &VAR_13);

 if (!VAR_15 && !FUNC_2(VAR_13))
  VAR_15 = -VAR_0;

 if (VAR_15) {
  FUNC_0("MMIO: GuC action %#x failed with error %d %#x\n",
     VAR_8[0], VAR_15, VAR_13);
  goto out;
 }

 if (VAR_10) {
  int VAR_16 = FUNC_13(VAR_11, VAR_7->send_regs.count - 1);

  for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++)
   VAR_10[VAR_14] = FUNC_11(VAR_12,
           FUNC_5(VAR_7, VAR_14 + 1));
 }


 VAR_15 = FUNC_3(VAR_13);

out:
 FUNC_9(VAR_12, VAR_7->send_regs.fw_domains);
 FUNC_15(&VAR_7->send_mutex);

 return VAR_15;
}
