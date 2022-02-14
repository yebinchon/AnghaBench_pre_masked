
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {scalar_t__ pw_uid; } ;
struct group {scalar_t__ gr_gid; } ;
typedef scalar_t__ gid_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char const*,char const*,char*,char*) ;
 int FUNC_5 (char*,char**) ;
 char* FUNC_6 (char*) ;
 struct group* FUNC_7 (char*) ;
 int FUNC_8 (int,char**,char*) ;
 struct passwd* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (unsigned char) ;
 scalar_t__* FUNC_11 (int) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,scalar_t__*) ;
 int FUNC_14 (scalar_t__) ;
 char* FUNC_15 (char**,char*) ;
 scalar_t__ FUNC_16 (char*,char**,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;

int
FUNC_19(int VAR_4, char *VAR_5[])
{
 struct group *VAR_6;
 struct passwd *VAR_7;
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 const char *VAR_13;
 gid_t VAR_14, *VAR_15;
 uid_t VAR_16;
 int VAR_17, VAR_18;
 long VAR_19;

 VAR_14 = 0;
 VAR_16 = 0;
 VAR_10 = VAR_11 = VAR_12 = ((void*)0);
 while ((VAR_17 = FUNC_8(VAR_4, VAR_5, "G:g:u:")) != -1) {
  switch(VAR_17) {
  case 'u':
   VAR_10 = VAR_2;
   if (*VAR_10 == '\0')
    FUNC_18();
   break;
  case 'g':
   VAR_11 = VAR_2;
   if (*VAR_11 == '\0')
    FUNC_18();
   break;
  case 'G':
   VAR_12 = VAR_2;
   if (*VAR_12 == '\0')
    FUNC_18();
   break;
  case '?':
  default:
   FUNC_18();
  }
 }
 VAR_4 -= VAR_3;
 VAR_5 += VAR_3;

 if (VAR_4 < 1)
  FUNC_18();

 if (VAR_11 != ((void*)0)) {
  if (FUNC_10((unsigned char)*VAR_11)) {
   VAR_14 = (gid_t)FUNC_16(VAR_11, &VAR_8, 0);
   if (*VAR_8 != '\0')
    goto getgroup;
  } else {
 getgroup:
   if ((VAR_6 = FUNC_7(VAR_11)) != ((void*)0))
    VAR_14 = VAR_6->gr_gid;
   else
    FUNC_3(1, "no such group `%s'", VAR_11);
  }
 }

 VAR_19 = FUNC_17(VAR_1) + 1;
 if ((VAR_15 = FUNC_11(sizeof(gid_t) * VAR_19)) == ((void*)0))
  FUNC_2(1, "malloc");
 for (VAR_18 = 0;
     (VAR_9 = FUNC_15(&VAR_12, ",")) != ((void*)0) && VAR_18 < VAR_19; ) {
  if (*VAR_9 == '\0')
   continue;

  if (FUNC_10((unsigned char)*VAR_9)) {
   VAR_15[VAR_18] = (gid_t)FUNC_16(VAR_9, &VAR_8, 0);
   if (*VAR_8 != '\0')
    goto getglist;
  } else {
 getglist:
   if ((VAR_6 = FUNC_7(VAR_9)) != ((void*)0))
    VAR_15[VAR_18] = VAR_6->gr_gid;
   else
    FUNC_3(1, "no such group `%s'", VAR_9);
  }
  VAR_18++;
 }
 if (VAR_9 != ((void*)0) && VAR_18 == VAR_19)
  FUNC_3(1, "too many supplementary groups provided");

 if (VAR_10 != ((void*)0)) {
  if (FUNC_10((unsigned char)*VAR_10)) {
   VAR_16 = (uid_t)FUNC_16(VAR_10, &VAR_8, 0);
   if (*VAR_8 != '\0')
    goto getuser;
  } else {
 getuser:
   if ((VAR_7 = FUNC_9(VAR_10)) != ((void*)0))
    VAR_16 = VAR_7->pw_uid;
   else
    FUNC_3(1, "no such user `%s'", VAR_10);
  }
 }

 if (FUNC_0(VAR_5[0]) == -1 || FUNC_1(".") == -1)
  FUNC_2(1, "%s", VAR_5[0]);

 if (VAR_18 && FUNC_13(VAR_18, VAR_15) == -1)
  FUNC_2(1, "setgroups");
 if (VAR_11 && FUNC_12(VAR_14) == -1)
  FUNC_2(1, "setgid");
 if (VAR_10 && FUNC_14(VAR_16) == -1)
  FUNC_2(1, "setuid");

 if (VAR_5[1]) {
  FUNC_5(VAR_5[1], &VAR_5[1]);
  FUNC_2(1, "%s", VAR_5[1]);
 }

 if (!(VAR_13 = FUNC_6("SHELL")))
  VAR_13 = VAR_0;
 FUNC_4(VAR_13, VAR_13, "-i", (char *)((void*)0));
 FUNC_2(1, "%s", VAR_13);

}
