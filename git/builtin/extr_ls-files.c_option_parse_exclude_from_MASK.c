
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct dir_struct* value; } ;
struct dir_struct {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dir_struct*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(const struct option *VAR_1,
         const char *VAR_2, int VAR_3)
{
 struct dir_struct *VAR_4 = VAR_1->value;

 FUNC_0(VAR_3);

 VAR_0 = 1;
 FUNC_1(VAR_4, VAR_2);

 return 0;
}
