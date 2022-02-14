
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int dst; int src; } ;
struct TYPE_11__ {int loid; int roid; TYPE_1__ refspec; } ;
typedef TYPE_2__ push_spec ;
struct TYPE_12__ {int dst; int src; struct TYPE_12__* dst_refname; struct TYPE_12__* src_refname; } ;
typedef TYPE_3__ git_push_update ;
struct TYPE_13__ {int updates; } ;
typedef TYPE_4__ git_push ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(git_push *VAR_0, push_spec *VAR_1)
{
 git_push_update *VAR_2 = FUNC_1(1, sizeof(git_push_update));
 FUNC_0(VAR_2);

 VAR_2->src_refname = FUNC_2(VAR_1->refspec.src);
 FUNC_0(VAR_2->src_refname);

 VAR_2->dst_refname = FUNC_2(VAR_1->refspec.dst);
 FUNC_0(VAR_2->dst_refname);

 FUNC_3(&VAR_2->src, &VAR_1->roid);
 FUNC_3(&VAR_2->dst, &VAR_1->loid);

 return FUNC_4(&VAR_0->updates, VAR_2);
}
