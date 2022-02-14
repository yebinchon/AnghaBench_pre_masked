
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mkuz_conveyor {int * wthreads; void* results; void* wrk_queue; } ;
struct mkuz_cfg {int nworkers; } ;
struct cw_args {struct mkuz_conveyor* cvp; struct mkuz_cfg* cfp; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int ,void*) ;

struct mkuz_conveyor *
FUNC_4(struct mkuz_cfg *VAR_1)
{
    struct mkuz_conveyor *VAR_2;
    struct cw_args *VAR_3;
    int VAR_4, VAR_5;

    VAR_2 = FUNC_2(sizeof(struct mkuz_conveyor) +
      (sizeof(pthread_t) * VAR_1->nworkers));

    VAR_2->wrk_queue = FUNC_1(1);
    VAR_2->results = FUNC_1(1);

    for (VAR_4 = 0; VAR_4 < VAR_1->nworkers; VAR_4++) {
        VAR_3 = FUNC_2(sizeof(struct cw_args));
        VAR_3->cfp = VAR_1;
        VAR_3->cvp = VAR_2;
        VAR_5 = FUNC_3(&VAR_2->wthreads[VAR_4], ((void*)0), VAR_0, (void *)VAR_3);
        if (VAR_5 != 0) {
            FUNC_0(1, "mkuz_conveyor_ctor: pthread_create() failed");

        }
    }
    return (VAR_2);
}
