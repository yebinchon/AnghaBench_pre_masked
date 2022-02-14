
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct reloc_cache {int rq_size; TYPE_4__* rq; int * rq_cmd; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
struct TYPE_10__ {TYPE_3__* engine; TYPE_2__* batch; } ;
struct TYPE_9__ {int gt; } ;
struct TYPE_8__ {TYPE_5__* obj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_5__*,int ,size_t) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct reloc_cache *VAR_1)
{
 FUNC_0(VAR_1->rq_size >= VAR_1->rq->batch->obj->base.size / sizeof(u32));
 VAR_1->rq_cmd[VAR_1->rq_size] = VAR_0;

 FUNC_1(VAR_1->rq->batch->obj, 0, VAR_1->rq_size);
 FUNC_2(VAR_1->rq->batch->obj);

 FUNC_4(VAR_1->rq->engine->gt);

 FUNC_3(VAR_1->rq);
 VAR_1->rq = ((void*)0);
}
