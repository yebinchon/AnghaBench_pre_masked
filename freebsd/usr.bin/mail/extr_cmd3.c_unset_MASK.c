
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct var {int v_value; int v_name; struct var* v_link; } ;


 int FUNC_0 (struct var*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 struct var* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 struct var** VAR_1 ;
 int FUNC_6 (int ) ;

int
FUNC_7(void *VAR_2)
{
 char **VAR_3 = VAR_2;
 struct var *VAR_4, *VAR_5;
 int VAR_6, VAR_7;
 char **VAR_8;

 VAR_6 = 0;
 for (VAR_8 = VAR_3; *VAR_8 != ((void*)0); VAR_8++) {
  if ((VAR_5 = FUNC_3(*VAR_8)) == ((void*)0)) {
   if (FUNC_1(*VAR_8))
    FUNC_5(*VAR_8);
   else if (!VAR_0) {
    FUNC_4("\"%s\": undefined variable\n", *VAR_8);
    VAR_6++;
   }
   continue;
  }
  VAR_7 = FUNC_2(*VAR_8);
  if (VAR_5 == VAR_1[VAR_7]) {
   VAR_1[VAR_7] = VAR_1[VAR_7]->v_link;
   FUNC_6(VAR_5->v_name);
   FUNC_6(VAR_5->v_value);
   (void)FUNC_0(VAR_5);
   continue;
  }
  for (VAR_4 = VAR_1[VAR_7]; VAR_4->v_link != VAR_5; VAR_4 = VAR_4->v_link)
   ;
  VAR_4->v_link = VAR_5->v_link;
  FUNC_6(VAR_5->v_name);
  FUNC_6(VAR_5->v_value);
  (void)FUNC_0(VAR_5);
 }
 return (VAR_6);
}
