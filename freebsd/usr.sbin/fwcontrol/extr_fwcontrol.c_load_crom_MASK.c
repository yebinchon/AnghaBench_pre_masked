
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int ,int *,int *,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1, u_int32_t *VAR_2)
{
 FILE *VAR_3;
 int VAR_4=1024, VAR_5;

 if ((VAR_3 = FUNC_2(VAR_1, "r")) == ((void*)0))
   FUNC_0(1, "load_crom %s", VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_4/(4*8); VAR_5 ++) {
  FUNC_3(VAR_3, VAR_0,
   VAR_2, VAR_2+1, VAR_2+2, VAR_2+3, VAR_2+4, VAR_2+5, VAR_2+6, VAR_2+7);
  VAR_2 += 8;
 }
 FUNC_1(VAR_3);
}
