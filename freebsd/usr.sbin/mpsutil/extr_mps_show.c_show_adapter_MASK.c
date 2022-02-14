
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_16__ {int Word; } ;
struct TYPE_15__ {int PageLength; } ;
struct TYPE_18__ {char* BoardName; char* BoardAssembly; char* ChipName; char* ChipRevision; int BiosVersion; int IOCCapabilities; int NumPhys; TYPE_3__* PhyData; TYPE_2__ FWVersion; TYPE_1__ Header; } ;
struct TYPE_17__ {int PortFlags; int PhyFlags; int MaxMinLinkRate; scalar_t__ AttachedDevHandle; int ControllerDevHandle; int NegotiatedLinkRate; int ControllerPhyDeviceInfo; } ;
typedef TYPE_3__ MPI2_SAS_IO_UNIT1_PHY_DATA ;
typedef TYPE_3__ MPI2_SAS_IO_UNIT0_PHY_DATA ;
typedef TYPE_5__ MPI2_IOC_FACTS_REPLY ;
typedef TYPE_5__ MPI2_CONFIG_PAGE_SASIOUNIT_1 ;
typedef TYPE_5__ MPI2_CONFIG_PAGE_SASIOUNIT_0 ;
typedef TYPE_5__ MPI2_CONFIG_PAGE_MAN_0 ;
typedef TYPE_5__ MPI2_CONFIG_PAGE_BIOS_3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (TYPE_5__*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 TYPE_5__* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 TYPE_5__* FUNC_6 (int,int ,int,int ,int *) ;
 TYPE_5__* FUNC_7 (int,int ,int ,int,int ,int *) ;
 TYPE_5__* FUNC_8 (int,int ,int *) ;
 int VAR_10 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,char*,...) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int
