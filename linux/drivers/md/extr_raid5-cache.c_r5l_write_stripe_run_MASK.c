
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {int io_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct r5l_log*) ;

void FUNC_3(struct r5l_log *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(&VAR_0->io_mutex);
 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->io_mutex);
}
