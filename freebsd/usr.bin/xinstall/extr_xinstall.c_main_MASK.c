
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uid_t ;
typedef scalar_t__ u_long ;
typedef int u_int ;
struct stat {scalar_t__ st_dev; scalar_t__ st_ino; int st_mode; } ;
typedef int mode_t ;
typedef void* id_t ;
typedef void* gid_t ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char const* VAR_18 ;
 char* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_28 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ) ;
 char const* VAR_29 ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int,char**,char*) ;
 void* VAR_30 ;
 int FUNC_11 (char const*,void**) ;
 char const* VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_12 (char*,char const*,scalar_t__,int) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char const*,struct stat*) ;
 char const* VAR_36 ;
 int * VAR_37 ;
 int VAR_38 ;
 char const* VAR_39 ;
 scalar_t__ VAR_40 ;
 char const* VAR_41 ;
 int FUNC_15 (char const*,void**) ;
 int VAR_42 ;
 int * FUNC_16 (char const*) ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char const*,struct stat*) ;
 scalar_t__ FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char const**,scalar_t__*,int *) ;
 char const* VAR_43 ;
 char const* VAR_44 ;
 void* VAR_45 ;
 int FUNC_21 (char const*,void**) ;
 int FUNC_22 () ;
 int VAR_46 ;
 int FUNC_23 (char*,char const*) ;
 int FUNC_24 (char*,...) ;

