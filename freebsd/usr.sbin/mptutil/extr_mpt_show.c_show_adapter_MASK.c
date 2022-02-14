
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_8__ {int PageLength; } ;
struct TYPE_9__ {char* BoardName; char* BoardAssembly; char* ChipName; char* ChipRevision; int CapabilitiesFlags; int MinDrivesIS; int MaxDrivesIS; int MinDrivesIM; int MaxDrivesIM; int MinDrivesIME; int MaxDrivesIME; int SupportedStripeSizeMapIME; int SupportedStripeSizeMapIS; TYPE_1__ Header; } ;
typedef TYPE_2__ CONFIG_PAGE_MANUFACTURING_0 ;
typedef TYPE_2__ CONFIG_PAGE_IOC_6 ;
typedef TYPE_2__ CONFIG_PAGE_IOC_2 ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (int,int,int*) ;
 TYPE_2__* FUNC_6 (int,int ,int *) ;
 int VAR_11 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int
FUNC_10(int VAR_12, char **VAR_13)
{
 CONFIG_PAGE_MANUFACTURING_0 *VAR_14;
 CONFIG_PAGE_IOC_2 *VAR_15;
 CONFIG_PAGE_IOC_6 *VAR_16;
 U16 VAR_17;
 int VAR_18, VAR_19, VAR_20;

 if (VAR_12 != 1) {
  FUNC_9("show adapter: extra arguments");
  return (VAR_0);
 }

 VAR_20 = FUNC_4(VAR_11);
 if (VAR_20 < 0) {
  VAR_19 = VAR_10;
  FUNC_8("mpt_open");
  return (VAR_19);
 }

 VAR_14 = FUNC_6(VAR_20, 0, ((void*)0));
 if (VAR_14 == ((void*)0)) {
  VAR_19 = VAR_10;
  FUNC_8("Failed to get controller info");
  FUNC_0(VAR_20);
  return (VAR_19);
 }
 if (VAR_14->Header.PageLength < sizeof(*VAR_14) / 4) {
  FUNC_9("Invalid controller info");
  FUNC_2(VAR_14);
  FUNC_0(VAR_20);
  return (VAR_0);
 }
 FUNC_7("mpt%d Adapter:\n", VAR_11);
 FUNC_7("       Board Name: %.16s\n", VAR_14->BoardName);
 FUNC_7("   Board Assembly: %.16s\n", VAR_14->BoardAssembly);
 FUNC_7("        Chip Name: %.16s\n", VAR_14->ChipName);
 FUNC_7("    Chip Revision: %.16s\n", VAR_14->ChipRevision);

 FUNC_2(VAR_14);

 VAR_15 = FUNC_5(VAR_20, 2, &VAR_17);
 if (VAR_15 != ((void*)0)) {
  FUNC_7("      RAID Levels:");
  VAR_18 = 0;
  if (VAR_15->CapabilitiesFlags &
      VAR_3) {
   FUNC_7(" RAID0");
   VAR_18 = 1;
  }
  if (VAR_15->CapabilitiesFlags &
      VAR_2) {
   FUNC_7("%s RAID1", VAR_18 ? "," : "");
   VAR_18 = 1;
  }
  if (VAR_15->CapabilitiesFlags &
      VAR_1) {
   FUNC_7("%s RAID1E", VAR_18 ? "," : "");
   VAR_18 = 1;
  }
  if (VAR_15->CapabilitiesFlags &
      VAR_6) {
   FUNC_7("%s RAID5", VAR_18 ? "," : "");
   VAR_18 = 1;
  }
  if (VAR_15->CapabilitiesFlags &
      VAR_7) {
   FUNC_7("%s RAID6", VAR_18 ? "," : "");
   VAR_18 = 1;
  }
  if (VAR_15->CapabilitiesFlags &
      VAR_4) {
   FUNC_7("%s RAID10", VAR_18 ? "," : "");
   VAR_18 = 1;
  }
  if (VAR_15->CapabilitiesFlags &
      VAR_5) {
   FUNC_7("%s RAID50", VAR_18 ? "," : "");
   VAR_18 = 1;
  }
  if (!VAR_18)
   FUNC_7(" none");
  FUNC_7("\n");
  FUNC_2(VAR_15);
 } else if ((VAR_17 & VAR_9) !=
     VAR_8)
  FUNC_9("mpt_read_ioc_page(2): %s", FUNC_3(VAR_17));

 VAR_16 = FUNC_5(VAR_20, 6, &VAR_17);
 if (VAR_16 != ((void*)0)) {
  FUNC_1("    RAID0 Stripes",
      VAR_16->SupportedStripeSizeMapIS);
  FUNC_1("   RAID1E Stripes",
      VAR_16->SupportedStripeSizeMapIME);
  FUNC_7(" RAID0 Drives/Vol: %u", VAR_16->MinDrivesIS);
  if (VAR_16->MinDrivesIS != VAR_16->MaxDrivesIS)
   FUNC_7("-%u", VAR_16->MaxDrivesIS);
  FUNC_7("\n");
  FUNC_7(" RAID1 Drives/Vol: %u", VAR_16->MinDrivesIM);
  if (VAR_16->MinDrivesIM != VAR_16->MaxDrivesIM)
   FUNC_7("-%u", VAR_16->MaxDrivesIM);
  FUNC_7("\n");
  FUNC_7("RAID1E Drives/Vol: %u", VAR_16->MinDrivesIME);
  if (VAR_16->MinDrivesIME != VAR_16->MaxDrivesIME)
   FUNC_7("-%u", VAR_16->MaxDrivesIME);
  FUNC_7("\n");
  FUNC_2(VAR_16);
 } else if ((VAR_17 & VAR_9) !=
     VAR_8)
  FUNC_9("mpt_read_ioc_page(6): %s", FUNC_3(VAR_17));



 FUNC_0(VAR_20);

 return (0);
}
