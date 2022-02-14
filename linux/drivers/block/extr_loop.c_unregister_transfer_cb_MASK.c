
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_func_table {int dummy; } ;
struct loop_device {struct loop_func_table* lo_encryption; } ;


 int VAR_0 ;
 int FUNC_0 (struct loop_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_1, void *VAR_2, void *VAR_3)
{
 struct loop_device *VAR_4 = VAR_2;
 struct loop_func_table *VAR_5 = VAR_3;

 FUNC_1(&VAR_0);
 if (VAR_4->lo_encryption == VAR_5)
  FUNC_0(VAR_4);
 FUNC_2(&VAR_0);
 return 0;
}