int
FUNC_25(int VAR_47, char *VAR_48[])
{
 struct stat VAR_49, VAR_50;
 mode_t *VAR_51;
 u_long VAR_52;
 int VAR_53, VAR_54;
 u_int VAR_55;
 char *VAR_56;
 const char *VAR_57;

 VAR_52 = 0;
 VAR_55 = 0;
 VAR_31 = VAR_41 = ((void*)0);
 while ((VAR_53 = FUNC_10(VAR_47, VAR_48, "B:bCcD:df:g:h:l:M:m:N:o:pSsT:Uv")) !=
      -1)
  switch((char)VAR_53) {
  case 'B':
   VAR_43 = VAR_39;

  case 'b':
   VAR_21 = 1;
   break;
  case 'C':
   VAR_22 = 1;
   break;
  case 'c':

   break;
  case 'D':
   VAR_18 = VAR_39;
   break;
  case 'd':
   VAR_23 = 1;
   break;
  case 'f':
   VAR_32 = 1;
   VAR_29 = VAR_39;
   break;
  case 'g':
   VAR_33 = 1;
   VAR_31 = VAR_39;
   break;
  case 'h':
   VAR_19 = VAR_39;
   break;
  case 'l':
   for (VAR_56 = VAR_39; *VAR_56 != '\0'; VAR_56++)
    switch (*VAR_56) {
    case 's':
     VAR_24 &= ~(VAR_13|VAR_14);
     VAR_24 |= VAR_16;
     break;
    case 'h':
     VAR_24 &= ~(VAR_16|VAR_14);
     VAR_24 |= VAR_13;
     break;
    case 'm':
     VAR_24 &= ~(VAR_16|VAR_13);
     VAR_24 |= VAR_14;
     break;
    case 'a':
     VAR_24 &= ~VAR_15;
     VAR_24 |= VAR_12;
     break;
    case 'r':
     VAR_24 &= ~VAR_12;
     VAR_24 |= VAR_15;
     break;
    default:
     FUNC_4(1, "%c: invalid link type", *VAR_56);

    }
   break;
  case 'M':
   VAR_36 = VAR_39;
   break;
  case 'm':
   VAR_34 = 1;
   if (!(VAR_51 = FUNC_16(VAR_39)))
    FUNC_4(VAR_11, "invalid file mode: %s",
         VAR_39);
   VAR_38 = FUNC_9(VAR_51, 0);
   FUNC_7(VAR_51);
   break;
  case 'N':
   if (!FUNC_17(VAR_39))
    FUNC_3(VAR_10, "Unable to use user and group "
        "databases in `%s'", VAR_39);
   break;
  case 'o':
   VAR_35 = 1;
   VAR_41 = VAR_39;
   break;
  case 'p':
   VAR_22 = VAR_25 = 1;
   break;
  case 'S':
   VAR_42 = 1;
   break;
  case 's':
   VAR_26 = 1;
   break;
  case 'T':
   VAR_44 = VAR_39;
   break;
  case 'U':
   VAR_27 = 1;
   break;
  case 'v':
   VAR_46 = 1;
   break;
  case '?':
  default:
   FUNC_22();
  }
 VAR_47 -= VAR_40;
 VAR_48 += VAR_40;


 if (VAR_26 && VAR_23) {
  FUNC_24("-d and -s may not be specified together");
  FUNC_22();
 }

 if (FUNC_8("DONTSTRIP") != ((void*)0)) {
  FUNC_24("DONTSTRIP set - will not strip installed binaries");
  VAR_26 = 0;
 }


 if (VAR_47 == 0 || (VAR_47 == 1 && !VAR_23))
  FUNC_22();

 if (VAR_19 != ((void*)0)) {
  if (FUNC_19(VAR_19, "none") == 0) {
   VAR_20 = VAR_1;
  } else if (FUNC_19(VAR_19, "md5") == 0) {
         VAR_20 = VAR_0;
  } else if (FUNC_19(VAR_19, "rmd160") == 0) {
   VAR_20 = VAR_2;
  } else if (FUNC_19(VAR_19, "sha1") == 0) {
   VAR_20 = VAR_3;
  } else if (FUNC_19(VAR_19, "sha256") == 0) {
   VAR_20 = VAR_4;
  } else if (FUNC_19(VAR_19, "sha512") == 0) {
   VAR_20 = VAR_5;
  } else {
   FUNC_24("unknown digest `%s'", VAR_19);
   FUNC_22();
  }
 }


 if (VAR_22 && VAR_26)
  VAR_42 = 1;


 if (VAR_31 != ((void*)0) && !VAR_27) {
  if (FUNC_11(VAR_31, &VAR_30) == -1) {
   id_t VAR_58;
   if (!FUNC_15(VAR_31, &VAR_58))
    FUNC_4(1, "unknown group %s", VAR_31);
   VAR_30 = VAR_58;
  }
 } else
  VAR_30 = (gid_t)-1;

 if (VAR_41 != ((void*)0) && !VAR_27) {
  if (FUNC_21(VAR_41, &VAR_45) == -1) {
   id_t VAR_59;
   if (!FUNC_15(VAR_41, &VAR_59))
    FUNC_4(1, "unknown user %s", VAR_41);
   VAR_45 = VAR_59;
  }
 } else
  VAR_45 = (uid_t)-1;

 if (VAR_29 != ((void*)0) && !VAR_27) {
  if (FUNC_20(&VAR_29, &VAR_52, ((void*)0)))
   FUNC_4(VAR_11, "%s: invalid flag", VAR_29);
  VAR_55 |= VAR_17;
 }

 if (VAR_36 != ((void*)0)) {
  if ((VAR_37 = FUNC_6(VAR_36, "a")) == ((void*)0))
   FUNC_23("open %s", VAR_36);
 } else
  VAR_20 = VAR_1;

 if (VAR_23) {
  for (; *VAR_48 != ((void*)0); ++VAR_48)
   FUNC_13(*VAR_48);
  FUNC_5(VAR_9);

 }

 VAR_57 = VAR_48[VAR_47 - 1];
 VAR_54 = FUNC_18(VAR_57, &VAR_50);
 if (!VAR_54 && FUNC_0(VAR_50.st_mode)) {
  if (VAR_24 & VAR_16) {
   if (FUNC_14(VAR_57, &VAR_50) != 0)
    FUNC_3(VAR_10, "%s vanished", VAR_57);
   if (FUNC_1(VAR_50.st_mode)) {
    if (VAR_47 != 2) {
     VAR_28 = VAR_8;
     FUNC_3(VAR_11, "%s", VAR_57);
    }
    FUNC_12(*VAR_48, VAR_57, VAR_52, VAR_55);
    FUNC_5(VAR_9);
   }
  }
  for (; *VAR_48 != VAR_57; ++VAR_48)
   FUNC_12(*VAR_48, VAR_57, VAR_52, VAR_55 | VAR_6);
  FUNC_5(VAR_9);

 }


 if (VAR_47 != 2) {
  if (VAR_54)
   FUNC_24("target directory `%s' does not exist",
       VAR_48[VAR_47 - 1]);
  else
   FUNC_24("target `%s' is not a directory",
       VAR_48[VAR_47 - 1]);
  FUNC_22();
 }

 if (!VAR_54 && !VAR_24) {
  if (FUNC_18(*VAR_48, &VAR_49))
   FUNC_3(VAR_10, "%s", *VAR_48);
  if (!FUNC_2(VAR_50.st_mode)) {
   VAR_28 = VAR_7;
   FUNC_3(VAR_10, "%s", VAR_57);
  }
  if (VAR_50.st_dev == VAR_49.st_dev &&
      VAR_50.st_ino == VAR_49.st_ino)
   FUNC_4(VAR_11,
       "%s and %s are the same file", *VAR_48, VAR_57);
 }
 FUNC_12(*VAR_48, VAR_57, VAR_52, VAR_55);
 FUNC_5(VAR_9);

}
