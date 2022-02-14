
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,int ,int *,int*) ;
 char* FUNC_3 (char const*,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 const char *VAR_6 = FUNC_2(VAR_1, 0, ((void*)0), &VAR_5);

 if (!VAR_6)
  FUNC_0("No such ref: %s", VAR_1);
 else if (!(VAR_5 & VAR_0)) {
  if (!VAR_2)
   FUNC_0("ref %s is not a symbolic ref", VAR_1);
  else
   return 1;
 }
 if (VAR_4) {
  if (VAR_3)
   VAR_6 = FUNC_3(VAR_6, 0);
  FUNC_1(VAR_6);
 }
 return 0;
}
