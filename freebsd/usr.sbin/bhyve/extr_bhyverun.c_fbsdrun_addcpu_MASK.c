
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct vmctx {int dummy; } ;
struct TYPE_5__ {int mt_vcpu; int mt_thr; struct vmctx* mt_ctx; } ;
struct TYPE_4__ {scalar_t__ inst_length; int rip; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (int *,int *,int ,TYPE_2__*) ;
 int FUNC_4 (struct vmctx*,int) ;
 TYPE_1__* VAR_5 ;

void
FUNC_5(struct vmctx *VAR_6, int VAR_7, int VAR_8, uint64_t VAR_9)
{
 int VAR_10;

 FUNC_1(VAR_7 == VAR_0);







 VAR_10 = FUNC_4(VAR_6, VAR_8);
 if (VAR_10 != 0)
  FUNC_2(VAR_1, "could not activate CPU %d", VAR_8);

 FUNC_0(VAR_8, &VAR_2);





 VAR_5[VAR_8].rip = VAR_9;
 VAR_5[VAR_8].inst_length = 0;

 VAR_4[VAR_8].mt_ctx = VAR_6;
 VAR_4[VAR_8].mt_vcpu = VAR_8;

 VAR_10 = FUNC_3(&VAR_4[VAR_8].mt_thr, ((void*)0),
     VAR_3, &VAR_4[VAR_8]);
 FUNC_1(VAR_10 == 0);
}
