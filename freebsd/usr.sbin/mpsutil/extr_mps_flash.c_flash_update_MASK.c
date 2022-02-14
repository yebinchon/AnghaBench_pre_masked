
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_6__ {char* VendorID; char* ProductID; } ;
struct TYPE_5__ {char* ProductID; } ;
typedef TYPE_1__ MPI2_IOC_FACTS_REPLY ;
typedef TYPE_2__ MPI2_FW_IMAGE_HEADER ;


 int VAR_0 ;
 unsigned char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned char* FUNC_2 (int *,int,int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (int,unsigned char*,int,int) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,struct stat*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static int
FUNC_13(int VAR_8, char **VAR_9)
{
 int VAR_10, VAR_11;
 unsigned char *VAR_12 = ((void*)0);
 struct stat VAR_13;
 bool VAR_14 = 0;
 MPI2_FW_IMAGE_HEADER *VAR_15;
 MPI2_IOC_FACTS_REPLY *VAR_16;

 if (VAR_8 < 2) {
  FUNC_12("missing argument: expecting 'firmware' or bios'");
  return (VAR_0);
 }

 if (FUNC_10(VAR_9[1], "bios") == 0) {
  VAR_14 = 1;
 } else if (FUNC_10(VAR_9[1], "firmware") != 0) {
  FUNC_12("Invalid argument '%s', expecting 'firmware' or 'bios'",
      VAR_9[1]);
 }

 if (VAR_8 > 4) {
  FUNC_12("update firmware: extra arguments");
  return (VAR_0);
 }

 if (VAR_8 != 3) {
  FUNC_12("no firmware specified");
  return (VAR_0);
 }

 if (FUNC_9(VAR_9[2], &VAR_13) == -1) {
  VAR_10 = VAR_6;
  FUNC_11("stat");
  return (VAR_10);
 }

 VAR_11 = FUNC_7(VAR_9[2], VAR_4);
 if (VAR_11 < 0) {
  VAR_10 = VAR_6;
  FUNC_11("open");
  return (VAR_10);
 }

 VAR_12 = FUNC_2(((void*)0), VAR_13.st_size, VAR_5, VAR_2, VAR_11, 0);
 if (VAR_12 == VAR_1) {
  VAR_10 = VAR_6;
  FUNC_11("mmap");
  FUNC_0(VAR_11);
  return (VAR_10);
 }
 FUNC_0(VAR_11);

 VAR_11 = FUNC_5(VAR_7);
 if (VAR_11 < 0) {
  VAR_10 = VAR_6;
  FUNC_11("mps_open");
  FUNC_6(VAR_12, VAR_13.st_size);
  return (VAR_10);
 }

 if ((VAR_16 = FUNC_4(VAR_11)) == ((void*)0)) {
  FUNC_12("could not get controller IOCFacts\n");
  FUNC_6(VAR_12, VAR_13.st_size);
  FUNC_0(VAR_11);
  return (VAR_0);
 }

 if (VAR_14) {

  if (((VAR_12[0x01]<<8) + VAR_12[0x00]) != 0xaa55) {
   FUNC_12("Invalid bios: no boot record magic number");
   FUNC_6(VAR_12, VAR_13.st_size);
   FUNC_0(VAR_11);
   FUNC_1(VAR_16);
   return (1);
  }
  if ((VAR_13.st_size % 512) != 0) {
   FUNC_12("Invalid bios: size not a multiple of 512");
   FUNC_6(VAR_12, VAR_13.st_size);
   FUNC_0(VAR_11);
   FUNC_1(VAR_16);
   return (1);
  }
 } else {
  VAR_15 = (MPI2_FW_IMAGE_HEADER *)VAR_12;
  if (VAR_15->VendorID != VAR_3) {
   FUNC_12("Invalid firmware:");
   FUNC_12("  Expected Vendor ID: %04x",
       VAR_3);
   FUNC_12("  Image Vendor ID: %04x", VAR_15->VendorID);
   FUNC_6(VAR_12, VAR_13.st_size);
   FUNC_0(VAR_11);
   FUNC_1(VAR_16);
   return (1);
  }

  if (VAR_15->ProductID != VAR_16->ProductID) {
   FUNC_12("Invalid image:");
   FUNC_12("  Expected Product ID: %04x", VAR_16->ProductID);
   FUNC_12("  Image Product ID: %04x", VAR_15->ProductID);
   FUNC_6(VAR_12, VAR_13.st_size);
   FUNC_0(VAR_11);
   FUNC_1(VAR_16);
   return (1);
  }
 }

 FUNC_8("Updating %s...\n", VAR_9[1]);
 if (FUNC_3(VAR_11, VAR_12, VAR_13.st_size, VAR_14) < 0) {
  FUNC_12("Fail to update %s", VAR_9[1]);
  FUNC_6(VAR_12, VAR_13.st_size);
  FUNC_0(VAR_11);
  FUNC_1(VAR_16);
  return (1);
 }

 FUNC_6(VAR_12, VAR_13.st_size);
 FUNC_0(VAR_11);
 FUNC_1(VAR_16);
 FUNC_8("%s successfully updated\n", VAR_9[1]);
 return (0);
}
