
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiEditableCombobox ;


 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(uiEditableCombobox *VAR_0, void *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 FUNC_0("%s combobox changed to %s\n",
  (char *) VAR_1,
  VAR_2);
 FUNC_2(VAR_2);
}
