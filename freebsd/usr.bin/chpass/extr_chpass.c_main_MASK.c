
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct ypclnt {int error; } ;
struct passwd {scalar_t__ pw_uid; int pw_fields; char* pw_passwd; int pw_name; } ;
typedef int ENTRY ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct passwd*,int) ;
 int FUNC_1 () ;
 char* FUNC_2 (char const*,char*) ;
 struct passwd* FUNC_3 (int ,struct passwd*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct passwd*) ;
 int FUNC_8 (int,char**,char*) ;
 char* FUNC_9 (char*) ;
 struct passwd* FUNC_10 (char*) ;
 struct passwd* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 () ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (char*,struct passwd*,int *) ;
 int FUNC_14 (char*,struct passwd*,int *) ;
 int FUNC_15 (int,int,struct passwd*,struct passwd*) ;
 struct passwd* FUNC_16 (struct passwd*) ;
 scalar_t__ FUNC_17 (struct passwd*,struct passwd*) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (int *,int *) ;
 int FUNC_20 () ;
 int FUNC_21 (int ) ;
 int FUNC_22 () ;
 int FUNC_23 (int) ;
 scalar_t__ FUNC_24 (char*,char) ;
 scalar_t__ FUNC_25 (char*,char*) ;
 int FUNC_26 () ;
 int FUNC_27 (char*,...) ;
 int FUNC_28 (struct ypclnt*) ;
 int FUNC_29 (struct ypclnt*) ;
 int FUNC_30 (struct ypclnt*) ;
 struct ypclnt* FUNC_31 (char const*,char*,char const*) ;
 int FUNC_32 (struct ypclnt*,struct passwd*,char const*) ;

int
FUNC_33(int VAR_6, char *VAR_7[])
{
 enum { NEWSH, LOADENTRY, EDITENTRY, NEWPW, NEWEXP } VAR_8;
 struct passwd VAR_9, *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 const char *VAR_15;
 char *VAR_16 = ((void*)0), *VAR_17;
 uid_t VAR_18;





 VAR_11 = VAR_10 = ((void*)0);
 VAR_8 = EDITENTRY;



 while ((VAR_12 = FUNC_8(VAR_6, VAR_7, "a:p:s:e:")) != -1)

  switch (VAR_12) {
  case 'a':
   VAR_8 = LOADENTRY;
   VAR_16 = VAR_4;
   break;
  case 's':
   VAR_8 = NEWSH;
   VAR_16 = VAR_4;
   break;
  case 'p':
   VAR_8 = NEWPW;
   VAR_16 = VAR_4;
   break;
  case 'e':
   VAR_8 = NEWEXP;
   VAR_16 = VAR_4;
   break;
  case '?':
  default:
   FUNC_26();
  }

 VAR_6 -= VAR_5;
 VAR_7 += VAR_5;

 if (VAR_6 > 1)
  FUNC_26();

 VAR_18 = FUNC_12();

 if (VAR_8 == EDITENTRY || VAR_8 == NEWSH || VAR_8 == NEWPW || VAR_8 == NEWEXP) {
  if (VAR_6 == 0) {
   if ((VAR_11 = FUNC_11(VAR_18)) == ((void*)0))
    FUNC_5(1, "unknown user: uid %lu",
        (unsigned long)VAR_18);
  } else {
   if ((VAR_11 = FUNC_10(*VAR_7)) == ((void*)0))
    FUNC_5(1, "unknown user: %s", *VAR_7);
   if (VAR_18 != 0 && VAR_18 != VAR_11->pw_uid)
    FUNC_1();
  }


  if ((VAR_11 = FUNC_16(VAR_11)) == ((void*)0) ||
      (VAR_10 = FUNC_16(VAR_11)) == ((void*)0))
   FUNC_4(1, "pw_dup");
 }
 VAR_3 = (VAR_18 == 0);

 if (VAR_8 == NEWSH) {

  if (!VAR_16[0])
   FUNC_26();
  if (FUNC_14(VAR_16, VAR_11, (ENTRY *)((void*)0)) == -1)
   FUNC_6(1);
 }

 if (VAR_8 == NEWEXP) {
  if (VAR_18)
   FUNC_1();
  if (FUNC_13(VAR_16, VAR_11, (ENTRY *)((void*)0)) == -1)
   FUNC_6(1);
 }

 if (VAR_8 == LOADENTRY) {
  if (VAR_18)
   FUNC_1();
  VAR_11 = &VAR_9;
  VAR_10 = ((void*)0);
  if (!FUNC_0(VAR_16, VAR_11, VAR_2|VAR_1))
   FUNC_6(1);
 }

 if (VAR_8 == NEWPW) {
  if (VAR_18)
   FUNC_1();

  if (FUNC_24(VAR_16, ':'))
   FUNC_5(1, "invalid format for password");
  VAR_11->pw_passwd = VAR_16;
 }

 if (VAR_8 == EDITENTRY) {




  if (FUNC_19(((void*)0), ((void*)0)))
   FUNC_4(1, "pw_init()");
  if ((VAR_14 = FUNC_23(-1)) == -1) {
   FUNC_18();
   FUNC_4(1, "pw_tmp()");
  }
  FUNC_7(VAR_11);
  VAR_11 = FUNC_3(FUNC_22(), VAR_10);
  FUNC_18();
  if (VAR_11 == ((void*)0))
   FUNC_4(1, "edit()");




  if (FUNC_17(VAR_10, VAR_11) &&
      FUNC_25(VAR_10->pw_passwd, VAR_11->pw_passwd) == 0)
   FUNC_5(0, "user information unchanged");
 }

 if (VAR_10 && !VAR_3) {
  VAR_15 = FUNC_9("Password: ");
  VAR_17 = FUNC_2(VAR_15, VAR_10->pw_passwd);
  if (VAR_17 == ((void*)0) || FUNC_25(VAR_17, VAR_10->pw_passwd) != 0)
   FUNC_1();
 } else {
  VAR_15 = "";
 }

 if (VAR_10 != ((void*)0))
  VAR_11->pw_fields |= (VAR_10->pw_fields & VAR_0);
 switch (VAR_11->pw_fields & VAR_0) {
 case 0:
 case 129:
  if (FUNC_19(((void*)0), ((void*)0)))
   FUNC_4(1, "pw_init()");
  if ((VAR_13 = FUNC_20()) == -1) {
   FUNC_18();
   FUNC_4(1, "pw_lock()");
  }
  if ((VAR_14 = FUNC_23(-1)) == -1) {
   FUNC_18();
   FUNC_4(1, "pw_tmp()");
  }
  if (FUNC_15(VAR_13, VAR_14, VAR_11, VAR_10) == -1) {
   FUNC_18();
   FUNC_4(1, "pw_copy");
  }
  if (FUNC_21(VAR_11->pw_name) == -1) {
   FUNC_18();
   FUNC_4(1, "pw_mkdb()");
  }
  FUNC_18();
  FUNC_5(0, "user information updated");
  break;
 default:
  FUNC_5(1, "unsupported passwd source");
 }
}
