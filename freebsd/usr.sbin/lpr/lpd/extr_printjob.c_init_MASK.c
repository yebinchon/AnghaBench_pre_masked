
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int page_plength; int page_pwidth; int page_length; int page_width; } ;


 int VAR_0 ;
 char* FUNC_0 (struct printer*) ;
 int FUNC_1 (char*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct printer *VAR_5)
{
 char *VAR_6;

 FUNC_2(&VAR_4[2], "%ld", VAR_5->page_width);
 FUNC_2(&VAR_1[2], "%ld", VAR_5->page_length);
 FUNC_2(&VAR_3[2], "%ld", VAR_5->page_pwidth);
 FUNC_2(&VAR_2[2], "%ld", VAR_5->page_plength);
 if ((VAR_6 = FUNC_0(VAR_5)) != ((void*)0)) {
  FUNC_3(VAR_0, "%s", VAR_6);
  FUNC_1(VAR_6);
 }
}
