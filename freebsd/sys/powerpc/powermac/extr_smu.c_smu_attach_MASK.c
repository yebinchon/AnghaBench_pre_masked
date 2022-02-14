
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct smu_softc {int sc_doorbellirqid; int sc_u3; int sc_cpu_diode_scale; int sc_cpu_diode_offset; int sc_cpu_volt_scale; int sc_cpu_volt_offset; int sc_cpu_curr_scale; int sc_cpu_curr_offset; int sc_slots_pow_scale; int sc_slots_pow_offset; int sc_doorbellirq; int sc_doorbellirqcookie; int sc_leddev; int sc_cmdq; int sc_cmd; int sc_cmd_dmamap; int sc_dmatag; int sc_mailbox; int * sc_bt; int * sc_cur_cmd; int sc_mtx; } ;
typedef scalar_t__ phandle_t ;
typedef int name ;
typedef int device_t ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_7 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (int ,int ,int*,int ) ;
 int FUNC_9 (int *,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_10 (int ,int ,int ,int ,int ,struct smu_softc*,int ) ;
 int FUNC_11 (int ,void**,int,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int,int *,int ,int ,int *) ;
 int FUNC_14 (int *,int ,int,int ,int *) ;
 int FUNC_15 (int ,int) ;
 int VAR_22 ;
 int VAR_23 ;
 struct smu_softc* FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,char*) ;
 int FUNC_20 (char*,int ,int) ;
 int FUNC_21 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (int ) ;
 int VAR_24 ;
 int FUNC_25 (int ,scalar_t__) ;
 int FUNC_26 (int ,scalar_t__) ;
 int FUNC_27 (int ,scalar_t__) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_28 (int ,int ,int*,int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_29 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_30(device_t VAR_33)
{
 struct smu_softc *VAR_34;
 phandle_t VAR_35, VAR_36;
 uint8_t VAR_37[12];

 VAR_34 = FUNC_16(VAR_33);

 FUNC_21(&VAR_34->sc_mtx, "smu", ((void*)0), VAR_11);
 VAR_34->sc_cur_cmd = ((void*)0);
 VAR_34->sc_doorbellirqid = -1;

 VAR_34->sc_u3 = 0;
 if (FUNC_2("/u3") != -1)
  VAR_34->sc_u3 = 1;





 FUNC_9(((void*)0), 16, 0, VAR_3,
     VAR_2, ((void*)0), ((void*)0), VAR_13, 1, VAR_13, 0, ((void*)0),
     ((void*)0), &(VAR_34->sc_dmatag));
 VAR_34->sc_bt = &VAR_21;
 FUNC_14(VAR_34->sc_bt, VAR_18, 4, 0, &VAR_34->sc_mailbox);





 FUNC_11(VAR_34->sc_dmatag, (void **)&VAR_34->sc_cmd, VAR_0 |
     VAR_1, &VAR_34->sc_cmd_dmamap);
 FUNC_10(VAR_34->sc_dmatag, VAR_34->sc_cmd_dmamap,
     VAR_34->sc_cmd, VAR_13, VAR_29, VAR_34, 0);
 FUNC_5(&VAR_34->sc_cmdq);




 FUNC_0(VAR_23, VAR_26, VAR_33,
     VAR_6);
 FUNC_0(VAR_22, VAR_25, VAR_33,
     VAR_6);

 VAR_35 = FUNC_22(VAR_33);




 FUNC_25(VAR_33, VAR_35);




 for (VAR_36 = FUNC_1(VAR_35); VAR_36 != 0; VAR_36 = FUNC_4(VAR_36)) {
  char VAR_38[32];
  FUNC_20(VAR_38, 0, sizeof(VAR_38));
  FUNC_3(VAR_36, "name", VAR_38, sizeof(VAR_38));

  if (FUNC_29(VAR_38, "sensors", 8) == 0)
   FUNC_27(VAR_33, VAR_36);

  if (FUNC_29(VAR_38, "smu-i2c-control", 15) == 0)
   FUNC_26(VAR_33, VAR_36);
 }


 FUNC_26(VAR_33, VAR_35);




 FUNC_28(VAR_33, VAR_16, VAR_37, sizeof(VAR_37));
 VAR_34->sc_cpu_diode_scale = (VAR_37[4] << 8) + VAR_37[5];
 VAR_34->sc_cpu_diode_offset = (VAR_37[6] << 8) + VAR_37[7];

 FUNC_28(VAR_33, VAR_17, VAR_37, sizeof(VAR_37));
 VAR_34->sc_cpu_volt_scale = (VAR_37[4] << 8) + VAR_37[5];
 VAR_34->sc_cpu_volt_offset = (VAR_37[6] << 8) + VAR_37[7];
 VAR_34->sc_cpu_curr_scale = (VAR_37[8] << 8) + VAR_37[9];
 VAR_34->sc_cpu_curr_offset = (VAR_37[10] << 8) + VAR_37[11];

 FUNC_28(VAR_33, VAR_19, VAR_37, sizeof(VAR_37));
 VAR_34->sc_slots_pow_scale = (VAR_37[4] << 8) + VAR_37[5];
 VAR_34->sc_slots_pow_offset = (VAR_37[6] << 8) + VAR_37[7];




 VAR_34->sc_leddev = FUNC_19(VAR_31, VAR_33, "sleepled");





 FUNC_6(FUNC_17(VAR_33),
            FUNC_7(FUNC_18(VAR_33)), VAR_12,
     "server_mode", VAR_5 | VAR_4, VAR_33, 0,
     VAR_30, "I", "Enable reboot after power failure");




 VAR_34->sc_doorbellirqid = 0;
 VAR_34->sc_doorbellirq = FUNC_8(VAR_27, VAR_20,
     &VAR_34->sc_doorbellirqid, VAR_14);
 FUNC_13(VAR_27, VAR_34->sc_doorbellirq,
     VAR_10 | VAR_7, ((void*)0), VAR_28, VAR_33,
     &VAR_34->sc_doorbellirqcookie);
 FUNC_23(FUNC_24(VAR_34->sc_doorbellirq),
     VAR_9, VAR_8);




 FUNC_15(VAR_33, 1000);




 FUNC_0(VAR_24, VAR_32, VAR_33,
     VAR_15);

 return (FUNC_12(VAR_33));
}
