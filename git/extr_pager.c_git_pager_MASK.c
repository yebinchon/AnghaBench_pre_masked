
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 char* VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char const*,char*) ;

const char *FUNC_3(int VAR_3)
{
 const char *VAR_4;

 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_0("GIT_PAGER");
 if (!VAR_4) {
  if (!VAR_2)
   FUNC_1(VAR_1, ((void*)0));
  VAR_4 = VAR_2;
 }
 if (!VAR_4)
  VAR_4 = FUNC_0("PAGER");
 if (!VAR_4)
  VAR_4 = VAR_0;
 if (!*VAR_4 || !FUNC_2(VAR_4, "cat"))
  VAR_4 = ((void*)0);

 return VAR_4;
}
