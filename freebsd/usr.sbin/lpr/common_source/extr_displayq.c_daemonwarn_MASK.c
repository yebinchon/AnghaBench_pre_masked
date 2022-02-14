
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {scalar_t__ remote; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(const struct printer *VAR_2)
{
 if (VAR_2->remote)
  FUNC_0("%s: ", VAR_1);
 FUNC_1("Warning: no daemon present");
 VAR_0[0] = '\0';
}
