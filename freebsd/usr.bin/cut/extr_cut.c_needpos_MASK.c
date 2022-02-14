
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int ,size_t) ;
 int * VAR_0 ;
 int * FUNC_2 (int *,size_t) ;

__attribute__((used)) static void
FUNC_3(size_t VAR_1)
{
 static size_t VAR_2;
 size_t VAR_3;


 if (VAR_1 > VAR_2) {
  VAR_3 = VAR_2;
  if (VAR_2 == 0)
   VAR_2 = VAR_1;
  while (VAR_1 > VAR_2)
   VAR_2 *= 2;
  if ((VAR_0 = FUNC_2(VAR_0, VAR_2)) == ((void*)0))
   FUNC_0(1, "realloc");
  FUNC_1((char *)VAR_0 + VAR_3, 0, VAR_2 - VAR_3);
 }
}
