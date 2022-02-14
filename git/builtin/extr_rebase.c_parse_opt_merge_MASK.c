
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rebase_options {int type; } ;
struct option {struct rebase_options* value; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct rebase_options*) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 struct rebase_options *VAR_4 = VAR_1->value;

 FUNC_1(VAR_3);
 FUNC_0(VAR_2);

 if (!FUNC_2(VAR_4))
  VAR_4->type = VAR_0;

 return 0;
}
