
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct userconf {int dummy; } ;
struct group {char* member_0; char* member_1; int member_2; char* gr_passwd; scalar_t__ gr_gid; int gr_name; int * gr_mem; int * member_3; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct group*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (struct userconf*,int ) ;
 int FUNC_4 (struct group**,char*) ;
 int FUNC_5 (struct group*,int,int,int) ;
 int FUNC_6 (struct group*,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct userconf*,int ,int ,char*,int ,int ) ;

int
FUNC_9(struct userconf *VAR_4, char *VAR_5, gid_t VAR_6, char *VAR_7, int VAR_8,
    bool VAR_9, bool VAR_10, bool VAR_11)
{
 struct group *VAR_12;
 int VAR_13;

 struct group VAR_14 = {
  "nogroup",
  "*",
  -1,
  ((void*)0)
 };

 VAR_12 = &VAR_14;
 VAR_12->gr_name = FUNC_7(VAR_5, 0);
 VAR_12->gr_passwd = "*";
 VAR_12->gr_gid = FUNC_3(VAR_4, VAR_6);
 VAR_12->gr_mem = ((void*)0);







 FUNC_5(VAR_12, 0, VAR_8, VAR_11);
 FUNC_4(&VAR_12, VAR_7);
 if (VAR_9)
  return (FUNC_6(VAR_12, VAR_10));

 if ((VAR_13 = FUNC_0(VAR_12)) != 0) {
  if (VAR_13 == -1)
   FUNC_2(VAR_1, "group '%s' already exists",
       VAR_12->gr_name);
  else
   FUNC_1(VAR_1, "group update");
 }

 FUNC_8(VAR_4, VAR_2, VAR_3, "%s(%ju)", VAR_12->gr_name,
     (uintmax_t)VAR_12->gr_gid);

 return (VAR_0);
}
