
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct group {scalar_t__ gr_gid; char** gr_mem; char* gr_passwd; } ;
typedef scalar_t__ gid_t ;
struct TYPE_2__ {scalar_t__ pw_gid; char* pw_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 () ;
 struct group* FUNC_5 (scalar_t__) ;
 struct group* FUNC_6 (char const*) ;
 int FUNC_7 (long,scalar_t__*) ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__*,int) ;
 scalar_t__* FUNC_11 (int) ;
 int FUNC_12 (scalar_t__*,scalar_t__*,int) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int,scalar_t__ const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_15 (char*,char*) ;
 long FUNC_16 (char const*,char**,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,...) ;

__attribute__((used)) static void
FUNC_20(const char *VAR_5)
{
 gid_t *VAR_6;
 long VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;
 gid_t VAR_12;
 struct group *VAR_13;
 char *VAR_14, *VAR_15, *VAR_16;
 char **VAR_17;

 VAR_12 = FUNC_4();


 if ((VAR_13 = FUNC_6(VAR_5)) == ((void*)0))
  if ((VAR_7 = FUNC_16(VAR_5, &VAR_14, 10)) <= 0 || *VAR_14 != '\0' ||
      (VAR_13 = FUNC_5((gid_t)VAR_7)) == ((void*)0) ) {
   FUNC_19("%s: bad group name", VAR_5);
   return;
  }





 VAR_9 = 0;
 if (VAR_3->pw_gid == VAR_13->gr_gid)
  VAR_9 = 1;
 for (VAR_17 = VAR_13->gr_mem; *VAR_17 != ((void*)0); VAR_17++)
  if (FUNC_15(*VAR_17, VAR_3->pw_name) == 0) {
   VAR_9 = 1;
   break;
  }
 if (!VAR_9 && *VAR_13->gr_passwd != '\0' && FUNC_9() != 0) {
  VAR_15 = FUNC_8("Password:");
  if (VAR_15 == ((void*)0))
   return;
  VAR_16 = FUNC_0(VAR_15, VAR_13->gr_passwd);
  if (VAR_16 == ((void*)0) || FUNC_15(VAR_13->gr_passwd, VAR_16) != 0) {
   FUNC_2(VAR_4, "Sorry\n");
   return;
  }
 }

 VAR_8 = FUNC_17(VAR_2) + 1;
 if ((VAR_6 = FUNC_11(sizeof(gid_t) * VAR_8)) == ((void*)0))
  FUNC_1(1, "malloc");
 if ((VAR_11 = FUNC_7(VAR_8, (gid_t *)VAR_6)) < 0) {
  FUNC_18("getgroups");
  goto end;
 }


 if (VAR_13->gr_gid != VAR_12 && FUNC_10(VAR_13->gr_gid, VAR_6, VAR_11)) {
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
   if (VAR_6[VAR_10] == VAR_13->gr_gid)
    break;
  VAR_11--;
  FUNC_12(&VAR_6[VAR_10], &VAR_6[VAR_10 + 1], (VAR_11 - VAR_10) * sizeof(gid_t));
  VAR_1;
  if (FUNC_14(VAR_11, (const gid_t *)VAR_6) < 0) {
   VAR_0;
   FUNC_18("setgroups");
   goto end;
  }
  VAR_0;
 }

 VAR_1;
 if (FUNC_13(VAR_13->gr_gid)) {
  VAR_0;
  FUNC_18("setgid");
  goto end;
 }
 VAR_0;
 VAR_6[0] = VAR_13->gr_gid;


 if (VAR_12 != VAR_13->gr_gid && !FUNC_10(VAR_12, VAR_6, VAR_11)) {
  if (VAR_11 == VAR_8)
   FUNC_19("too many groups");
  else {
   VAR_6[VAR_11++] = VAR_12;
   VAR_1;
   if (FUNC_14(VAR_11, (const gid_t *)VAR_6)) {
    VAR_0;
    FUNC_18("setgroups");
    goto end;
   }
   VAR_0;
  }
 }
end:
 FUNC_3(VAR_6);
}
