
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dst; int src; int dst_refname; int src_refname; } ;
typedef TYPE_1__ git_push_update ;


 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(const git_push_update **VAR_0, size_t VAR_1, void *VAR_2)
{
 const git_push_update *VAR_3 = VAR_2;

 FUNC_0(1, VAR_1);
 FUNC_2(VAR_3->src_refname, VAR_0[0]->src_refname);
 FUNC_2(VAR_3->dst_refname, VAR_0[0]->dst_refname);
 FUNC_1(&VAR_3->src, &VAR_0[0]->src);
 FUNC_1(&VAR_3->dst, &VAR_0[0]->dst);

 return 0;
}
