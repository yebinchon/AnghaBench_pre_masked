
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;


 int VAR_15 ;


 int VAR_16 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(u32 VAR_17, u32 VAR_18)
{
 const char *VAR_19;

 switch (VAR_17 & VAR_15) {
 case 129:
 default:
  VAR_19 = "none";
  break;
 case 130:
  VAR_19 = "battery";
  break;
 case 131:
  VAR_19 = "balanced";
  break;
 case 128:
  VAR_19 = "performance";
  break;
 }
 FUNC_1("\tui class: %s\n", VAR_19);

 FUNC_1("\tinternal class:");
 if (((VAR_17 & ~VAR_15) == 0) &&
     (VAR_18 == 0))
  FUNC_0(" none");
 else {
  if (VAR_17 & VAR_6)
   FUNC_0(" boot");
  if (VAR_17 & VAR_14)
   FUNC_0(" thermal");
  if (VAR_17 & VAR_10)
   FUNC_0(" limited_pwr");
  if (VAR_17 & VAR_12)
   FUNC_0(" rest");
  if (VAR_17 & VAR_7)
   FUNC_0(" forced");
  if (VAR_17 & VAR_4)
   FUNC_0(" 3d_perf");
  if (VAR_17 & VAR_11)
   FUNC_0(" ovrdrv");
  if (VAR_17 & VAR_16)
   FUNC_0(" uvd");
  if (VAR_17 & VAR_3)
   FUNC_0(" 3d_low");
  if (VAR_17 & VAR_5)
   FUNC_0(" acpi");
  if (VAR_17 & VAR_8)
   FUNC_0(" uvd_hd2");
  if (VAR_17 & VAR_9)
   FUNC_0(" uvd_hd");
  if (VAR_17 & VAR_13)
   FUNC_0(" uvd_sd");
  if (VAR_18 & VAR_0)
   FUNC_0(" limited_pwr2");
  if (VAR_18 & VAR_2)
   FUNC_0(" ulv");
  if (VAR_18 & VAR_1)
   FUNC_0(" uvd_mvc");
 }
 FUNC_0("\n");
}
