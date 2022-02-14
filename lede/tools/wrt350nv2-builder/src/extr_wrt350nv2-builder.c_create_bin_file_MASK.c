
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int filesize; int size; char* filename; char* name; int offset; } ;
typedef TYPE_1__ mtd_info ;
typedef int FILE ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (unsigned char*,int,int,int *) ;
 int VAR_13 ;
 int FUNC_4 (unsigned char*,int,int,int *) ;
 int FUNC_5 (int ,char*,...) ;
 unsigned char* FUNC_6 (int) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 TYPE_1__ VAR_14 ;
 TYPE_1__ VAR_15 ;
 TYPE_1__ VAR_16 ;
 TYPE_1__ VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (char*,...) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 char* FUNC_10 (int) ;

int FUNC_11(char *VAR_23) {
 int VAR_24 = 0;

 unsigned char *VAR_25;

 int VAR_26;
 mtd_info *VAR_27;
 int VAR_28;
 int VAR_29;

 char *VAR_30 = "/dev/urandom";
 FILE *VAR_31;
 int VAR_32;

 unsigned long int VAR_33;
 unsigned char VAR_34;

 FILE *VAR_35;


 VAR_25 = FUNC_6(VAR_5 + VAR_3);
 if (!VAR_25) {
  VAR_24 = 1;
  FUNC_9("create_bin_file: can not allocate %i bytes\n", VAR_3);
 } else {

  FUNC_8(VAR_25, 0, VAR_5 + VAR_3);
 }


 if (!VAR_24) {
  for (VAR_26 = 1; VAR_26 <= 4; VAR_26++) {
   VAR_28 = 0;
   VAR_29 = 0;

   switch (VAR_26) {
    case 1:
     VAR_27 = &VAR_14;
     VAR_29 = VAR_10 - VAR_27->filesize;
     break;
    case 2:
     VAR_27 = &VAR_15;
     break;
    case 3:
     VAR_27 = &VAR_16;
     VAR_28 = VAR_27->filesize;
     VAR_29 = VAR_10 - VAR_15.size - VAR_27->filesize;
     break;
    case 4:
     VAR_27 = &VAR_17;
     VAR_28 = VAR_27->filesize;
     break;
    default:
     VAR_27 = ((void*)0);
     VAR_24 = 1;
     FUNC_9("create_bin_file: unknown mtd %i\n", VAR_26);
     break;
   }
   if (!VAR_27) {
    break;
   }
   if (!VAR_27->filename) {
    continue;
   }

   FUNC_5(VAR_1, "adding mtd %s file %s\n", VAR_27->name, VAR_27->filename);


   if (VAR_28) {
    VAR_25[VAR_5 + VAR_27->offset - 16] = 0x000000FFL & ( VAR_28 >> 24 );
    VAR_25[VAR_5 + VAR_27->offset - 15] = 0x000000FFL & ( VAR_28 >> 16 );
    VAR_25[VAR_5 + VAR_27->offset - 14] = 0x000000FFL & ( VAR_28 >> 8 );
    VAR_25[VAR_5 + VAR_27->offset - 13] = 0x000000FFL & VAR_28;
   }


   VAR_31 = FUNC_2(VAR_27->filename, "rb");
   if (!VAR_31) {
    VAR_24 = VAR_12;
    FUNC_9("input file %s: %s\n", VAR_27->filename, FUNC_10(VAR_24));
   } else {
    VAR_32 = FUNC_3(&VAR_25[VAR_5 + VAR_27->offset], VAR_27->filesize, 1, VAR_31);
    if (VAR_32 < 1) {
     if (FUNC_1(VAR_31)) {
      VAR_24 = FUNC_1(VAR_31);
      FUNC_9("input file %s: %s\n", VAR_27->filename, FUNC_10(VAR_24));
     } else {
      VAR_24 = 1;
      FUNC_9("input file %s: smaller than before *doh*\n", VAR_27->filename);
     }
    }
    FUNC_0(VAR_31);
   }


   if (VAR_29 > 0) {
    VAR_28 = VAR_29 & 0x0000FFFF;
    VAR_29 -= VAR_28;
   }
   if (VAR_29 > 0) {
    FUNC_9("mtd %s input file %s is too small (0x%08lX), adding 0x%08X random bytes\n", VAR_27->name, VAR_27->filename, VAR_27->filesize, VAR_29);

    VAR_28 += VAR_5 + VAR_27->offset + VAR_27->filesize;
    FUNC_5(VAR_1, " padding offset 0x%08X length 0x%08X\n", VAR_28, VAR_29);

    VAR_31 = FUNC_2(VAR_30, "rb");
    if (!VAR_31) {
     VAR_24 = VAR_12;
     FUNC_9("input file %s: %s\n", VAR_30, FUNC_10(VAR_24));
    } else {
     VAR_32 = FUNC_3(&VAR_25[VAR_28], VAR_29, 1, VAR_31);
     if (VAR_32 < 1) {
      if (FUNC_1(VAR_31)) {
       VAR_24 = FUNC_1(VAR_31);
       FUNC_9("input file %s: %s\n", VAR_30, FUNC_10(VAR_24));
      } else {
       VAR_24 = 1;
       FUNC_9("input file %s: smaller than before *doh*\n", VAR_30);
      }
     }
    }
    FUNC_0(VAR_31);
   }
  }
 }


 if (!VAR_24) {
  FUNC_5(VAR_1, "adding rootfs special data\n");
  FUNC_7(&VAR_25[VAR_5 + VAR_8], VAR_19, 2);
  FUNC_7(&VAR_25[VAR_5 + VAR_9], VAR_20, 2);
  FUNC_7(&VAR_25[VAR_5 + VAR_4], VAR_13, 2);
  FUNC_7(&VAR_25[VAR_5 + VAR_4 + 2], VAR_21, 2);
  FUNC_7(&VAR_25[VAR_5 + VAR_11], VAR_22, 8);

  FUNC_5(VAR_1, "adding u-boot special data\n");



  FUNC_7(&VAR_25[VAR_5 + VAR_0 + VAR_7], VAR_18, 70);
  FUNC_7(&VAR_25[VAR_5 + VAR_0 + VAR_7 + 57], VAR_13, 2);

  FUNC_5(VAR_1, "adding checksum byte\n");
  VAR_33 = 0;
  for (VAR_26 = 0; VAR_26 < VAR_5 + VAR_3; VAR_26++) {
   VAR_33 += VAR_25[VAR_26];
  }
  FUNC_5(VAR_2, " checksum 0x%016lX (%li)\n", VAR_33, VAR_33);

  VAR_25[VAR_5 + VAR_6 + 25] = ~VAR_33 + 1;
  FUNC_5(VAR_1, " byte 0x%02X\n", VAR_25[VAR_5 + VAR_6 + 25]);
 }


 if (!VAR_24) {
  FUNC_5(VAR_1, "writing file %s\n", VAR_23);
  VAR_35 = FUNC_2(VAR_23, "wb");
  if (!VAR_35) {
   VAR_24 = VAR_12;
   FUNC_9("output file %s: %s\n", VAR_23, FUNC_10(VAR_24));
  } else {
   VAR_32 = FUNC_4(VAR_25, VAR_5 + VAR_3, 1, VAR_35);
   if (VAR_32 < 1) {
    if (FUNC_1(VAR_35)) {
     VAR_24 = FUNC_1(VAR_35);
     FUNC_9("output file %s: %s\n", VAR_23, FUNC_10(VAR_24));
    } else {
     VAR_24 = 1;
     FUNC_9("output file %s: unspecified write error\n", VAR_23);
    }
   }
   FUNC_0(VAR_35);
  }
 }

 return VAR_24;
}
