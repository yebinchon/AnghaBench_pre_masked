
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* string; int modified; int value; } ;
typedef TYPE_1__ libvar_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

void FUNC_7(const char *VAR_1, const char *VAR_2)
{
 libvar_t *VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
 {
  FUNC_0(VAR_3->string);
 }
 else
 {
  VAR_3 = FUNC_2(VAR_1);
 }

 VAR_3->string = (char *) FUNC_1(FUNC_6(VAR_2) + 1);
 FUNC_5(VAR_3->string, VAR_2);

 VAR_3->value = FUNC_4(VAR_3->string);

 VAR_3->modified = VAR_0;
}
