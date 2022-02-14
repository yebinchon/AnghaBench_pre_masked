
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int sds ;
struct TYPE_16__ {scalar_t__ type; int elements; TYPE_1__** element; } ;
typedef TYPE_3__ redisReply ;
struct TYPE_17__ {int flags; } ;
typedef TYPE_4__ redisContext ;
struct TYPE_18__ {scalar_t__ pending_subs; } ;
typedef TYPE_5__ redisCallback ;
struct TYPE_15__ {int invalid; int * patterns; int * channels; } ;
struct TYPE_19__ {TYPE_2__ sub; TYPE_4__ c; } ;
typedef TYPE_6__ redisAsyncContext ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_14__ {scalar_t__ type; char* str; scalar_t__ integer; int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;
 TYPE_5__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char FUNC_10 (char) ;

__attribute__((used)) static int FUNC_11(redisAsyncContext *VAR_5, redisReply *VAR_6, redisCallback *VAR_7) {
    redisContext *VAR_8 = &(VAR_5->c);
    dict *VAR_9;
    redisCallback *VAR_10;
    dictEntry *VAR_11;
    int VAR_12;
    char *VAR_13;
    sds VAR_14;



    if (VAR_6->type == VAR_1) {
        FUNC_1(VAR_6->elements >= 2);
        FUNC_1(VAR_6->element[0]->type == VAR_3);
        VAR_13 = VAR_6->element[0]->str;
        VAR_12 = (FUNC_10(VAR_13[0]) == 'p') ? 1 : 0;

        if (VAR_12)
            VAR_9 = VAR_5->sub.patterns;
        else
            VAR_9 = VAR_5->sub.channels;


        FUNC_1(VAR_6->element[1]->type == VAR_3);
        VAR_14 = FUNC_8(VAR_6->element[1]->str,VAR_6->element[1]->len);
        VAR_11 = FUNC_3(VAR_9,VAR_14);
        if (VAR_11 != ((void*)0)) {
            VAR_10 = FUNC_4(VAR_11);


            if (FUNC_9(VAR_13+VAR_12,"subscribe") == 0) {
                VAR_10->pending_subs -= 1;
            }

            FUNC_6(VAR_7,VAR_10,sizeof(*VAR_7));


            if (FUNC_9(VAR_13+VAR_12,"unsubscribe") == 0) {
                if (VAR_10->pending_subs == 0)
                    FUNC_2(VAR_9,VAR_14);



                FUNC_1(VAR_6->element[2]->type == VAR_2);


                if (VAR_6->element[2]->integer == 0
                    && FUNC_5(VAR_5->sub.channels) == 0
                    && FUNC_5(VAR_5->sub.patterns) == 0)
                    VAR_8->flags &= ~VAR_4;
            }
        }
        FUNC_7(VAR_14);
    } else {

        FUNC_0(&VAR_5->sub.invalid,VAR_7);
    }
    return VAR_0;
}
