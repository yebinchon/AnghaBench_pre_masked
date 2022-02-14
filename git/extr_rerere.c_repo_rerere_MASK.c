
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct repository {int dummy; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (struct repository*,struct string_list*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct repository*,struct string_list*,int) ;

int FUNC_3(struct repository *VAR_1, int VAR_2)
{
 struct string_list VAR_3 = VAR_0;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_1, &VAR_3, VAR_2);
 if (VAR_4 < 0)
  return 0;
 VAR_5 = FUNC_0(VAR_1, &VAR_3, VAR_4);
 FUNC_1();
 return VAR_5;
}
