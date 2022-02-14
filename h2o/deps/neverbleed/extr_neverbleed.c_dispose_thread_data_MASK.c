
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_neverbleed_thread_data_t {int fd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(void *VAR_0)
{
    struct st_neverbleed_thread_data_t *VAR_1 = VAR_0;
    FUNC_0(VAR_1->fd >= 0);
    FUNC_1(VAR_1->fd);
    VAR_1->fd = -1;
}
