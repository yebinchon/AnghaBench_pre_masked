
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; char* str; } ;
typedef TYPE_1__ token ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 TYPE_1__* VAR_2 ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(char **VAR_3, token *VAR_4)
{
 int VAR_5;
 token *VAR_6;
 char *VAR_7, *VAR_8;

 VAR_7 = *VAR_3;
 for (VAR_6 = VAR_2; VAR_6->kind != VAR_0; VAR_6++) {
  VAR_5 = FUNC_2(VAR_6->str);
  if (FUNC_3(VAR_7, VAR_6->str, VAR_5) == 0) {
   if (!FUNC_0(VAR_7[VAR_5]) && VAR_7[VAR_5] != '_') {
    VAR_4->kind = VAR_6->kind;
    VAR_4->str = VAR_6->str;
    *VAR_3 = VAR_7 + VAR_5;
    return;
   }
  }
 }
 VAR_4->kind = VAR_1;
 for (VAR_5 = 0; FUNC_0(VAR_7[VAR_5]) || VAR_7[VAR_5] == '_'; VAR_5++);
 VAR_8 = FUNC_4(VAR_5 + 1);
 (void) FUNC_1(VAR_8, VAR_7, VAR_5 + 1);
 VAR_4->str = VAR_8;
 *VAR_3 = VAR_7 + VAR_5;
}
