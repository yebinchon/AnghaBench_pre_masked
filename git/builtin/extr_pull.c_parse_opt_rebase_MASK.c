
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int* value; } ;
typedef enum rebase_type { ____Placeholder_rebase_type } rebase_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,int ) ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_3, const char *VAR_4, int VAR_5)
{
 enum rebase_type *VAR_6 = VAR_3->value;

 if (VAR_4)
  *VAR_6 = FUNC_0("--rebase", VAR_4, 0);
 else
  *VAR_6 = VAR_5 ? VAR_0 : VAR_2;
 return *VAR_6 == VAR_1 ? -1 : 0;
}
