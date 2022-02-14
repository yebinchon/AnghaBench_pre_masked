
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xferstat {int dummy; } ;
struct url_stat {int size; scalar_t__ mtime; scalar_t__ atime; } ;
struct url {char const* scheme; scalar_t__ ims_time; size_t offset; int doc; int * host; } ;
struct timeval {long tv_sec; scalar_t__ tv_usec; } ;
struct stat {scalar_t__ st_mtime; int st_size; int st_mode; scalar_t__ st_dev; scalar_t__ st_ino; int st_gid; int st_uid; } ;
typedef size_t off_t ;
typedef int intmax_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;


 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char**,char*,int,char const*,char const*) ;
 char* VAR_21 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_25 ;
 int FUNC_8 (struct url*) ;
 scalar_t__ VAR_26 ;
 char const* VAR_27 ;
 struct url* FUNC_9 (char*) ;
 int FUNC_10 (struct url*,struct url_stat*,char*) ;
 unsigned int VAR_28 ;
 int * FUNC_11 (struct url*,struct url_stat*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (char const*,char*) ;
 int FUNC_15 (int ,char*,int ,long) ;
 size_t FUNC_16 (char*,int,size_t,int *) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (int *,size_t,int ) ;
 int FUNC_19 (int ,struct stat*) ;
 int VAR_29 ;
 size_t FUNC_20 (char*,int,size_t,int *) ;
 int VAR_30 ;
 char const* VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_21 (char*,scalar_t__) ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_22 (char*,...) ;
 scalar_t__ VAR_38 ;
 int FUNC_23 (char*,char const*) ;
 scalar_t__ VAR_39 ;
 int FUNC_24 (int *,int *,int ,size_t) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (char const*,struct stat*) ;
 int FUNC_27 (struct xferstat*) ;
 int FUNC_28 (struct xferstat*,char const*,int,size_t) ;
 int FUNC_29 (struct xferstat*,size_t) ;
 int VAR_44 ;
 int * VAR_45 ;
 int FUNC_30 (char*,char*) ;
 scalar_t__ FUNC_31 (char const*,char*) ;
 int FUNC_32 (char const*,char*) ;
 scalar_t__ FUNC_33 (char const*) ;
 scalar_t__ FUNC_34 (int *,char*,int) ;
 char* FUNC_35 (char const*,char) ;
 int FUNC_36 (int ,char const*) ;
 int FUNC_37 (char*) ;
 scalar_t__ FUNC_38 (char*,struct timeval*) ;
 int VAR_46 ;
 int FUNC_39 (char*,char const*) ;
 int FUNC_40 (char*,...) ;

__attribute__((used)) static int
FUNC_41(char *VAR_47, const char *VAR_48)
{
 struct url *VAR_49;
 struct url_stat VAR_50;
 struct stat VAR_51, VAR_52;
 struct xferstat VAR_53;
 FILE *VAR_54, *VAR_55;
 size_t VAR_56, VAR_57, VAR_58;
 off_t VAR_59;
 char VAR_60[8];
 const char *VAR_61;
 char *VAR_62;
 int VAR_63;
 unsigned VAR_64;
 char *VAR_65;

 VAR_54 = VAR_55 = ((void*)0);
 VAR_62 = ((void*)0);

 VAR_64 = 0;
 *VAR_60 = 0;
 VAR_59 = 0;


 if (VAR_46 > 1)
  FUNC_30(VAR_60, "v");
 if (VAR_46 > 2)
  VAR_25 = 1;


 VAR_49 = ((void*)0);
 if (*VAR_47 == '\0') {
  FUNC_40("empty URL");
  goto failure;
 }
 if ((VAR_49 = FUNC_9(VAR_47)) == ((void*)0)) {
  FUNC_40("%s: parse error", VAR_47);
  goto failure;
 }


 if (!*VAR_49->scheme) {
  if (!*VAR_49->host)
   FUNC_32(VAR_49->scheme, VAR_9);
  else if (FUNC_34(VAR_49->host, "ftp.", 4) == 0)
   FUNC_32(VAR_49->scheme, VAR_10);
  else if (FUNC_34(VAR_49->host, "www.", 4) == 0)
   FUNC_32(VAR_49->scheme, VAR_11);
 }


 switch (VAR_24) {
 case 129:
  FUNC_30(VAR_60, "4");
  break;
 case 128:
  FUNC_30(VAR_60, "6");
  break;
 }


 if (FUNC_31(VAR_49->scheme, VAR_10) == 0) {
  if (VAR_37)
   FUNC_30(VAR_60, "p");
  if (VAR_22)
   FUNC_30(VAR_60, "d");
  if (VAR_19)
   FUNC_30(VAR_60, "l");
  VAR_64 = VAR_18 ? VAR_18 : VAR_29;
 }


 if (FUNC_31(VAR_49->scheme, VAR_11) == 0 ||
     FUNC_31(VAR_49->scheme, VAR_12) == 0) {
  if (VAR_22)
   FUNC_30(VAR_60, "d");
  if (VAR_1)
   FUNC_30(VAR_60, "A");
  VAR_64 = VAR_18 ? VAR_18 : VAR_30;
  if (VAR_32) {
   if (FUNC_26(VAR_31, &VAR_51)) {
    FUNC_39("%s: stat()", VAR_31);
    goto failure;
   }
   VAR_49->ims_time = VAR_51.st_mtime;
   FUNC_30(VAR_60, "i");
  }
 }


 VAR_28 = VAR_64;


 if (VAR_39) {
  if (VAR_64)
   FUNC_1(VAR_64);
  VAR_63 = FUNC_10(VAR_49, &VAR_50, VAR_60);
  if (VAR_64)
   FUNC_1(0);
  if (VAR_41 || VAR_43)
   goto signal;
  if (VAR_63 == -1) {
   FUNC_40("%s", VAR_27);
   goto failure;
  }
  if (VAR_50.size == -1)
   FUNC_22("Unknown\n");
  else
   FUNC_22("%jd\n", (intmax_t)VAR_50.size);
  goto success;
 }
 VAR_51.st_size = -1;
 if (!VAR_36) {
  VAR_63 = FUNC_26(VAR_48, &VAR_51);
  if (VAR_63 == 0 && VAR_38 && FUNC_0(VAR_51.st_mode)) {
   VAR_49->offset = VAR_51.st_size;
  } else if (VAR_63 == -1 || !FUNC_0(VAR_51.st_mode)) {





   VAR_51.st_size = -1;
  }
  if (VAR_63 == -1 && VAR_23 != VAR_4) {
   FUNC_40("%s: stat()", VAR_48);
   goto failure;
  }
 }


 if (VAR_64)
  FUNC_1(VAR_64);
 VAR_54 = FUNC_11(VAR_49, &VAR_50, VAR_60);
 if (VAR_64)
  FUNC_1(0);
 if (VAR_41 || VAR_43)
  goto signal;
 if (VAR_54 == ((void*)0)) {
  FUNC_40("%s: %s", VAR_47, VAR_27);
  if (VAR_32 && (FUNC_31(VAR_49->scheme, VAR_11) == 0 ||
      FUNC_31(VAR_49->scheme, VAR_12) == 0) &&
      VAR_26 == VAR_6 &&
      FUNC_31(VAR_27, "Not Modified") == 0) {

   VAR_63 = 0;
   goto done;
  } else
   goto failure;
 }
 if (VAR_43)
  goto signal;


 if (VAR_17) {
  if (VAR_50.size == -1) {
   FUNC_40("%s: size unknown", VAR_47);
  } else if (VAR_50.size != VAR_17) {
   FUNC_40("%s: size mismatch: expected %jd, actual %jd",
       VAR_47, (intmax_t)VAR_17, (intmax_t)VAR_50.size);
   goto failure;
  }
 }


 if (VAR_33 && FUNC_31(VAR_49->scheme, "file") == 0 && !VAR_36) {
  if (FUNC_36(VAR_49->doc, VAR_48) == -1) {
   FUNC_39("%s: symlink()", VAR_48);
   goto failure;
  }
  goto success;
 }

 if (VAR_50.size == -1 && !VAR_36 && VAR_46 > 0)
  FUNC_40("%s: size of remote file is not known", VAR_47);
 if (VAR_46 > 1) {
  if (VAR_51.st_size != -1)
   FUNC_15(VAR_44, "local size / mtime: %jd / %ld\n",
       (intmax_t)VAR_51.st_size, (long)VAR_51.st_mtime);
  if (VAR_50.size != -1)
   FUNC_15(VAR_44, "remote size / mtime: %jd / %ld\n",
       (intmax_t)VAR_50.size, (long)VAR_50.mtime);
 }


 if (VAR_36) {

  VAR_55 = VAR_45;
 } else if (VAR_38 && VAR_51.st_size != -1) {

  if (!VAR_7 && VAR_50.mtime && VAR_51.st_mtime != VAR_50.mtime) {

   FUNC_6(VAR_54);

   if (VAR_8) {
    FUNC_40("%s: local modification time "
        "does not match remote", VAR_48);
    goto failure_keep;
   }
  } else if (VAR_49->offset > VAR_51.st_size) {

   FUNC_40("%s: gap in resume mode", VAR_47);
   FUNC_6(VAR_55);
   VAR_55 = ((void*)0);

  } else if (VAR_50.size != -1) {
   if (VAR_50.size == VAR_51.st_size)

    goto success;
   if (VAR_51.st_size > VAR_50.size) {

    FUNC_40("%s: local file (%jd bytes) is longer "
        "than remote file (%jd bytes)", VAR_48,
        (intmax_t)VAR_51.st_size, (intmax_t)VAR_50.size);
    goto failure;
   }

   if ((VAR_55 = FUNC_14(VAR_48, "r+")) == ((void*)0)) {
    FUNC_39("%s: fopen()", VAR_48);
    goto failure;
   }

   if (FUNC_19(FUNC_13(VAR_55), &VAR_52) == -1) {

    FUNC_39("%s: fstat()", VAR_48);
    goto failure;
   }
   if (VAR_52.st_dev != VAR_51.st_dev ||
       VAR_52.st_ino != VAR_51.st_ino ||
       VAR_52.st_size != VAR_51.st_size) {
    FUNC_40("%s: file has changed", VAR_47);
    FUNC_6(VAR_55);
    VAR_55 = ((void*)0);
    VAR_51 = VAR_52;

   }
  }

  if (VAR_55 != ((void*)0) && FUNC_18(VAR_55, VAR_49->offset, VAR_13) != 0) {
   FUNC_39("%s: fseeko()", VAR_48);
   FUNC_6(VAR_55);
   VAR_55 = ((void*)0);

  }
 } else if (VAR_34 && VAR_51.st_size != -1) {

  if (VAR_51.st_size == VAR_50.size && VAR_51.st_mtime == VAR_50.mtime)
   goto success;
 }

 if (VAR_55 == ((void*)0)) {






  if (VAR_49->offset > 0) {





   VAR_49->offset = 0;
   if ((VAR_54 = FUNC_11(VAR_49, &VAR_50, VAR_60)) == ((void*)0)) {
    FUNC_40("%s: %s", VAR_47, VAR_27);
    goto failure;
   }
   if (VAR_43)
    goto signal;
  }


  if (VAR_51.st_size != -1 && FUNC_0(VAR_51.st_mode)) {
   if ((VAR_61 = FUNC_35(VAR_48, '/')) == ((void*)0))
    VAR_61 = VAR_48;
   else
    ++VAR_61;
   FUNC_2(&VAR_62, "%.*s.fetch.XXXXXX.%s",
       (int)(VAR_61 - VAR_48), VAR_48, VAR_61);
   if (VAR_62 != ((void*)0)) {
    if (FUNC_21(VAR_62, FUNC_33(VAR_61) + 1) == -1) {
     FUNC_39("%s: mkstemps()", VAR_48);
     goto failure;
    }
    VAR_55 = FUNC_14(VAR_62, "w");
    FUNC_4(VAR_62, VAR_51.st_uid, VAR_51.st_gid);
    FUNC_3(VAR_62, VAR_51.st_mode & VAR_0);
   }
  }
  if (VAR_55 == ((void*)0))
   VAR_55 = FUNC_14(VAR_48, "w");
  if (VAR_55 == ((void*)0)) {
   FUNC_39("%s: open()", VAR_48);
   goto failure;
  }
 }
 VAR_59 = VAR_49->offset;


 FUNC_28(&VAR_53, VAR_48, VAR_50.size, VAR_59);

 VAR_41 = VAR_42 = VAR_43 = 0;


 FUNC_24(VAR_54, ((void*)0), VAR_20, VAR_2);
 FUNC_25(VAR_14, VAR_40);
 while (!VAR_43) {
  if (VAR_50.size != -1 && VAR_50.size - VAR_59 < VAR_2 &&
      VAR_50.size - VAR_59 >= 0)
   VAR_56 = VAR_50.size - VAR_59;
  else
   VAR_56 = VAR_2;
  if (VAR_42) {
   FUNC_27(&VAR_53);
   VAR_42 = 0;
  }

  if (VAR_56 == 0)
   break;

  if ((VAR_57 = FUNC_16(VAR_21, 1, VAR_56, VAR_54)) < VAR_56) {
   if (FUNC_7(VAR_54) && VAR_23 == VAR_3 && !VAR_43)
    FUNC_5(VAR_54);
   else if (VAR_57 == 0)
    break;
  }

  FUNC_29(&VAR_53, VAR_59 += VAR_57);
  for (VAR_65 = VAR_21; VAR_57 > 0; VAR_65 += VAR_58, VAR_57 -= VAR_58)
   if ((VAR_58 = FUNC_20(VAR_65, 1, VAR_57, VAR_55)) < VAR_57) {
    if (FUNC_7(VAR_55) && VAR_23 == VAR_3 && !VAR_43)
     FUNC_5(VAR_55);
    else
     break;
   }
  if (VAR_57 != 0)
   break;
 }
 if (!VAR_41)
  VAR_41 = FUNC_7(VAR_54) && VAR_23 == VAR_5;
 FUNC_25(VAR_14, VAR_15);

 FUNC_27(&VAR_53);






 signal:

 if (!VAR_35 && VAR_50.mtime && !VAR_36 && VAR_55 != ((void*)0) &&
     (FUNC_26(VAR_48, &VAR_51) != -1) && VAR_51.st_mode & VAR_16) {
  struct timeval VAR_66[2];

  FUNC_12(VAR_55);
  VAR_66[0].tv_sec = (long)(VAR_50.atime ? VAR_50.atime : VAR_50.mtime);
  VAR_66[1].tv_sec = (long)VAR_50.mtime;
  VAR_66[0].tv_usec = VAR_66[1].tv_usec = 0;
  if (FUNC_38(VAR_62 ? VAR_62 : VAR_48, VAR_66))
   FUNC_39("%s: utimes()", VAR_62 ? VAR_62 : VAR_48);
 }


 if (VAR_41)
  FUNC_40("transfer timed out");
 if (VAR_43) {
  FUNC_40("transfer interrupted");
  goto failure;
 }


 if (VAR_54 == ((void*)0))
  goto failure;

 if (!VAR_41) {

  if (FUNC_7(VAR_54))
   FUNC_39("%s", VAR_47);
  if (FUNC_7(VAR_55))
   FUNC_39("%s", VAR_48);
  if (FUNC_7(VAR_54) || FUNC_7(VAR_55))
   goto failure;
 }


 if (VAR_50.size != -1 && VAR_59 < VAR_50.size) {
  FUNC_40("%s appears to be truncated: %jd/%jd bytes",
      VAR_48, (intmax_t)VAR_59, (intmax_t)VAR_50.size);
  goto failure_keep;
 }





 if (VAR_41 && VAR_50.size == -1) {
  FUNC_40("%s may be truncated", VAR_48);
  goto failure_keep;
 }

 success:
 VAR_63 = 0;
 if (VAR_62 != ((void*)0) && FUNC_23(VAR_62, VAR_48) == -1) {
  FUNC_39("%s: rename()", VAR_48);
  goto failure_keep;
 }
 goto done;
 failure:
 if (VAR_55 && VAR_55 != VAR_45 && !VAR_8 && !VAR_38)
  if (FUNC_26(VAR_48, &VAR_51) != -1 && (VAR_51.st_mode & VAR_16))
   FUNC_37(VAR_62 ? VAR_62 : VAR_48);
 if (VAR_8 && VAR_62 != ((void*)0) && VAR_51.st_size == -1)
  FUNC_23(VAR_62, VAR_48);
 failure_keep:
 VAR_63 = -1;
 goto done;
 done:
 if (VAR_54)
  FUNC_6(VAR_54);
 if (VAR_55 && VAR_55 != VAR_45)
  FUNC_6(VAR_55);
 if (VAR_49)
  FUNC_8(VAR_49);
 if (VAR_62 != ((void*)0))
  FUNC_17(VAR_62);
 return (VAR_63);
}
