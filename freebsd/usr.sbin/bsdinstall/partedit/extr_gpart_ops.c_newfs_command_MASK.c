
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfsboot_path ;
struct TYPE_4__ {char* member_0; char* member_1; char* member_2; int member_3; scalar_t__ state; char const* name; } ;
typedef TYPE_1__ DIALOG_LISTITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,char*,int ,int ,int ) ;
 int FUNC_1 (char*,char*,int ,int ,int ,scalar_t__,TYPE_1__*,int *,int ,int*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int,char*,char*) ;
 int FUNC_6 (char*,char*,char*,char*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static void
FUNC_10(const char *VAR_9, char *VAR_10, int VAR_11)
{
 if (FUNC_8(VAR_9, "freebsd-ufs") == 0) {
  int VAR_12;
  DIALOG_LISTITEM VAR_13[] = {
   {"UFS1", "UFS Version 1",
       "Use version 1 of the UFS file system instead "
       "of version 2 (not recommended)", 0 },
   {"SU", "Softupdates",
       "Enable softupdates (default)", 1 },
   {"SUJ", "Softupdates journaling",
       "Enable file system journaling (default - "
       "turn off for SSDs)", 1 },
   {"TRIM", "Enable SSD TRIM support",
       "Enable TRIM support, useful on solid-state drives",
       0 },
  };

  if (!VAR_11) {
   int VAR_14;
   VAR_14 = FUNC_1("UFS Options", "", 0, 0, 0,
       FUNC_4(VAR_13), VAR_13, ((void*)0),
       VAR_0, &VAR_12);
   if (VAR_14 == 1)
    return;
  }

  FUNC_9(VAR_10, "newfs ");
  for (VAR_12 = 0; VAR_12 < (int)FUNC_4(VAR_13); VAR_12++) {
   if (VAR_13[VAR_12].state == 0)
    continue;
   if (FUNC_8(VAR_13[VAR_12].name, "UFS1") == 0)
    FUNC_7(VAR_10, "-O1 ");
   else if (FUNC_8(VAR_13[VAR_12].name, "SU") == 0)
    FUNC_7(VAR_10, "-U ");
   else if (FUNC_8(VAR_13[VAR_12].name, "SUJ") == 0)
    FUNC_7(VAR_10, "-j ");
   else if (FUNC_8(VAR_13[VAR_12].name, "TRIM") == 0)
    FUNC_7(VAR_10, "-t ");
  }
 } else if (FUNC_8(VAR_9, "freebsd-zfs") == 0) {
  int VAR_15;
  DIALOG_LISTITEM VAR_16[] = {
   {"fletcher4", "checksum algorithm: fletcher4",
       "Use fletcher4 for data integrity checking. "
       "(default)", 1 },
   {"fletcher2", "checksum algorithm: fletcher2",
       "Use fletcher2 for data integrity checking. "
       "(not recommended)", 0 },
   {"sha256", "checksum algorithm: sha256",
       "Use sha256 for data integrity checking. "
       "(not recommended)", 0 },
   {"atime", "Update atimes for files",
       "Disable atime update", 0 },
  };

  if (!VAR_11) {
   int VAR_17;
   VAR_17 = FUNC_1("ZFS Options", "", 0, 0, 0,
       FUNC_4(VAR_16), VAR_16, ((void*)0),
       VAR_0, &VAR_15);
   if (VAR_17 == 1)
    return;
  }

  FUNC_9(VAR_10, "zpool create -f -m none ");
  if (FUNC_2("BSDINSTALL_TMPBOOT") != ((void*)0)) {
   char VAR_18[VAR_2];
   FUNC_5(VAR_18, sizeof(VAR_18), "%s/zfs",
       FUNC_2("BSDINSTALL_TMPBOOT"));
   FUNC_3(VAR_18, VAR_5 | VAR_3 | VAR_6 |
       VAR_4 | VAR_7);
   FUNC_6(VAR_10, "%s -o cachefile=%s/zpool.cache ",
       VAR_10, VAR_18);
  }
  for (VAR_15 = 0; VAR_15 < (int)FUNC_4(VAR_16); VAR_15++) {
   if (VAR_16[VAR_15].state == 0)
    continue;
   if (FUNC_8(VAR_16[VAR_15].name, "fletcher4") == 0)
    FUNC_7(VAR_10, "-O checksum=fletcher4 ");
   else if (FUNC_8(VAR_16[VAR_15].name, "fletcher2") == 0)
    FUNC_7(VAR_10, "-O checksum=fletcher2 ");
   else if (FUNC_8(VAR_16[VAR_15].name, "sha256") == 0)
    FUNC_7(VAR_10, "-O checksum=sha256 ");
   else if (FUNC_8(VAR_16[VAR_15].name, "atime") == 0)
    FUNC_7(VAR_10, "-O atime=off ");
  }
 } else if (FUNC_8(VAR_9, "fat32") == 0 || FUNC_8(VAR_9, "efi") == 0 ||
      FUNC_8(VAR_9, "ms-basic-data") == 0) {
  int VAR_19;
  DIALOG_LISTITEM VAR_20[] = {
   {"FAT32", "FAT Type 32",
       "Create a FAT32 filesystem (default)", 1 },
   {"FAT16", "FAT Type 16",
       "Create a FAT16 filesystem", 0 },
   {"FAT12", "FAT Type 12",
       "Create a FAT12 filesystem", 0 },
  };

  if (!VAR_11) {
   int VAR_21;
   VAR_21 = FUNC_1("FAT Options", "", 0, 0, 0,
       FUNC_4(VAR_20), VAR_20, ((void*)0),
       VAR_1, &VAR_19);
   if (VAR_21 == 1)
    return;
  }

  FUNC_9(VAR_10, "newfs_msdos ");
  for (VAR_19 = 0; VAR_19 < (int)FUNC_4(VAR_20); VAR_19++) {
   if (VAR_20[VAR_19].state == 0)
    continue;
   if (FUNC_8(VAR_20[VAR_19].name, "FAT32") == 0)
    FUNC_7(VAR_10, "-F 32 -c 1");
   else if (FUNC_8(VAR_20[VAR_19].name, "FAT16") == 0)
    FUNC_7(VAR_10, "-F 16 ");
   else if (FUNC_8(VAR_20[VAR_19].name, "FAT12") == 0)
    FUNC_7(VAR_10, "-F 12 ");
  }
 } else {
  if (!VAR_11)
   FUNC_0("Error", "No configurable options exist "
       "for this filesystem.", 0, 0, VAR_8);
  VAR_10[0] = '\0';
 }
}
