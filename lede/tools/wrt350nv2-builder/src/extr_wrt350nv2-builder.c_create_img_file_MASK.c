
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int md5_state_t ;
typedef int md5_byte_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (unsigned char,int *) ;
 int FUNC_5 (int *,int,int ) ;
 int VAR_4 ;
 int FUNC_6 (int *,int,int,int *) ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (unsigned char*,int ,int) ;
 int FUNC_12 (unsigned char*,int ,int) ;
 int FUNC_13 (char*,char*,...) ;
 char* FUNC_14 (int) ;

int FUNC_15(FILE *VAR_7, char *VAR_8, char *VAR_9) {
 int VAR_10 = 0;

 md5_state_t VAR_11;
 md5_byte_t VAR_12[16];

 int VAR_13;
 int VAR_14;

 FILE *VAR_15;
 unsigned char VAR_16[1];


 FUNC_11(&VAR_6[50], VAR_4, 2);


 FUNC_12(&VAR_6[480], 0, 16);


 FUNC_10(&VAR_11);


 FUNC_7(VAR_0, " adding img header\n");
 for (VAR_13 = 0; VAR_13 < 512; VAR_13++) {
  VAR_14 = FUNC_4(VAR_6[VAR_13], VAR_7);
  if (VAR_14 == VAR_1) {
   VAR_10 = FUNC_1(VAR_7);
   FUNC_13("output file %s: %s\n", VAR_8, FUNC_14(VAR_10));
   break;
  }
  FUNC_8(&VAR_11, (const md5_byte_t *)&VAR_6[VAR_13], 1);
 }


 if (!VAR_10) {
  FUNC_7(VAR_0, " adding zip file\n");
  VAR_15 = FUNC_3(VAR_9, "rb");
  if (!VAR_15) {
   VAR_10 = VAR_3;
   FUNC_13("input file %s: %s\n", VAR_9, FUNC_14(VAR_10));
  } else {
   while ((VAR_14 = FUNC_2(VAR_15)) != VAR_1) {
    VAR_16[0] = VAR_14;

    VAR_14 = FUNC_4(VAR_16[0], VAR_7);
    if (VAR_14 == VAR_1) {
     VAR_10 = FUNC_1(VAR_7);
     FUNC_13("output file %s: %s\n", VAR_8, FUNC_14(VAR_10));
     break;
    }
    FUNC_8(&VAR_11, (const md5_byte_t *)VAR_16, 1);
   }
   if (FUNC_1(VAR_15)) {
    VAR_10 = FUNC_1(VAR_15);
    FUNC_13("input file %s: %s\n", VAR_9, FUNC_14(VAR_10));
   }
  }

 }


 if (!VAR_10) {
  FUNC_7(VAR_0, " adding img eof byte\n");
  VAR_14 = FUNC_4(VAR_5[0], VAR_7);
  if (VAR_14 == VAR_1) {
   VAR_10 = FUNC_1(VAR_7);
   FUNC_13("output file %s: %s\n", VAR_8, FUNC_14(VAR_10));
  }
  FUNC_8(&VAR_11, (const md5_byte_t *)VAR_5, 1);
 }


 FUNC_8(&VAR_11, (const md5_byte_t *)"A^gU*<>?RFY@#DR&Z", 17);


 FUNC_9(&VAR_11, VAR_12);


 if (!VAR_10) {
  FUNC_7(VAR_0, " writing md5 checksum into img header of file\n");

  VAR_14 = FUNC_5(VAR_7, 480, VAR_2);
  if (VAR_14 == -1) {
   VAR_10 = VAR_3;
   FUNC_13("output file %s: %s\n", VAR_8, FUNC_14(VAR_10));
  } else {
   VAR_14 = FUNC_6(VAR_12, 16, 1, VAR_7);
   if (VAR_14 < 1) {
    if (FUNC_1(VAR_7)) {
     VAR_10 = FUNC_1(VAR_7);
     FUNC_13("output file %s: %s\n", VAR_8, FUNC_14(VAR_10));
    } else {
     VAR_10 = 1;
     FUNC_13("output file %s: unspecified write error\n", VAR_8);
    }
   }
  }

  FUNC_0(VAR_15);
 }

 return VAR_10;
}
