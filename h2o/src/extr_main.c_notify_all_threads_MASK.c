
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int size; } ;
struct TYPE_6__ {TYPE_2__* threads; TYPE_1__ thread_map; } ;
struct TYPE_5__ {int server_notifications; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(void)
{
    unsigned VAR_1;
    for (VAR_1 = 0; VAR_1 != VAR_0.thread_map.size; ++VAR_1)
        FUNC_0(&VAR_0.threads[VAR_1].server_notifications, ((void*)0));
}
