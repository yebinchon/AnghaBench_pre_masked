
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

void
FUNC_2(int VAR_3)
{
 if ((VAR_1 + 1) >= VAR_2) {
  VAR_2 += 64;
  if ((VAR_0 = FUNC_0(VAR_0, VAR_2)) == ((void*)0)) {
   FUNC_1("out of memory");
   VAR_1 = 0;
   VAR_2 = 0;
   return;
  }
 }

 VAR_0[VAR_1++] = (char)VAR_3;
 VAR_0[VAR_1] = 0;
}
