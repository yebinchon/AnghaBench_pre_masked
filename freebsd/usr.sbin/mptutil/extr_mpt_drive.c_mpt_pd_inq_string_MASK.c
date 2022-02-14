
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vendor ;
typedef char u_char ;
typedef int revision ;
typedef int product ;
typedef int inq_string ;
struct TYPE_4__ {int ProductRevLevel; int ProductID; int VendorID; } ;
struct TYPE_5__ {TYPE_1__ InquiryData; } ;
typedef TYPE_1__ RAID_PHYS_DISK0_INQUIRY_DATA ;
typedef TYPE_2__ CONFIG_PAGE_RAID_PHYS_DISK_0 ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,int,char*,char*,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;

const char *
FUNC_3(CONFIG_PAGE_RAID_PHYS_DISK_0 *VAR_0)
{
 RAID_PHYS_DISK0_INQUIRY_DATA *VAR_1;
 u_char VAR_2[9], VAR_3[17], VAR_4[5];
 static char VAR_5[64];

 VAR_1 = &VAR_0->InquiryData;
 FUNC_0(VAR_2, VAR_1->VendorID, sizeof(VAR_1->VendorID),
     sizeof(VAR_2));
 FUNC_0(VAR_3, VAR_1->ProductID, sizeof(VAR_1->ProductID),
     sizeof(VAR_3));
 FUNC_0(VAR_4, VAR_1->ProductRevLevel,
     sizeof(VAR_1->ProductRevLevel), sizeof(VAR_4));


 if (FUNC_2(VAR_2, "ATA") == 0)
  FUNC_1(VAR_5, sizeof(VAR_5), "<%s %s> SATA",
      VAR_3, VAR_4);
 else
  FUNC_1(VAR_5, sizeof(VAR_5), "<%s %s %s> SAS",
      VAR_2, VAR_3, VAR_4);
 return (VAR_5);
}
