
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int total; } ;
struct option {scalar_t__ value; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 FUNC_1(VAR_3);
 FUNC_0(VAR_2);
 ((struct rev_info *)VAR_1->value)->total = -1;
 VAR_0 = 1;
 return 0;
}
