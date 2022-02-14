
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int cpu_writers; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ttm_buffer_object*,int,int,int *) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ttm_buffer_object *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;





 VAR_2 = FUNC_2(VAR_0, 1, VAR_1, ((void*)0));
 if (FUNC_5(VAR_2 != 0))
  return VAR_2;
 VAR_2 = FUNC_4(VAR_0, 1, VAR_1);
 if (FUNC_1(VAR_2 == 0))
  FUNC_0(&VAR_0->cpu_writers);
 FUNC_3(VAR_0);
 return VAR_2;
}
