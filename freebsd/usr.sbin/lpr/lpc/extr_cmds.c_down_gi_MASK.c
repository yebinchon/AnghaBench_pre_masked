
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (int,char**) ;
 int * VAR_0 ;
 char* VAR_1 ;
 int * FUNC_1 (char*) ;

void
FUNC_2(int VAR_2, char *VAR_3[])
{


 if (VAR_0 != ((void*)0))
  return;





 if (VAR_2 == 1) {
  VAR_0 = FUNC_1("printing disabled\n");
  return;
 }







 VAR_2--;
 VAR_3++;
 VAR_0 = FUNC_0(VAR_2, VAR_3);
 for (; VAR_2 > 0; VAR_2--, VAR_3++)
  *VAR_3 = VAR_1;
}
