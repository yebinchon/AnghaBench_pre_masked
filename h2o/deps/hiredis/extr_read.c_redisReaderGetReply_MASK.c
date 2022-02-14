
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; int ridx; int pos; int * reply; int buf; scalar_t__ err; int privdata; TYPE_1__* rstack; } ;
typedef TYPE_2__ redisReader ;
struct TYPE_5__ {int type; int elements; int idx; int privdata; int * parent; int * obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;

int FUNC_3(redisReader *VAR_2, void **VAR_3) {

    if (VAR_3 != ((void*)0))
        *VAR_3 = ((void*)0);


    if (VAR_2->err)
        return VAR_0;


    if (VAR_2->len == 0)
        return VAR_1;


    if (VAR_2->ridx == -1) {
        VAR_2->rstack[0].type = -1;
        VAR_2->rstack[0].elements = -1;
        VAR_2->rstack[0].idx = -1;
        VAR_2->rstack[0].obj = ((void*)0);
        VAR_2->rstack[0].parent = ((void*)0);
        VAR_2->rstack[0].privdata = VAR_2->privdata;
        VAR_2->ridx = 0;
    }


    while (VAR_2->ridx >= 0)
        if (FUNC_0(VAR_2) != VAR_1)
            break;


    if (VAR_2->err)
        return VAR_0;



    if (VAR_2->pos >= 1024) {
        FUNC_2(VAR_2->buf,VAR_2->pos,-1);
        VAR_2->pos = 0;
        VAR_2->len = FUNC_1(VAR_2->buf);
    }


    if (VAR_2->ridx == -1) {
        if (VAR_3 != ((void*)0))
            *VAR_3 = VAR_2->reply;
        VAR_2->reply = ((void*)0);
    }
    return VAR_1;
}
