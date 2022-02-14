
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;
typedef int cap_rights_t ;
typedef int FILE ;
typedef int BZFILE ;


 scalar_t__ FUNC_0 (int*,int *,char*,scalar_t__) ;
 int FUNC_1 (int*,int *) ;
 int * FUNC_2 (int*,int *,int ,int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *,int ,...) ;
 scalar_t__ FUNC_8 (int,int *) ;
 int FUNC_9 (int) ;
 int VAR_19 ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int,char*,...) ;
 int VAR_20 ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,int,int,int *) ;
 int FUNC_18 (char*) ;
 scalar_t__ FUNC_19 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_20 (int,int ,int ) ;
 char* FUNC_21 (scalar_t__) ;
 scalar_t__ FUNC_22 (char*,char*,int) ;
 int * VAR_21 ;
 scalar_t__ FUNC_23 (char*) ;
 int FUNC_24 (char*,int,...) ;
 int FUNC_25 (int,int *,int,int) ;
 scalar_t__ FUNC_26 (int,char*,scalar_t__) ;
 char* FUNC_27 (char*) ;
 int FUNC_28 () ;
 scalar_t__ FUNC_29 (int,char*,scalar_t__) ;

int FUNC_30(int VAR_22, char *VAR_23[])
{
 FILE *VAR_24, *VAR_25, *VAR_26, *VAR_27;
 BZFILE *VAR_28, *VAR_29, *VAR_30;
 char *VAR_31, *VAR_32;
 int VAR_33, VAR_34, VAR_35;
 int VAR_36, VAR_37;
 off_t VAR_38, VAR_39;
 off_t VAR_40, VAR_41;
 u_char VAR_42[VAR_7], VAR_43[8];
 u_char *VAR_44, *VAR_45;
 off_t VAR_46, VAR_47;
 off_t VAR_48[3];
 off_t VAR_49, VAR_50, VAR_51;

 cap_rights_t VAR_52, VAR_53, VAR_54;


 if (VAR_22 != 4)
  FUNC_28();


 if ((VAR_24 = FUNC_16(VAR_23[3], "rb")) == ((void*)0))
  FUNC_11(1, "fopen(%s)", VAR_23[3]);

 if ((VAR_25 = FUNC_16(VAR_23[3], "rb")) == ((void*)0))
  FUNC_11(1, "fopen(%s)", VAR_23[3]);

 if ((VAR_26 = FUNC_16(VAR_23[3], "rb")) == ((void*)0))
  FUNC_11(1, "fopen(%s)", VAR_23[3]);

 if ((VAR_27 = FUNC_16(VAR_23[3], "rb")) == ((void*)0))
  FUNC_11(1, "fopen(%s)", VAR_23[3]);

 if ((VAR_37 = FUNC_24(VAR_23[1], VAR_13 | VAR_10, 0)) < 0)
  FUNC_11(1, "open(%s)", VAR_23[1]);

 if ((VAR_32 = FUNC_27(VAR_23[2])) == ((void*)0) ||
     (VAR_31 = FUNC_10(VAR_32)) == ((void*)0) ||
     (VAR_19 = FUNC_24(VAR_31, VAR_12)) < 0)
  FUNC_11(1, "open %s", VAR_23[2]);
 FUNC_18(VAR_32);
 if ((VAR_21 = FUNC_5(VAR_23[2])) == ((void*)0))
  FUNC_11(1, "basename");

 if ((VAR_36 = FUNC_25(VAR_19, VAR_21,
     VAR_11 | VAR_14 | VAR_15 | VAR_10, 0666)) < 0)
  FUNC_11(1, "open(%s)", VAR_23[2]);
 FUNC_4(VAR_20);


 if (FUNC_6() < 0)
  FUNC_11(1, "failed to enter security sandbox");

 FUNC_7(&VAR_53, VAR_3, VAR_2, VAR_4);
 FUNC_7(&VAR_54, VAR_6);
 FUNC_7(&VAR_52, VAR_5);

 if (FUNC_8(FUNC_15(VAR_24), &VAR_53) < 0 ||
     FUNC_8(FUNC_15(VAR_25), &VAR_53) < 0 ||
     FUNC_8(FUNC_15(VAR_26), &VAR_53) < 0 ||
     FUNC_8(FUNC_15(VAR_27), &VAR_53) < 0 ||
     FUNC_8(VAR_37, &VAR_53) < 0 ||
     FUNC_8(VAR_36, &VAR_54) < 0 ||
     FUNC_8(VAR_19, &VAR_52) < 0)
  FUNC_11(1, "cap_rights_limit() failed, could not restrict"
      " capabilities");
 if (FUNC_17(VAR_42, 1, VAR_7, VAR_24) < VAR_7) {
  if (FUNC_14(VAR_24))
   FUNC_12(1, "Corrupt patch");
  FUNC_11(1, "fread(%s)", VAR_23[3]);
 }


 if (FUNC_22(VAR_42, "BSDIFF40", 8) != 0)
  FUNC_12(1, "Corrupt patch");


 VAR_40 = FUNC_23(VAR_42 + 8);
 VAR_41 = FUNC_23(VAR_42 + 16);
 VAR_39 = FUNC_23(VAR_42 + 24);
 if (VAR_40 < 0 || VAR_40 > VAR_9 - VAR_7 ||
     VAR_41 < 0 || VAR_40 + VAR_7 > VAR_9 - VAR_41 ||
     VAR_39 < 0 || VAR_39 > VAR_18)
  FUNC_12(1, "Corrupt patch");


 if (FUNC_13(VAR_24))
  FUNC_11(1, "fclose(%s)", VAR_23[3]);
 VAR_51 = VAR_7;
 if (FUNC_19(VAR_25, VAR_51, VAR_17))
  FUNC_11(1, "fseeko(%s, %jd)", VAR_23[3], (intmax_t)VAR_51);
 if ((VAR_28 = FUNC_2(&VAR_33, VAR_25, 0, 0, ((void*)0), 0)) == ((void*)0))
  FUNC_12(1, "BZ2_bzReadOpen, bz2err = %d", VAR_33);
 VAR_51 = FUNC_3(VAR_51, VAR_40);
 if (FUNC_19(VAR_26, VAR_51, VAR_17))
  FUNC_11(1, "fseeko(%s, %jd)", VAR_23[3], (intmax_t)VAR_51);
 if ((VAR_29 = FUNC_2(&VAR_34, VAR_26, 0, 0, ((void*)0), 0)) == ((void*)0))
  FUNC_12(1, "BZ2_bzReadOpen, bz2err = %d", VAR_34);
 VAR_51 = FUNC_3(VAR_51, VAR_41);
 if (FUNC_19(VAR_27, VAR_51, VAR_17))
  FUNC_11(1, "fseeko(%s, %jd)", VAR_23[3], (intmax_t)VAR_51);
 if ((VAR_30 = FUNC_2(&VAR_35, VAR_27, 0, 0, ((void*)0), 0)) == ((void*)0))
  FUNC_12(1, "BZ2_bzReadOpen, bz2err = %d", VAR_35);

 if ((VAR_38 = FUNC_20(VAR_37, 0, VAR_16)) == -1 ||
     VAR_38 > VAR_18 ||
     (VAR_44 = FUNC_21(VAR_38)) == ((void*)0) ||
     FUNC_20(VAR_37, 0, VAR_17) != 0 ||
     FUNC_26(VAR_37, VAR_44, VAR_38) != VAR_38 ||
     FUNC_9(VAR_37) == -1)
  FUNC_11(1, "%s", VAR_23[1]);
 if ((VAR_45 = FUNC_21(VAR_39)) == ((void*)0))
  FUNC_11(1, ((void*)0));

 VAR_46 = 0;
 VAR_47 = 0;
 while (VAR_47 < VAR_39) {

  for (VAR_49 = 0; VAR_49 <= 2; VAR_49++) {
   VAR_50 = FUNC_0(&VAR_33, VAR_28, VAR_43, 8);
   if ((VAR_50 < 8) || ((VAR_33 != VAR_0) &&
       (VAR_33 != VAR_1)))
    FUNC_12(1, "Corrupt patch");
   VAR_48[VAR_49] = FUNC_23(VAR_43);
  }


  if (VAR_48[0] < 0 || VAR_48[0] > VAR_8 ||
      VAR_48[1] < 0 || VAR_48[1] > VAR_8)
   FUNC_12(1, "Corrupt patch");


  if (FUNC_3(VAR_47, VAR_48[0]) > VAR_39)
   FUNC_12(1, "Corrupt patch");


  VAR_50 = FUNC_0(&VAR_34, VAR_29, VAR_45 + VAR_47, VAR_48[0]);
  if ((VAR_50 < VAR_48[0]) ||
      ((VAR_34 != VAR_0) && (VAR_34 != VAR_1)))
   FUNC_12(1, "Corrupt patch");


  for (VAR_49 = 0; VAR_49 < VAR_48[0]; VAR_49++)
   if (FUNC_3(VAR_46, VAR_49) < VAR_38)
    VAR_45[VAR_47 + VAR_49] += VAR_44[VAR_46 + VAR_49];


  VAR_47 = FUNC_3(VAR_47, VAR_48[0]);
  VAR_46 = FUNC_3(VAR_46, VAR_48[0]);


  if (FUNC_3(VAR_47, VAR_48[1]) > VAR_39)
   FUNC_12(1, "Corrupt patch");


  VAR_50 = FUNC_0(&VAR_35, VAR_30, VAR_45 + VAR_47, VAR_48[1]);
  if ((VAR_50 < VAR_48[1]) ||
      ((VAR_35 != VAR_0) && (VAR_35 != VAR_1)))
   FUNC_12(1, "Corrupt patch");


  VAR_47 = FUNC_3(VAR_47, VAR_48[1]);
  VAR_46 = FUNC_3(VAR_46, VAR_48[2]);
 }


 FUNC_1(&VAR_33, VAR_28);
 FUNC_1(&VAR_34, VAR_29);
 FUNC_1(&VAR_35, VAR_30);
 if (FUNC_13(VAR_25) || FUNC_13(VAR_26) || FUNC_13(VAR_27))
  FUNC_11(1, "fclose(%s)", VAR_23[3]);


 if (FUNC_29(VAR_36, VAR_45, VAR_39) != VAR_39 || FUNC_9(VAR_36) == -1)
  FUNC_11(1, "%s", VAR_23[2]);

 VAR_21 = ((void*)0);

 FUNC_18(VAR_45);
 FUNC_18(VAR_44);

 return (0);
}
