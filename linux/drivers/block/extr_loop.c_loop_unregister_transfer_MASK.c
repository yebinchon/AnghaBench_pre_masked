
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_func_table {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int *,struct loop_func_table*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct loop_func_table** VAR_4 ;

int FUNC_1(int VAR_5)
{
 unsigned int VAR_6 = VAR_5;
 struct loop_func_table *VAR_7;

 if (VAR_6 == 0 || VAR_6 >= VAR_1 || (VAR_7 = VAR_4[VAR_6]) == ((void*)0))
  return -VAR_0;

 VAR_4[VAR_6] = ((void*)0);
 FUNC_0(&VAR_2, &VAR_3, VAR_7);
 return 0;
}
