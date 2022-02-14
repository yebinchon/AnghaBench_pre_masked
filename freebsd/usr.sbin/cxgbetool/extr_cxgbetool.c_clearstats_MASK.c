
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,long*) ;
 char* FUNC_1 (char const*,long*,int *) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, const char *VAR_3[])
{
 char *VAR_4;
 long VAR_5;
 uint32_t VAR_6;

 if (VAR_2 != 1) {
  FUNC_2("incorrect number of arguments.");
  return (VAR_1);
 }

 VAR_4 = FUNC_1(VAR_3[0], &VAR_5, ((void*)0));
 if (*VAR_4) {
  FUNC_2("invalid port id \"%s\"", VAR_3[0]);
  return (VAR_1);
 }
 VAR_6 = VAR_5;

 return FUNC_0(VAR_0, &VAR_6);
}
