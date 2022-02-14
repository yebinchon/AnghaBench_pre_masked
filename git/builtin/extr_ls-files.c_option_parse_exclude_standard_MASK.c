
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct dir_struct* value; } ;
struct dir_struct {int dummy; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct dir_struct*) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_1,
      const char *VAR_2, int VAR_3)
{
 struct dir_struct *VAR_4 = VAR_1->value;

 FUNC_1(VAR_3);
 FUNC_0(VAR_2);

 VAR_0 = 1;
 FUNC_2(VAR_4);

 return 0;
}
