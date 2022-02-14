
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int shutdown; int thread_count; int * threads; int lock; int notify; } ;
typedef TYPE_1__ IjkThreadPoolContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__**) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

int FUNC_5(IjkThreadPoolContext *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7 = 0;

    if(VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    if(FUNC_3(&(VAR_4->lock)) != 0) {
        return VAR_1;
    }

    do {

        if(VAR_4->shutdown) {
            VAR_7 = VAR_2;
            break;
        }

        VAR_4->shutdown = VAR_5;


        if((FUNC_1(&(VAR_4->notify)) != 0) ||
           (FUNC_4(&(VAR_4->lock)) != 0)) {
            VAR_7 = VAR_1;
            break;
        }


        for(VAR_6 = 0; VAR_6 < VAR_4->thread_count; VAR_6++) {
            if(FUNC_2(VAR_4->threads[VAR_6], ((void*)0)) != 0) {
                VAR_7 = VAR_3;
            }
        }
    } while(0);


    if(!VAR_7) {
        return FUNC_0(&VAR_4);
    }
    return VAR_7;
}
