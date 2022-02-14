
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ type; char* str; } ;
typedef TYPE_3__ redisReply ;
struct TYPE_22__ {int flags; TYPE_2__* reader; int errstr; int err; int obuf; } ;
typedef TYPE_4__ redisContext ;
struct TYPE_23__ {int * fn; int * member_2; int * member_1; int * member_0; } ;
typedef TYPE_5__ redisCallback ;
struct TYPE_25__ {int * head; } ;
struct TYPE_24__ {TYPE_9__ replies; TYPE_4__ c; } ;
typedef TYPE_6__ redisAsyncContext ;
struct TYPE_20__ {TYPE_1__* fn; } ;
struct TYPE_19__ {int (* freeObject ) (void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,void*,TYPE_5__*) ;
 int FUNC_3 (TYPE_9__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*,void*) ;
 int FUNC_5 (TYPE_9__*,TYPE_5__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_4__*,void**) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int,char*,char*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;

void FUNC_13(redisAsyncContext *VAR_7) {
    redisContext *VAR_8 = &(VAR_7->c);
    redisCallback VAR_9 = {((void*)0), ((void*)0), ((void*)0)};
    void *VAR_10 = ((void*)0);
    int VAR_11;

    while((VAR_11 = FUNC_7(VAR_8,&VAR_10)) == VAR_4) {
        if (VAR_10 == ((void*)0)) {


            if (VAR_8->flags & VAR_0 && FUNC_8(VAR_8->obuf) == 0
                && VAR_7->replies.head == ((void*)0)) {
                FUNC_0(VAR_7);
                return;
            }


            if(VAR_8->flags & VAR_3) {
                FUNC_3(&VAR_7->replies,&VAR_9);
            }



            break;
        }



        if (FUNC_5(&VAR_7->replies,&VAR_9) != VAR_4) {
            if (((redisReply*)VAR_10)->type == VAR_5) {
                VAR_8->err = VAR_1;
                FUNC_9(VAR_8->errstr,sizeof(VAR_8->errstr),"%s",((redisReply*)VAR_10)->str);
                VAR_8->reader->fn->freeObject(VAR_10);
                FUNC_0(VAR_7);
                return;
            }

            FUNC_6((VAR_8->flags & VAR_6 || VAR_8->flags & VAR_3));
            if(VAR_8->flags & VAR_6)
                FUNC_2(VAR_7,VAR_10,&VAR_9);
        }

        if (VAR_9.fn != ((void*)0)) {
            FUNC_4(VAR_7,&VAR_9,VAR_10);
            VAR_8->reader->fn->freeObject(VAR_10);


            if (VAR_8->flags & VAR_2) {
                FUNC_1(VAR_7);
                return;
            }
        } else {




            VAR_8->reader->fn->freeObject(VAR_10);
        }
    }


    if (VAR_11 != VAR_4)
        FUNC_0(VAR_7);
}
