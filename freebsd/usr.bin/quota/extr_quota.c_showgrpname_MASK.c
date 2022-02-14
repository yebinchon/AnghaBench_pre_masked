
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_gid; } ;


 int VAR_0 ;
 struct group* FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1)
{
 struct group *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0)) {
  FUNC_2("%s: unknown group", VAR_1);
  return(1);
 }
 return(FUNC_1(VAR_0, VAR_2->gr_gid, VAR_1));
}
