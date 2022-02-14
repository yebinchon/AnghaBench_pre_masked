
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_finished_fn ;
typedef int start_failure_fn ;
typedef int get_next_task_fn ;


 int FUNC_0 () ;
 int FUNC_1 (int,int ,int ,int ,void*) ;
 int FUNC_2 (char const*,char const*,int *,char*,int) ;
 int FUNC_3 (char const*,char const*,int *) ;

int FUNC_4(int VAR_0, get_next_task_fn VAR_1,
          start_failure_fn VAR_2,
          task_finished_fn VAR_3, void *VAR_4,
          const char *VAR_5, const char *VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_5, VAR_6, ((void*)0), "max:%d",
       ((VAR_0 < 1) ? FUNC_0() : VAR_0));

 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4);

 FUNC_3(VAR_5, VAR_6, ((void*)0));

 return VAR_7;
}
