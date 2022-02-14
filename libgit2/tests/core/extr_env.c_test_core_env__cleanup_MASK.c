
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int ** VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *) ;
 char** VAR_3 ;
 int FUNC_3 (char*) ;

void FUNC_4(void)
{
 int VAR_4;
 char **VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  FUNC_1(VAR_2[VAR_4], VAR_1[VAR_4]);
  FUNC_2(VAR_1[VAR_4]);
  VAR_1[VAR_4] = ((void*)0);
 }




 for (VAR_5 = VAR_3; *VAR_5 != ((void*)0); VAR_5++) {
  if (**VAR_5 != '\0')
   (void)FUNC_3(*VAR_5);
 }

 FUNC_0();
}
