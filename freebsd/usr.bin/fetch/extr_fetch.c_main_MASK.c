
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
typedef void* off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 char const* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (char**,char*,char const*,char const*,...) ;
 int VAR_24 ;
 int * VAR_25 ;
 char* VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (int,char*,char const*) ;
 scalar_t__ VAR_28 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int) ;
 char* VAR_29 ;
 int VAR_30 ;
 int FUNC_4 (char*,char const*) ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_5 (int ,char*,void*) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_34 ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int,char**,char*,int ,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 char* VAR_35 ;
 scalar_t__ VAR_36 ;
 char* VAR_37 ;
 int VAR_38 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int * FUNC_13 (scalar_t__) ;
 int VAR_42 ;
 int VAR_43 ;
 char const* VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 char* VAR_48 ;
 scalar_t__ VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_14 (char*,char const*,int) ;
 int VAR_55 ;
 int FUNC_15 (int ,struct sigaction*,int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ VAR_56 ;
 int FUNC_17 (void*) ;
 int FUNC_18 (char const*,struct stat*) ;
 int VAR_57 ;
 scalar_t__ FUNC_19 (char const*,char*) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 char const* FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (char*) ;
 char* FUNC_23 (char*,char) ;
 void* FUNC_24 (char const*,char**,int) ;
 int VAR_58 ;
 int FUNC_25 () ;
 scalar_t__ VAR_59 ;
 int VAR_60 ;
 scalar_t__ VAR_61 ;
 void* VAR_62 ;
 int FUNC_26 (char*,...) ;

int
FUNC_27(int VAR_63, char *VAR_64[])
{
 struct stat VAR_65;
 struct sigaction VAR_66;
 const char *VAR_67, *VAR_68;
 char *VAR_69, *VAR_70;
 int VAR_71, VAR_72, VAR_73;


 while ((VAR_71 = FUNC_8(VAR_63, VAR_64,
     "146AaB:bc:dFf:Hh:i:lMmN:nPpo:qRrS:sT:tUvw:",
     VAR_40, ((void*)0))) != -1)
  switch (VAR_71) {
  case '1':
   VAR_47 = 1;
   break;
  case '4':
   VAR_30 = VAR_12;
   break;
  case '6':
   VAR_30 = VAR_13;
   break;
  case 'A':
   VAR_0 = 1;
   break;
  case 'a':
   VAR_23 = 1;
   break;
  case 'B':
   VAR_1 = (off_t)FUNC_24(VAR_48, &VAR_69, 10);
   if (*VAR_48 == '\0' || *VAR_69 != '\0')
    FUNC_2(1, "invalid buffer size (%s)", VAR_48);
   break;
  case 'b':
   FUNC_26("warning: the -b option is deprecated");
   VAR_24 = 1;
   break;
  case 'c':
   VAR_26 = VAR_48;
   break;
  case 'd':
   VAR_27 = 1;
   break;
  case 'F':
   VAR_9 = 1;
   break;
  case 'f':
   VAR_29 = VAR_48;
   break;
  case 'H':
   FUNC_26("the -H option is now implicit, "
       "use -U to disable");
   break;
  case 'h':
   VAR_35 = VAR_48;
   break;
  case 'i':
   VAR_38 = 1;
   VAR_37 = VAR_48;
   break;
  case 'l':
   VAR_39 = 1;
   break;
  case 'o':
   VAR_45 = 1;
   VAR_44 = VAR_48;
   break;
  case 'M':
  case 'm':
   if (VAR_53)
    FUNC_2(1, "the -m and -r flags "
        "are mutually exclusive");
   VAR_41 = 1;
   break;
  case 'N':
   VAR_11 = VAR_48;
   break;
  case 'n':
   VAR_42 = 1;
   break;
  case 'P':
  case 'p':
   VAR_50 = 1;
   break;
  case 'q':
   VAR_59 = 0;
   break;
  case 'R':
   VAR_14 = 1;
   break;
  case 'r':
   if (VAR_41)
    FUNC_2(1, "the -m and -r flags "
        "are mutually exclusive");
   VAR_53 = 1;
   break;
  case 'S':
   VAR_20 = (off_t)FUNC_24(VAR_48, &VAR_69, 10);
   if (*VAR_48 == '\0' || *VAR_69 != '\0')
    FUNC_2(1, "invalid size (%s)", VAR_48);
   break;
  case 's':
   VAR_54 = 1;
   break;
  case 'T':
   VAR_21 = FUNC_24(VAR_48, &VAR_69, 10);
   if (*VAR_48 == '\0' || *VAR_69 != '\0')
    FUNC_2(1, "invalid timeout (%s)", VAR_48);
   break;
  case 't':
   VAR_58 = 1;
   FUNC_26("warning: the -t option is deprecated");
   break;
  case 'U':
   VAR_22 = 1;
   break;
  case 'v':
   VAR_59++;
   break;
  case 'w':
   VAR_23 = 1;
   VAR_62 = FUNC_24(VAR_48, &VAR_69, 10);
   if (*VAR_48 == '\0' || *VAR_69 != '\0')
    FUNC_2(1, "invalid delay (%s)", VAR_48);
   break;
  case 141:
   FUNC_14("FETCH_BIND_ADDRESS", VAR_48, 1);
   break;
  case 138:
   FUNC_14("FTP_PASSIVE_MODE", "no", 1);
   break;
  case 140:
   FUNC_14("HTTP_REFERER", VAR_48, 1);
   break;
  case 139:
   FUNC_14("HTTP_USER_AGENT", VAR_48, 1);
   break;
  case 137:
   FUNC_14("NO_PROXY", VAR_48, 1);
   break;
  case 136:
   FUNC_14("SSL_CA_CERT_FILE", VAR_48, 1);
   break;
  case 135:
   FUNC_14("SSL_CA_CERT_PATH", VAR_48, 1);
   break;
  case 134:
   FUNC_14("SSL_CLIENT_CERT_FILE", VAR_48, 1);
   break;
  case 133:
   FUNC_14("SSL_CLIENT_KEY_FILE", VAR_48, 1);
   break;
  case 132:
   FUNC_14("SSL_CLIENT_CRL_FILE", VAR_48, 1);
   break;
  case 131:
   FUNC_14("SSL_NO_SSL3", "", 1);
   break;
  case 130:
   FUNC_14("SSL_NO_TLS1", "", 1);
   break;
  case 129:
   FUNC_14("SSL_NO_VERIFY_HOSTNAME", "", 1);
   break;
  case 128:
   FUNC_14("SSL_NO_VERIFY_PEER", "", 1);
   break;
  default:
   FUNC_25();
   FUNC_3(1);
  }

 VAR_63 -= VAR_49;
 VAR_64 += VAR_49;

 if (VAR_35 || VAR_29 || VAR_26) {
  if (!VAR_35 || !VAR_29 || VAR_63) {
   FUNC_25();
   FUNC_3(1);
  }

  if (FUNC_20(VAR_35, "@:/") != FUNC_22(VAR_35))
   FUNC_2(1, "invalid hostname");
  if (FUNC_0(VAR_64, "ftp://%s/%s/%s", VAR_35,
      VAR_26 ? VAR_26 : "", VAR_29) == -1)
   FUNC_2(1, "%s", FUNC_21(VAR_3));
  VAR_63++;
 }

 if (!VAR_63) {
  FUNC_25();
  FUNC_3(1);
 }


 if (VAR_1 < VAR_10)
  VAR_1 = VAR_10;
 if ((VAR_25 = FUNC_13(VAR_1)) == ((void*)0))
  FUNC_2(1, "%s", FUNC_21(VAR_3));


 if ((VAR_68 = FUNC_7("FTP_TIMEOUT")) != ((void*)0)) {
  VAR_34 = FUNC_24(VAR_68, &VAR_69, 10);
  if (*VAR_68 == '\0' || *VAR_69 != '\0' || VAR_34 < 0) {
   FUNC_26("FTP_TIMEOUT (%s) is not a positive integer", VAR_68);
   VAR_34 = 0;
  }
 }
 if ((VAR_68 = FUNC_7("HTTP_TIMEOUT")) != ((void*)0)) {
  VAR_36 = FUNC_24(VAR_68, &VAR_69, 10);
  if (*VAR_68 == '\0' || *VAR_69 != '\0' || VAR_36 < 0) {
   FUNC_26("HTTP_TIMEOUT (%s) is not a positive integer", VAR_68);
   VAR_36 = 0;
  }
 }


 VAR_66.sa_flags = 0;
 VAR_66.sa_handler = VAR_55;
 FUNC_16(&VAR_66.sa_mask);
 FUNC_15(VAR_16, &VAR_66, ((void*)0));
 VAR_66.sa_flags = VAR_15;
 FUNC_15(VAR_17, &VAR_66, ((void*)0));
 VAR_33 = 0;


 if (VAR_45) {
  if (FUNC_19(VAR_44, "-") == 0) {
   VAR_46 = 1;
  } else if (FUNC_18(VAR_44, &VAR_65) == -1) {
   if (VAR_28 == VAR_2) {
    if (VAR_63 > 1)
     FUNC_2(1, "%s is not a directory",
         VAR_44);
   } else {
    FUNC_1(1, "%s", VAR_44);
   }
  } else {
   if (VAR_65.st_mode & VAR_19)
    VAR_43 = 1;
  }
 }


 VAR_61 = FUNC_11(VAR_18);
 VAR_60 = VAR_61 && VAR_59 > 0;
 if (VAR_60)
  VAR_51 = FUNC_9();

 VAR_73 = 0;


 if (VAR_61)
  VAR_31 = VAR_52;
 if (VAR_11 != ((void*)0))
  if (FUNC_14("NETRC", VAR_11, 1) == -1)
   FUNC_1(1, "setenv: cannot set NETRC=%s", VAR_11);

 while (VAR_63) {
  if ((VAR_67 = FUNC_23(*VAR_64, '/')) == ((void*)0))
   VAR_67 = *VAR_64;
  else
   VAR_67++;

  if (!*VAR_67)
   VAR_67 = "fetch.out";

  VAR_32 = 0;

  if (VAR_45) {
   if (VAR_46) {
    VAR_72 = FUNC_4(*VAR_64, "-");
   } else if (VAR_43) {
    FUNC_0(&VAR_70, "%s/%s", VAR_44, VAR_67);
    VAR_72 = FUNC_4(*VAR_64, VAR_70);
    FUNC_6(VAR_70);
   } else {
    VAR_72 = FUNC_4(*VAR_64, VAR_44);
   }
  } else {
   VAR_72 = FUNC_4(*VAR_64, VAR_67);
  }

  if (VAR_56)
   FUNC_12(FUNC_10(), VAR_17);

  if (VAR_72 == 0 && VAR_47)
   FUNC_3(0);

  if (VAR_72) {
   VAR_73 = 1;
   if ((VAR_32
       && VAR_32 != VAR_6
       && VAR_32 != VAR_4
       && VAR_32 != VAR_8
       && VAR_32 != VAR_5
       && VAR_32 != VAR_7)) {
    if (VAR_62 && VAR_59)
     FUNC_5(VAR_57, "Waiting %ld seconds "
         "before retrying\n", VAR_62);
    if (VAR_62)
     FUNC_17(VAR_62);
    if (VAR_23)
     continue;
   }
  }

  VAR_63--, VAR_64++;
 }

 FUNC_3(VAR_73);
}
