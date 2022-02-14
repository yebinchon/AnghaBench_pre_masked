
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int * FUNC_2 () ;
 int * FUNC_3 (int) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_4(int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 > 0) {
  VAR_3 = VAR_2;
 } else {

  while (FUNC_2() != ((void*)0))
   VAR_3++;
  FUNC_0();
 }

 if ((VAR_1 = FUNC_3(sizeof(int) * VAR_3)) == ((void*)0))
  FUNC_1(1, "malloc");
 VAR_0 = VAR_3;
}
