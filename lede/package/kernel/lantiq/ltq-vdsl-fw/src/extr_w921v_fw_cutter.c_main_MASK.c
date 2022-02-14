
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 char* VAR_0 ;
 unsigned char VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (unsigned char*) ;
 char FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned char*,int,unsigned char*,int*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (unsigned int*,unsigned char*,int) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (char*,int ) ;
 char* FUNC_9 (unsigned int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,unsigned char*,int) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;
 int FUNC_13 (int,unsigned char*,int) ;

int FUNC_14(int VAR_8, char **VAR_9)
{
 struct stat VAR_10;
 unsigned char *VAR_11;
 unsigned int *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17 = 0, VAR_18 = 0;

 FUNC_10("Arcadyan Firmware cutter v0.1\n");
 FUNC_10("-----------------------------\n");
 FUNC_10("This tool extracts the different parts of an arcadyan firmware update file\n");
 FUNC_10("This tool is for private use only. The Firmware that gets extracted has a license that forbids redistribution\n");
 FUNC_10("Please only run this if you understand the risks\n\n");
 FUNC_10("I understand the risks ? (y/N)\n");

 if (FUNC_3() != 'y')
  return -1;

 if (FUNC_12(VAR_0, &VAR_10) != 0) {
  FUNC_10("Failed to find %s\n", VAR_0);
  FUNC_10("Ask Google or try https://www.telekom.de/hilfe/downloads/firmware-speedport-w921v-1.44.000.bin\n");
  return -1;
 }

 VAR_11 = FUNC_5(VAR_10.st_size);
 VAR_12 = FUNC_5(VAR_10.st_size);
 if (!VAR_11 || !VAR_12) {
  FUNC_10("Failed to alloc %d bytes\n", VAR_10.st_size);
  return -1;
 }

 VAR_14 = FUNC_8(VAR_0, VAR_5);
 if (VAR_14 < 0) {
  FUNC_10("Unable to open %s\n", VAR_0);
  return -1;
 }


 VAR_13 = FUNC_11(VAR_14, VAR_11, VAR_10.st_size);
 FUNC_0(VAR_14);
 if (VAR_13 != VAR_10.st_size) {
  FUNC_10("Loaded %d instead of %d bytes inside %s\n", VAR_13, VAR_10.st_size, VAR_0);
  return -1;
 }


 VAR_11++;
 VAR_13 -= 1;
 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  if ((VAR_15 % 16) < 3)
   VAR_11[VAR_15] = VAR_11[VAR_15 + 16] ^ VAR_1;
  else
   VAR_11[VAR_15] = VAR_11[VAR_15] ^ VAR_1;
 }
 VAR_13 -= 3;
 FUNC_7(&VAR_11[VAR_4], &VAR_11[VAR_4 + 3], VAR_13 - VAR_4);
 FUNC_6(VAR_12, VAR_11, VAR_10.st_size);


 do {
  if (VAR_12[VAR_18] == VAR_3) {
   VAR_18 += 2;
   FUNC_10("Found partition at 0x%08X with size %d\n",
    VAR_17 * sizeof(unsigned int),
    (VAR_18 - VAR_17) * sizeof(unsigned int));
   if (VAR_12[VAR_17] == VAR_2) {
    int VAR_19 = 1024 * 1024;
    int VAR_20 = VAR_12[VAR_18 - 3];
    unsigned int VAR_21 = VAR_12[VAR_18 - 6];
    const char *VAR_22 = FUNC_9(VAR_21);
    unsigned char *VAR_23;

    VAR_23 = FUNC_5(VAR_19);
    if (!VAR_23) {
     FUNC_10("Failed to alloc dest buffer\n");
     return -1;
    }

    if (FUNC_4((unsigned char*)&VAR_12[VAR_17], VAR_20, VAR_23, &VAR_19)) {
     FUNC_10("Failed to decompress data\n");
     return -1;
    }

    VAR_14 = FUNC_1(VAR_22, VAR_6 | VAR_7);
    if (VAR_14 != -1) {
     if (FUNC_13(VAR_14, VAR_23, VAR_19) != VAR_19)
      FUNC_10("\tFailed to write %d bytes\n", VAR_19);
     else
      FUNC_10("\tWrote %d bytes to %s\n", VAR_19, VAR_22);
     FUNC_0(VAR_14);
    } else {
     FUNC_10("\tFailed to open %s\n", VAR_22);
    }
    FUNC_2(VAR_23);
   } else {
    FUNC_10("\tThis is not lzma\n");
   }
   VAR_17 = VAR_18;
  } else {
   VAR_18++;
  }
 } while(VAR_18 < VAR_13 / sizeof(unsigned int));

 return 0;
}
