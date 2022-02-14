
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xucred {int cr_ngroups; int * cr_groups; int cr_uid; } ;
struct TYPE_8__ {TYPE_1__* ah_ops; } ;
struct TYPE_7__ {TYPE_3__* cl_auth; } ;
struct TYPE_6__ {int (* ah_destroy ) (TYPE_3__*) ;} ;
typedef TYPE_2__ CLIENT ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int ,int ,int,int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(CLIENT *VAR_2, struct xucred *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_3->cr_ngroups - 1;
 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;
        if (VAR_2->cl_auth != ((void*)0))
                VAR_2->cl_auth->ah_ops->ah_destroy(VAR_2->cl_auth);
        VAR_2->cl_auth = FUNC_0(VAR_1,
                        VAR_3->cr_uid,
                        VAR_3->cr_groups[0],
                        VAR_4,
                        &VAR_3->cr_groups[1]);
}
