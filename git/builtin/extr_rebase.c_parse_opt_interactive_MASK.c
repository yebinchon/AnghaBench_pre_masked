
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rebase_options {int flags; int type; } ;
struct option {struct rebase_options* value; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_2, const char *VAR_3,
     int VAR_4)
{
 struct rebase_options *VAR_5 = VAR_2->value;

 FUNC_1(VAR_4);
 FUNC_0(VAR_3);

 VAR_5->type = VAR_0;
 VAR_5->flags |= VAR_1;

 return 0;
}
