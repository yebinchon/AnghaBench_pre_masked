
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kind; } ;
typedef TYPE_1__ token ;







 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(const char **VAR_0)
{
 token VAR_1;

 FUNC_1(&VAR_1);
 switch (VAR_1.kind) {
 case 132:
  FUNC_0(&VAR_1);
  *VAR_0 = "u_char";
  break;
 case 128:
  FUNC_0(&VAR_1);
  *VAR_0 = "u_short";
  (void) FUNC_2(130, &VAR_1);
  break;
 case 129:
  FUNC_0(&VAR_1);
  *VAR_0 = "u_long";
  (void) FUNC_2(130, &VAR_1);
  break;
 case 131:
  FUNC_0(&VAR_1);
  *VAR_0 = "u_int64_t";

  (void) FUNC_2(130, &VAR_1);
  break;
 case 130:
  FUNC_0(&VAR_1);
  *VAR_0 = "u_int";
  break;
 default:
  *VAR_0 = "u_int";
  break;
 }
}
