
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_pd {int dummy; } ;
struct TYPE_2__ {int lkey; int rkey; } ;
struct rxe_mem {int max_buf; int type; int state; struct rxe_pd* pd; TYPE_1__ ibmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rxe_mem*,int) ;
 int FUNC_1 (int ,struct rxe_mem*) ;

int FUNC_2(struct rxe_pd *VAR_2,
        int VAR_3, struct rxe_mem *VAR_4)
{
 int VAR_5;

 FUNC_1(0, VAR_4);


 VAR_4->ibmr.rkey = VAR_4->ibmr.lkey;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (VAR_5)
  goto err1;

 VAR_4->pd = VAR_2;
 VAR_4->max_buf = VAR_3;
 VAR_4->state = VAR_0;
 VAR_4->type = VAR_1;

 return 0;

err1:
 return VAR_5;
}
