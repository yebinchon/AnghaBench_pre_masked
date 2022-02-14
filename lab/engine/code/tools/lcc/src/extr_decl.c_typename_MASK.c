
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Type ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 char VAR_1 ;
 int FUNC_3 (char*) ;

Type FUNC_4(void) {
 Type VAR_2 = FUNC_2(((void*)0));

 if (VAR_1 == '*' || VAR_1 == '(' || VAR_1 == '[') {
  VAR_2 = FUNC_0(VAR_2, ((void*)0), ((void*)0), 1);
  if (VAR_0 >= 1 && !FUNC_1(VAR_2))
   FUNC_3("missing prototype\n");
 }
 return VAR_2;
}
