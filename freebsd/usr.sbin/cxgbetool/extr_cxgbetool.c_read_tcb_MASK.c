
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (long long,unsigned int,int ) ;
 int FUNC_1 (int ,int,long long*) ;
 int VAR_3 ;
 char* FUNC_2 (char const*,long*,int *) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, const char *VAR_5[])
{
 char *VAR_6;
 long VAR_7;
 long long VAR_8;
 unsigned int VAR_9;
 uint32_t VAR_10;
 int VAR_11;

 if (VAR_4 != 1) {
  FUNC_3("incorrect number of arguments.");
  return (VAR_1);
 }

 VAR_6 = FUNC_2(VAR_5[0], &VAR_7, ((void*)0));
 if (*VAR_6) {
  FUNC_3("invalid tid \"%s\"", VAR_5[0]);
  return (VAR_1);
 }
 VAR_9 = VAR_7;

 VAR_11 = FUNC_1(VAR_0, 4, &VAR_8);
 if (VAR_11 != 0)
  return (VAR_11);

 VAR_10 = VAR_8 + VAR_9 * VAR_2;

 return (FUNC_0(VAR_10, VAR_2, VAR_3));
}
