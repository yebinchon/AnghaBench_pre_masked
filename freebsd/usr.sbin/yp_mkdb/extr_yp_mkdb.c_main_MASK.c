
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int intmax_t ;
typedef int hname ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int buf ;
struct TYPE_9__ {int (* close ) (TYPE_2__*) ;} ;
struct TYPE_8__ {char* data; int size; } ;
typedef int FILE ;
typedef TYPE_1__ DBT ;
typedef TYPE_2__ DB ;


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
 int FUNC_0 (char*,int ,int ,int ,int ,char*,int ,char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int,char**,char*) ;
 TYPE_2__* FUNC_8 (char*,int) ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_9 (char*,int,char*,int ) ;
 int * VAR_13 ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*,char*) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 (char*,...) ;
 scalar_t__ VAR_14 ;
 int FUNC_19 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;

int
FUNC_20(int VAR_15, char *VAR_16[])
{
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;
 char *VAR_21 = ((void*)0);
 char *VAR_22 = ((void*)0);
 char *VAR_23 = ((void*)0);
 char *VAR_24 = ((void*)0);
 char *VAR_25 = ((void*)0);
 char *VAR_26 = ((void*)0);
 int VAR_27 = 0;
 int VAR_28 = 0;
 DB *VAR_29;
 DBT VAR_30, VAR_31;
 char VAR_32[10240];
 char *VAR_33, *VAR_34;
 FILE *VAR_35;
 char VAR_36[VAR_0 + 2];

 while ((VAR_17 = FUNC_7(VAR_15, VAR_16, "uhcbsfd:i:o:m:")) != -1) {
  switch (VAR_17) {
  case 'f':
   VAR_20++;
   break;
  case 'u':
   VAR_18++;
   break;
  case 'c':
   VAR_19++;
   break;
  case 'b':
   VAR_27++;
   break;
  case 's':
   VAR_28++;
   break;
  case 'd':
   VAR_23 = VAR_11;
   break;
  case 'i':
   VAR_24 = VAR_11;
   break;
  case 'o':
   VAR_25 = VAR_11;
   break;
  case 'm':
   VAR_26 = VAR_11;
   break;
  case 'h':
  default:
   FUNC_17();
   break;
  }
 }

 VAR_15 -= VAR_12;
 VAR_16 += VAR_12;

 if (VAR_18) {
  VAR_22 = VAR_16[0];
  if (VAR_22 == ((void*)0))
   FUNC_17();
  FUNC_16(VAR_22);
  FUNC_3(0);

 }

 VAR_21 = VAR_16[0];
 VAR_22 = VAR_16[1];

 if (VAR_21 == ((void*)0) || VAR_22 == ((void*)0)) {
  if (VAR_19)
   goto doclear;
  FUNC_17();
 }

 if (VAR_26 == ((void*)0)) {
  if (FUNC_6((char *)&VAR_36, sizeof(VAR_36)) == -1)
   FUNC_2(1, "gethostname() failed");
  VAR_26 = (char *)&VAR_36;
 }






 if (!FUNC_11(VAR_21, "-")) {
  VAR_35 = VAR_13;
 } else {
  if ((VAR_35 = FUNC_5(VAR_21, "r")) == ((void*)0))
   FUNC_2(1, "failed to open %s", VAR_21);
 }

 if ((VAR_29 = FUNC_8(VAR_22, VAR_4|VAR_3|VAR_2|VAR_1)) == ((void*)0))
  FUNC_2(1, "open_db(%s) failed", VAR_22);

 if (VAR_27) {
  VAR_30.data = "YP_INTERDOMAIN";
  VAR_30.size = sizeof("YP_INTERDOMAIN") - 1;
  VAR_31.data = "";
  VAR_31.size = 0;
  FUNC_19(VAR_29, &VAR_30, &VAR_31, 0);
 }

 if (VAR_28) {
  VAR_30.data = "YP_SECURE";
  VAR_30.size = sizeof("YP_SECURE") - 1;
  VAR_31.data = "";
  VAR_31.size = 0;
  FUNC_19(VAR_29, &VAR_30, &VAR_31, 0);
 }

 VAR_30.data = "YP_MASTER_NAME";
 VAR_30.size = sizeof("YP_MASTER_NAME") - 1;
 VAR_31.data = VAR_26;
 VAR_31.size = FUNC_12(VAR_26);
 FUNC_19(VAR_29, &VAR_30, &VAR_31, 0);

 VAR_30.data = "YP_LAST_MODIFIED";
 VAR_30.size = sizeof("YP_LAST_MODIFIED") - 1;
 FUNC_9(VAR_32, sizeof(VAR_32), "%jd", (intmax_t)FUNC_15(((void*)0)));
 VAR_31.data = (char *)&VAR_32;
 VAR_31.size = FUNC_12(VAR_32);
 FUNC_19(VAR_29, &VAR_30, &VAR_31, 0);

 if (VAR_24) {
  VAR_30.data = "YP_INPUT_FILE";
  VAR_30.size = sizeof("YP_INPUT_FILE") - 1;
  VAR_31.data = VAR_24;
  VAR_31.size = FUNC_12(VAR_24);
  FUNC_19(VAR_29, &VAR_30, &VAR_31, 0);
 }

 if (VAR_25) {
  VAR_30.data = "YP_OUTPUT_FILE";
  VAR_30.size = sizeof("YP_OUTPUT_FILE") - 1;
  VAR_31.data = VAR_25;
  VAR_31.size = FUNC_12(VAR_25);
  FUNC_19(VAR_29, &VAR_30, &VAR_31, 0);
 }

 if (VAR_23) {
  VAR_30.data = "YP_DOMAIN_NAME";
  VAR_30.size = sizeof("YP_DOMAIN_NAME") - 1;
  VAR_31.data = VAR_23;
  VAR_31.size = FUNC_12(VAR_23);
  FUNC_19(VAR_29, &VAR_30, &VAR_31, 0);
 }

 while (FUNC_4((char *)&VAR_32, sizeof(VAR_32), VAR_35)) {
  char *VAR_37 = ((void*)0);
  int VAR_38;


  if ((VAR_37 = FUNC_10(VAR_32, '\n')))
   *VAR_37 = '\0';


  while (VAR_32[FUNC_12(VAR_32) - 1] == '\\') {
   FUNC_4((char *)&VAR_32[FUNC_12(VAR_32) - 1],
     sizeof(VAR_32) - FUNC_12(VAR_32), VAR_35);
   if ((VAR_37 = FUNC_10(VAR_32, '\n')))
    *VAR_37 = '\0';
  }


  if ((VAR_37 = FUNC_13(VAR_32, " \t")) == ((void*)0)) {
   FUNC_18("bad input -- no white space: %s", VAR_32);
   continue;
  }


  VAR_33 = (char *)&VAR_32;
  VAR_34 = VAR_37 + 1;
  *VAR_37 = '\0';


  while (*VAR_34 == ' ' || *VAR_34 == '\t')
   VAR_34++;


  if (VAR_20) {
   if (*VAR_33 == '+' || *VAR_33 == '-' ||
        *VAR_34 == '+' || *VAR_34 == '-') {
    FUNC_18("bad character at "
        "start of line: %s", VAR_32);
    continue;
   }
  }

  if (FUNC_12(VAR_33) > VAR_6) {
   FUNC_18("key too long: %s", VAR_33);
   continue;
  }

  if (!FUNC_12(VAR_33)) {
   FUNC_18("no key -- check source file for blank lines");
   continue;
  }

  if (FUNC_12(VAR_34) > VAR_6) {
   FUNC_18("data too long: %s", VAR_34);
   continue;
  }

  VAR_30.data = VAR_33;
  VAR_30.size = FUNC_12(VAR_33);
  VAR_31.data = VAR_34;
  VAR_31.size = FUNC_12(VAR_34);

  if ((VAR_38 = FUNC_19(VAR_29, &VAR_30, &VAR_31, 0)) != VAR_10) {
   switch (VAR_38) {
   case 128:
    FUNC_18("duplicate key '%s' - skipping", VAR_33);
    break;
   case 129:
   default:
    FUNC_2(1,"failed to write new record - exiting");
    break;
   }
  }

 }

 (void)(VAR_29->close)(VAR_29);

doclear:
 if (VAR_19) {
  char VAR_39 = 0;
  char *VAR_40 = ((void*)0);
  int VAR_41;
  if ((VAR_41 = FUNC_0("localhost", VAR_8,VAR_9, VAR_7,
   (xdrproc_t)VAR_14, &VAR_39,
   (xdrproc_t)VAR_14, VAR_40)) != VAR_5) {
   FUNC_18("failed to send 'clear' to local ypserv: %s",
    FUNC_1((enum clnt_stat) VAR_41));
  }
 }

 FUNC_3(0);
}
