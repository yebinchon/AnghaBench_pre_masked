
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ idx; scalar_t__ val; } ;
struct hvutil_transport {int mode; int release; TYPE_1__ cn_id; int list; int lock; int outmsg_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (struct hvutil_transport*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct hvutil_transport *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_3->lock);
 VAR_4 = VAR_3->mode;
 VAR_3->mode = VAR_1;
 FUNC_8(&VAR_3->outmsg_q);
 FUNC_4(&VAR_3->lock);






 FUNC_5(&VAR_2);
 FUNC_2(&VAR_3->list);
 FUNC_6(&VAR_2);
 if (VAR_3->cn_id.idx > 0 && VAR_3->cn_id.val > 0)
  FUNC_0(&VAR_3->cn_id);

 if (VAR_4 == VAR_0)
  FUNC_7(&VAR_3->release);

 FUNC_1(VAR_3);
}
