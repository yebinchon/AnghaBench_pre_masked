
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {char* member_0; char member_3; int member_2; int const member_1; } ;
typedef int off_t ;
struct TYPE_2__ {int ih_magic; int ih_size; } ;
typedef TYPE_1__ image_header_t ;
typedef int const_DES_cblock ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,int) ;
 int VAR_17 ;
 int FUNC_8 (int) ;
 int VAR_18 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (int,char**,char*,struct option*,int*) ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (int,int) ;
 char* FUNC_16 (int ,int,int,int ,scalar_t__,int ) ;
 int FUNC_17 (char*,int) ;

 int FUNC_18 (int ) ;
 int FUNC_19 (char*,int ) ;
 char* VAR_19 ;

 int VAR_20 ;
 int FUNC_20 (char*) ;
 int VAR_21 ;
 int FUNC_21 (char*,char*) ;
 char* FUNC_22 (int ) ;
 scalar_t__ VAR_22 ;
 int FUNC_23 () ;

int FUNC_24(int VAR_23, char **VAR_24)
{
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;
 char *VAR_29 = ((void*)0);
 char *VAR_30 = ((void*)0);

 int VAR_31;
 int VAR_32;
 off_t VAR_33;
 char *VAR_34;
 char VAR_35[sizeof(image_header_t) + 3];
 image_header_t *VAR_36;

 while (1) {
  static struct option VAR_37[] = {
   {"encrypt", 129, 0, 'e'},
   {"decrypt", 129, 0, 'd'},
   {"input", 128, 0, 'i'},
   {"output", 128, 0, 'o'},
   {0, 0, 0, 0 }
  };
  int VAR_38 = 0;
  int VAR_39 = FUNC_12(VAR_23, VAR_24, "dei:o:",
                  VAR_37, &VAR_38);
  if (VAR_39 == -1)
   break;

  switch (VAR_39) {
  case 'd':
   VAR_26++;
   if (VAR_26 > 1) {
    FUNC_10(VAR_21, "%s: decrypt may only be specified once\n",
            VAR_24[0]);
    FUNC_20(VAR_24[0]);
   }
   break;

  case 'e':
   VAR_25++;
   if (VAR_25 > 1) {
    FUNC_10(VAR_21, "%s: encrypt may only be specified once\n",
            VAR_24[0]);
    FUNC_20(VAR_24[0]);
   }
   break;

  case 'i':
   VAR_27++;
   if (VAR_27 > 1) {
    FUNC_10(VAR_21, "%s: only one input file may be specified\n",
            VAR_24[0]);
    FUNC_20(VAR_24[0]);
   }
   if (FUNC_21("-", VAR_19) != 0) {
    VAR_29 = VAR_19;
   }
   break;

  case 'o':
   VAR_28++;
   if (VAR_28 > 1) {
    FUNC_10(VAR_21, "%s: only one output file may be specified\n",
            VAR_24[0]);
    FUNC_20(VAR_24[0]);
   }
   if (FUNC_21("-", VAR_19) != 0) {
    VAR_30 = VAR_19;
   }
   break;

  case '?':
   FUNC_8(-1);

  default:
   FUNC_1();
  }
 }

 if (VAR_26 && VAR_25) {
  FUNC_10(VAR_21, "%s: decrypt and encrypt may not be used together\n",
          VAR_24[0]);
  FUNC_20(VAR_24[0]);
 }

 if (!VAR_26 && !VAR_25) {
  FUNC_10(VAR_21, "%s: neither decrypt or encrypt were specified\n",
          VAR_24[0]);
  FUNC_20(VAR_24[0]);
 }

 VAR_22 = FUNC_9(FUNC_23());
 if (VAR_22 < 0) {
  FUNC_10(VAR_21, "Can't create temporary file\n");
  FUNC_8(VAR_1);
 }

 FUNC_2(VAR_18);
 FUNC_0((const_DES_cblock *)VAR_0, &VAR_20);

 if (VAR_29) {
  VAR_31 = FUNC_19(VAR_29, VAR_6);
  if (VAR_31 < 0) {
   FUNC_10(VAR_21, "Can't open %s for reading: %s\n", VAR_29,
           FUNC_22(VAR_17));
   FUNC_8(VAR_1);
  }
  FUNC_4(VAR_31, VAR_22);
  FUNC_3(VAR_31);
 }
 else {
  FUNC_4(VAR_11, VAR_22);
 }

 VAR_33 = FUNC_13(VAR_22, 0, VAR_9);
 if (VAR_33 < 64) {
  FUNC_10(VAR_21, "Not enough data\n");
  FUNC_8(VAR_1);
 }

 VAR_34 = FUNC_16(0, VAR_33, VAR_7|VAR_8, VAR_5, VAR_22, 0);
 if (VAR_34 == VAR_4) {
  FUNC_10(VAR_21, "mmap failed: %s\n", FUNC_22(VAR_17));
  FUNC_8(VAR_1);
 }

 if (VAR_25) {
  VAR_36 = (image_header_t *)VAR_34;
  off_t VAR_40 = FUNC_15(VAR_33,
                  FUNC_18(VAR_36->ih_size) + sizeof(image_header_t));
  if (FUNC_18(VAR_36->ih_magic) != VAR_3) {
   FUNC_10(VAR_21, "Header magic incorrect: "
           "expected 0x%08X, got 0x%08X\n",
           VAR_3, FUNC_18(VAR_36->ih_magic));
   FUNC_17(VAR_34, VAR_33);
   FUNC_8(VAR_1);
  }
  FUNC_7(VAR_34, VAR_40);
  FUNC_17(VAR_34, VAR_33);
  if (VAR_40 != VAR_33) {
   if (FUNC_11(VAR_22, VAR_40) < 0) {
    FUNC_10(VAR_21, "ftruncate failed: %s\n", FUNC_22(VAR_17));
    FUNC_8(VAR_1);
   }
  }
 }

 if (VAR_26) {
  off_t VAR_41 = FUNC_15(VAR_33, sizeof(image_header_t) + 3);
  FUNC_14(VAR_35, VAR_34, VAR_41);
  FUNC_6(VAR_35, VAR_41);
  VAR_36 = (image_header_t *)VAR_35;
  if (FUNC_18(VAR_36->ih_magic) != VAR_3) {
   FUNC_10(VAR_21, "Header magic incorrect: "
           "expected 0x%08X, got 0x%08X\n",
           VAR_3, FUNC_18(VAR_36->ih_magic));
   FUNC_8(VAR_1);
  }
  FUNC_6(VAR_34, VAR_33);
  FUNC_17(VAR_34, VAR_33);
 }

 FUNC_13(VAR_22, 0, VAR_10);
 if (VAR_30) {
  VAR_32 = FUNC_5(VAR_30, VAR_15|VAR_16|VAR_13|VAR_14);
  if (VAR_32 < 0) {
   FUNC_10(VAR_21, "Can't open %s for writing: %s\n",
           VAR_30, FUNC_22(VAR_17));
   FUNC_8(VAR_1);
  }
  FUNC_4(VAR_22, VAR_32);
  FUNC_3(VAR_32);
 }
 else {
  FUNC_4(VAR_22, VAR_12);
 }

 FUNC_8(VAR_2);
 return 0;
}
