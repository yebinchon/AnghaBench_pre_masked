
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (char*,size_t,int const*) ;

int FUNC_2(
 const char *VAR_3, const git_oid *VAR_4, size_t VAR_5)
{
 if (VAR_4 != ((void*)0)) {
  char VAR_6[VAR_2 + 1];
  FUNC_1(VAR_6, VAR_5+1, VAR_4);
  FUNC_0(VAR_1, "object not found - %s (%.*s)",
   VAR_3, (int) VAR_5, VAR_6);
 } else
  FUNC_0(VAR_1, "object not found - %s", VAR_3);

 return VAR_0;
}
