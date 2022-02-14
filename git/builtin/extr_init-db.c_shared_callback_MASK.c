
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 FUNC_0(VAR_3);
 *((int *) VAR_1->value) = (VAR_2) ? FUNC_1("arg", VAR_2) : VAR_0;
 return 0;
}
