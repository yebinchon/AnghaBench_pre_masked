
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {size_t ridx; void* reply; int privdata; TYPE_3__* rstack; TYPE_1__* fn; } ;
typedef TYPE_2__ redisReader ;
struct TYPE_13__ {scalar_t__ type; long long elements; int privdata; struct TYPE_13__* parent; int * obj; scalar_t__ idx; } ;
typedef TYPE_3__ redisReadTask ;
struct TYPE_11__ {void* (* createArray ) (TYPE_3__*,long long) ;void* (* createNil ) (TYPE_3__*) ;} ;


 long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 long long VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 char* FUNC_3 (TYPE_2__*,int*) ;
 int FUNC_4 (char*,int,long long*) ;
 void* FUNC_5 (TYPE_3__*) ;
 void* FUNC_6 (TYPE_3__*,long long) ;

__attribute__((used)) static int FUNC_7(redisReader *VAR_7) {
    redisReadTask *VAR_8 = &(VAR_7->rstack[VAR_7->ridx]);
    void *VAR_9;
    char *VAR_10;
    long long VAR_11;
    int VAR_12 = 0, VAR_13;


    if (VAR_7->ridx == 8) {
        FUNC_0(VAR_7,VAR_2,
            "No support for nested multi bulk replies with depth > 7");
        return VAR_1;
    }

    if ((VAR_10 = FUNC_3(VAR_7,&VAR_13)) != ((void*)0)) {
        if (FUNC_4(VAR_10, VAR_13, &VAR_11) == VAR_1) {
            FUNC_0(VAR_7,VAR_2,
                    "Bad multi-bulk length");
            return VAR_1;
        }

        VAR_12 = (VAR_7->ridx == 0);

        if (VAR_11 < -1 || (VAR_0 > VAR_6 && VAR_11 > VAR_6)) {
            FUNC_0(VAR_7,VAR_2,
                    "Multi-bulk length out of range");
            return VAR_1;
        }

        if (VAR_11 == -1) {
            if (VAR_7->fn && VAR_7->fn->createNil)
                VAR_9 = VAR_7->fn->createNil(VAR_8);
            else
                VAR_9 = (void*)VAR_5;

            if (VAR_9 == ((void*)0)) {
                FUNC_1(VAR_7);
                return VAR_1;
            }

            FUNC_2(VAR_7);
        } else {
            if (VAR_8->type == VAR_4) VAR_11 *= 2;

            if (VAR_7->fn && VAR_7->fn->createArray)
                VAR_9 = VAR_7->fn->createArray(VAR_8,VAR_11);
            else
                VAR_9 = (void*)(long)VAR_8->type;

            if (VAR_9 == ((void*)0)) {
                FUNC_1(VAR_7);
                return VAR_1;
            }


            if (VAR_11 > 0) {
                VAR_8->elements = VAR_11;
                VAR_8->obj = VAR_9;
                VAR_7->ridx++;
                VAR_7->rstack[VAR_7->ridx].type = -1;
                VAR_7->rstack[VAR_7->ridx].elements = -1;
                VAR_7->rstack[VAR_7->ridx].idx = 0;
                VAR_7->rstack[VAR_7->ridx].obj = ((void*)0);
                VAR_7->rstack[VAR_7->ridx].parent = VAR_8;
                VAR_7->rstack[VAR_7->ridx].privdata = VAR_7->privdata;
            } else {
                FUNC_2(VAR_7);
            }
        }


        if (VAR_12) VAR_7->reply = VAR_9;
        return VAR_3;
    }

    return VAR_1;
}
