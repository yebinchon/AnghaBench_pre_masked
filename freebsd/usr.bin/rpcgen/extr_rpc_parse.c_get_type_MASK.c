
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kind; char* str; } ;
typedef TYPE_1__ token ;
typedef int defkind ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int const,TYPE_1__*) ;
 int FUNC_4 (char const**) ;

__attribute__((used)) static void
FUNC_5(const char **VAR_2, const char **VAR_3, defkind VAR_4)
{
 token VAR_5;

 *VAR_2 = ((void*)0);
 FUNC_1(&VAR_5);
 switch (VAR_5.kind) {
 case 138:
  *VAR_3 = VAR_5.str;
  break;
 case 131:
 case 141:
 case 130:
  *VAR_2 = VAR_5.str;
  FUNC_3(138, &VAR_5);
  *VAR_3 = VAR_5.str;
  break;
 case 129:
  FUNC_4(VAR_3);
  break;
 case 133:
  *VAR_3 = "short";
  (void) FUNC_2(137, &VAR_5);
  break;
 case 136:
  *VAR_3 = "long";
  (void) FUNC_2(137, &VAR_5);
  break;
 case 139:
  *VAR_3 = "int64_t";
  (void) FUNC_2(137, &VAR_5);
  break;

 case 128:
  if (VAR_4 != VAR_1 && VAR_4 != VAR_0) {
   FUNC_0("voids allowed only inside union and program definitions with one argument");
  }
  *VAR_3 = VAR_5.str;
  break;
 case 132:
 case 135:
 case 143:
 case 137:
 case 140:
 case 142:
 case 144:
 case 134:
  *VAR_3 = VAR_5.str;
  break;
 default:
  FUNC_0("expected type specifier");
 }
}
