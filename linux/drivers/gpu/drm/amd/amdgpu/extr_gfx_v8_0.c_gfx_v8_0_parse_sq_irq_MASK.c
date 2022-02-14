
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int grbm_idx_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned int,int ,int ) ;
 int VAR_7 ;
 unsigned int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct amdgpu_device*,int,int,int) ;
 int FUNC_5 () ;
 int VAR_21 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*) ;
 char** VAR_22 ;

__attribute__((used)) static void FUNC_9(struct amdgpu_device *VAR_23, unsigned VAR_24)
{
 u32 VAR_25, VAR_26, VAR_27, VAR_28;
 char VAR_29[20];
 int VAR_30 = -1;

 VAR_25 = FUNC_2(VAR_24, VAR_14, VAR_2);
 VAR_26 = FUNC_2(VAR_24, VAR_14, VAR_8);

 switch (VAR_25) {
  case 0:
   FUNC_1("SQ general purpose intr detected:"
     "se_id %d, immed_overflow %d, host_reg_overflow %d,"
     "host_cmd_overflow %d, cmd_timestamp %d,"
     "reg_timestamp %d, thread_trace_buff_full %d,"
     "wlt %d, thread_trace %d.\n",
     VAR_26,
     FUNC_2(VAR_24, VAR_13, VAR_5),
     FUNC_2(VAR_24, VAR_13, VAR_4),
     FUNC_2(VAR_24, VAR_13, VAR_3),
     FUNC_2(VAR_24, VAR_13, VAR_0),
     FUNC_2(VAR_24, VAR_13, VAR_7),
     FUNC_2(VAR_24, VAR_13, VAR_17),
     FUNC_2(VAR_24, VAR_13, VAR_20),
     FUNC_2(VAR_24, VAR_13, VAR_16)
     );
   break;
  case 1:
  case 2:

   VAR_28 = FUNC_2(VAR_24, VAR_15, VAR_1);
   VAR_27 = FUNC_2(VAR_24, VAR_15, VAR_9);






   if (FUNC_5()) {
    FUNC_6(&VAR_23->grbm_idx_mutex);
    FUNC_4(VAR_23, VAR_26, VAR_27, VAR_28);

    VAR_30 = FUNC_2(FUNC_3(VAR_21), VAR_12, VAR_11);

    FUNC_4(VAR_23, 0xffffffff, 0xffffffff, 0xffffffff);
    FUNC_7(&VAR_23->grbm_idx_mutex);
   }

   if (VAR_25 == 1)
    FUNC_8(VAR_29, "instruction intr");
   else
    FUNC_8(VAR_29, "EDC/ECC error");

   FUNC_1(
    "SQ %s detected: "
     "se_id %d, sh_id %d, cu_id %d, simd_id %d, wave_id %d, vm_id %d "
     "trap %s, sq_ed_info.source %s.\n",
     VAR_29, VAR_26, VAR_27, VAR_28,
     FUNC_2(VAR_24, VAR_15, VAR_10),
     FUNC_2(VAR_24, VAR_15, VAR_19),
     FUNC_2(VAR_24, VAR_15, VAR_18),
     FUNC_2(VAR_24, VAR_15, VAR_6) ? "true" : "false",
     (VAR_30 != -1) ? VAR_22[VAR_30] : "unavailable"
    );
   break;
  default:
   FUNC_0("SQ invalid encoding type\n.");
 }
}
