
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_func_table {unsigned int number; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct loop_func_table** VAR_2 ;

int FUNC_0(struct loop_func_table *VAR_3)
{
 unsigned int VAR_4 = VAR_3->number;

 if (VAR_4 >= VAR_1 || VAR_2[VAR_4])
  return -VAR_0;
 VAR_2[VAR_4] = VAR_3;
 return 0;
}
