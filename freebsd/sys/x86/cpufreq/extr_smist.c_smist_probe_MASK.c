
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smist_softc {int smi_cmd; int smi_data; int command; int flags; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (scalar_t__,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 struct smist_softc* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,char*,...) ;
 int FUNC_6 (scalar_t__,char*) ;
 int FUNC_7 (int*,int*,int*,int*,int*) ;
 scalar_t__ FUNC_8 (char*,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct smist_softc *VAR_4;
 device_t VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;

 if (FUNC_8("smist", 0))
  return (VAR_1);

 VAR_4 = FUNC_3(VAR_3);





 VAR_6 = FUNC_1(FUNC_2(VAR_3), "acpi_perf", -1);
 if (VAR_6 && FUNC_4(VAR_6)) {
  VAR_13 = FUNC_0(VAR_6, &VAR_12);
  if (VAR_13 == 0 && (VAR_12 & VAR_0) == 0)
   return (VAR_1);
 }
 VAR_5 = FUNC_1(FUNC_2(VAR_3), "ichss", -1);
 if (VAR_5 && FUNC_4(VAR_5))
  return (VAR_1);

 FUNC_7(&VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_2)
  FUNC_5(VAR_3, "sig %.8x smi_cmd %.4x command %.2x "
      "smi_data %.4x flags %.8x\n",
      VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

 if (VAR_7 != -1) {
  VAR_4->smi_cmd = VAR_8;
  VAR_4->smi_data = VAR_10;






  if (VAR_9 == 0x80) {
   FUNC_5(VAR_3,
       "GSIC returned cmd 0x80, should be 0x82\n");
   VAR_9 = 0x82;
  }
  VAR_4->command = (VAR_7 & 0xffffff00) | (VAR_9 & 0xff);
  VAR_4->flags = VAR_11;
 } else {

  VAR_4->smi_cmd = 0xb2;
  VAR_4->smi_data = 0xb3;
  VAR_4->command = 0x47534982;
  VAR_4->flags = 0;
 }

 FUNC_6(VAR_3, "SpeedStep SMI");

 return (-1500);
}