FUNC_13(int VAR_11, char **VAR_12)
{
 MPI2_CONFIG_PAGE_SASIOUNIT_0 *VAR_13;
 MPI2_CONFIG_PAGE_SASIOUNIT_1 *VAR_14;
 MPI2_SAS_IO_UNIT0_PHY_DATA *VAR_15;
 MPI2_SAS_IO_UNIT1_PHY_DATA *VAR_16;
 MPI2_CONFIG_PAGE_MAN_0 *VAR_17;
 MPI2_CONFIG_PAGE_BIOS_3 *VAR_18;
 MPI2_IOC_FACTS_REPLY *VAR_19;
 U16 VAR_20;
 char *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25;
 char VAR_26[5], VAR_27[5];
 int VAR_28, VAR_29, VAR_30, VAR_31;

 if (VAR_11 != 1) {
  FUNC_12("show adapter: extra arguments");
  return (VAR_0);
 }

 VAR_29 = FUNC_5(VAR_10);
 if (VAR_29 < 0) {
  VAR_28 = VAR_8;
  FUNC_11("mps_open");
  return (VAR_28);
 }

 VAR_17 = FUNC_8(VAR_29, 0, ((void*)0));
 if (VAR_17 == ((void*)0)) {
  VAR_28 = VAR_8;
  FUNC_11("Failed to get controller info");
  return (VAR_28);
 }
 if (VAR_17->Header.PageLength < sizeof(*VAR_17) / 4) {
  FUNC_12("Invalid controller info");
  return (VAR_0);
 }
 FUNC_9("mp%s%d Adapter:\n", VAR_9 ? "s": "r", VAR_10);
 FUNC_9("       Board Name: %.16s\n", VAR_17->BoardName);
 FUNC_9("   Board Assembly: %.16s\n", VAR_17->BoardAssembly);
 FUNC_9("        Chip Name: %.16s\n", VAR_17->ChipName);
 FUNC_9("    Chip Revision: %.16s\n", VAR_17->ChipRevision);
 FUNC_1(VAR_17);

 VAR_18 = FUNC_6(VAR_29, VAR_2, 3, 0, ((void*)0));
 if (VAR_18 == ((void*)0)) {
  VAR_28 = VAR_8;
  FUNC_11("Failed to get BIOS page 3 info");
  return (VAR_28);
 }
 VAR_30 = VAR_18->BiosVersion;
 FUNC_9("    BIOS Revision: %d.%02d.%02d.%02d\n",
     ((VAR_30 & 0xff000000) >> 24), ((VAR_30 &0xff0000) >> 16),
     ((VAR_30 & 0xff00) >> 8), (VAR_30 & 0xff));
 FUNC_1(VAR_18);

 if ((VAR_19 = FUNC_4(VAR_29)) == ((void*)0)) {
  FUNC_9("could not get controller IOCFacts\n");
  FUNC_0(VAR_29);
  return (VAR_8);
 }
 VAR_30 = VAR_19->FWVersion.Word;
 FUNC_9("Firmware Revision: %d.%02d.%02d.%02d\n",
     ((VAR_30 & 0xff000000) >> 24), ((VAR_30 &0xff0000) >> 16),
     ((VAR_30 & 0xff00) >> 8), (VAR_30 & 0xff));
 FUNC_9("  Integrated RAID: %s\n",
     (VAR_19->IOCCapabilities & VAR_3)
     ? "yes" : "no");
 FUNC_1(VAR_19);

 VAR_29 = FUNC_5(VAR_10);
 if (VAR_29 < 0) {
  VAR_28 = VAR_8;
  FUNC_11("mps_open");
  return (VAR_28);
 }

 VAR_13 = FUNC_7(VAR_29,
     VAR_1,
     VAR_6, 0, 0, &VAR_20);
 if (VAR_13 == ((void*)0)) {
  VAR_28 = VAR_8;
  FUNC_11("Error retrieving SAS IO Unit page %d", VAR_20);
  FUNC_1(VAR_13);
  FUNC_0(VAR_29);
  return (VAR_28);
 }

 VAR_14 = FUNC_7(VAR_29,
     VAR_1,
     VAR_7, 1, 0, &VAR_20);
 if (VAR_14 == ((void*)0)) {
  VAR_28 = VAR_8;
  FUNC_11("Error retrieving SAS IO Unit page %d", VAR_20);
  FUNC_1(VAR_13);
  FUNC_0(VAR_29);
  return (VAR_28);
 }
 FUNC_9("\n");

 FUNC_9("%-8s%-12s%-11s%-10s%-8s%-7s%-7s%s\n", "PhyNum", "CtlrHandle",
     "DevHandle", "Disabled", "Speed", "Min", "Max", "Device");
 for (VAR_31 = 0; VAR_31 < VAR_13->NumPhys; VAR_31++) {
  VAR_15 = &VAR_13->PhyData[VAR_31];
  VAR_16 = &VAR_14->PhyData[VAR_31];
  if (VAR_15->PortFlags &
       VAR_5) {
   FUNC_9("Discovery still in progress\n");
   continue;
  }
  if (VAR_15->PhyFlags & VAR_4)
   VAR_24 = "Y";
  else
   VAR_24 = "N";

  VAR_22 = FUNC_2(VAR_16->MaxMinLinkRate);
  VAR_23 = FUNC_2(VAR_16->MaxMinLinkRate >> 4);
  VAR_25 = FUNC_3(VAR_15->ControllerPhyDeviceInfo);

  if (VAR_15->AttachedDevHandle != 0) {
   FUNC_10(VAR_26, 5, "%04x", VAR_15->AttachedDevHandle);
   FUNC_10(VAR_27, 5, "%04x",
       VAR_15->ControllerDevHandle);
   VAR_21 = FUNC_2(VAR_15->NegotiatedLinkRate);
  } else {
   FUNC_10(VAR_26, 5, "    ");
   FUNC_10(VAR_27, 5, "    ");
   VAR_21 = "     ";
  }
  FUNC_9("%-8d%-12s%-11s%-10s%-8s%-7s%-7s%s\n",
      VAR_31, VAR_27, VAR_26, VAR_24, VAR_21, VAR_22,
      VAR_23, VAR_25);
 }
 FUNC_1(VAR_13);
 FUNC_1(VAR_14);
 FUNC_9("\n");
 FUNC_0(VAR_29);
 return (0);
}
