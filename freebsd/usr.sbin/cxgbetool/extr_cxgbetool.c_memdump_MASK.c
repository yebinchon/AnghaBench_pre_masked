
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint32_t ;


 int VAR_0 ;
 int FUNC_0 (long,long,int ) ;
 int VAR_1 ;
 char* FUNC_1 (char const*,long*,int *) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, const char *VAR_3[])
{
 char *VAR_4;
 long VAR_5;
 uint32_t VAR_6, VAR_7;

 if (VAR_2 != 2) {
  FUNC_2("incorrect number of arguments.");
  return (VAR_0);
 }

 VAR_4 = FUNC_1(VAR_3[0], &VAR_5, ((void*)0));
 if (*VAR_4) {
  FUNC_2("invalid address \"%s\"", VAR_3[0]);
  return (VAR_0);
 }
 VAR_6 = VAR_5;

 VAR_4 = FUNC_1(VAR_3[1], &VAR_5, ((void*)0));
 if (*VAR_4) {
  FUNC_2("memdump: invalid length \"%s\"", VAR_3[1]);
  return (VAR_0);
 }
 VAR_7 = VAR_5;

 return (FUNC_0(VAR_6, VAR_7, VAR_1));
}
