
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in_use; } ;
struct t4_wq {TYPE_1__ rq; } ;
struct t4_cq {int dummy; } ;


 int FUNC_0 (struct t4_wq*,struct t4_cq*,int ) ;
 int FUNC_1 (char*,struct t4_wq*,struct t4_cq*,int,int) ;

int FUNC_2(struct t4_wq *VAR_0, struct t4_cq *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = VAR_0->rq.in_use - VAR_2;

 FUNC_1("wq %p cq %p rq.in_use %u skip count %u\n",
   VAR_0, VAR_1, VAR_0->rq.in_use, VAR_2);
 while (VAR_4--) {
  FUNC_0(VAR_0, VAR_1, 0);
  VAR_3++;
 }
 return VAR_3;
}
