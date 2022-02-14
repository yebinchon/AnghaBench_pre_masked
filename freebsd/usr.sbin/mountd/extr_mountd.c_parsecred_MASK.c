
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xucred {int cr_uid; int* cr_groups; int cr_ngroups; int cr_version; } ;
struct passwd {int pw_uid; int pw_gid; int pw_name; } ;
struct group {int gr_gid; } ;
typedef void* gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*) ;
 struct group* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,void**,int*) ;
 struct passwd* FUNC_3 (char*) ;
 struct passwd* FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (char) ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_8(char *VAR_3, struct xucred *VAR_4)
{
 char *VAR_5;
 int VAR_6;
 char *VAR_7;
 struct passwd *VAR_8;
 struct group *VAR_9;
 gid_t VAR_10[VAR_2 + 1];
 int VAR_11;

 VAR_4->cr_version = VAR_1;



 VAR_4->cr_uid = 65534;
 VAR_4->cr_groups[0] = 65533;
 VAR_4->cr_ngroups = 1;



 VAR_7 = VAR_3;
 VAR_5 = FUNC_6(&VAR_7, ":");

 if (FUNC_5(*VAR_5) || *VAR_5 == '-')
  VAR_8 = FUNC_4(FUNC_0(VAR_5));
 else
  VAR_8 = FUNC_3(VAR_5);



 if (VAR_7 == ((void*)0)) {
  if (VAR_8 == ((void*)0)) {
   FUNC_7(VAR_0, "unknown user: %s", VAR_5);
   return;
  }
  VAR_4->cr_uid = VAR_8->pw_uid;
  VAR_11 = VAR_2 + 1;
  if (FUNC_2(VAR_8->pw_name, VAR_8->pw_gid, VAR_10, &VAR_11)) {
   FUNC_7(VAR_0, "too many groups");
   VAR_11 = VAR_2 + 1;
  }




  VAR_4->cr_ngroups = VAR_11 - 1;
  VAR_4->cr_groups[0] = VAR_10[0];
  for (VAR_6 = 2; VAR_6 < VAR_11; VAR_6++)
   VAR_4->cr_groups[VAR_6 - 1] = VAR_10[VAR_6];
  return;
 }




 if (VAR_8 != ((void*)0))
  VAR_4->cr_uid = VAR_8->pw_uid;
 else if (FUNC_5(*VAR_5) || *VAR_5 == '-')
  VAR_4->cr_uid = FUNC_0(VAR_5);
 else {
  FUNC_7(VAR_0, "unknown user: %s", VAR_5);
  return;
 }
 VAR_4->cr_ngroups = 0;
 while (VAR_7 != ((void*)0) && *VAR_7 != '\0' && VAR_4->cr_ngroups < VAR_2) {
  VAR_5 = FUNC_6(&VAR_7, ":");
  if (FUNC_5(*VAR_5) || *VAR_5 == '-') {
   VAR_4->cr_groups[VAR_4->cr_ngroups++] = FUNC_0(VAR_5);
  } else {
   if ((VAR_9 = FUNC_1(VAR_5)) == ((void*)0)) {
    FUNC_7(VAR_0, "unknown group: %s", VAR_5);
    continue;
   }
   VAR_4->cr_groups[VAR_4->cr_ngroups++] = VAR_9->gr_gid;
  }
 }
 if (VAR_7 != ((void*)0) && *VAR_7 != '\0' && VAR_4->cr_ngroups == VAR_2)
  FUNC_7(VAR_0, "too many groups");
}
