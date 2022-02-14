
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ off_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (void*,size_t,int,int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (char*,...) ;

void *
FUNC_6(FILE *VAR_1, off_t VAR_2, size_t VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 void *VAR_6;

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_0);
 if (VAR_4 != 0) {
  FUNC_5("cannot seek to %jd", (uintmax_t)VAR_2);
  return (((void*)0));
 }

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 == ((void*)0)) {
  FUNC_5("cannot malloc %zd bytes of memory", VAR_3);
  return (((void*)0));
 }

 VAR_5 = FUNC_1(VAR_6, VAR_3, 1, VAR_1);
 if (VAR_5 != 1) {
  FUNC_2(VAR_6);
  if (FUNC_0(VAR_1) == 0)
   FUNC_5("fread");
  return (((void*)0));
 }

 return (VAR_6);
}
