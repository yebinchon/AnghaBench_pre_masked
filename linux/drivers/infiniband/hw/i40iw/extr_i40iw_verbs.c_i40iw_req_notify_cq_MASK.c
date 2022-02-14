
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_cq {int dummy; } ;
struct TYPE_4__ {int (* iw_cq_request_notification ) (struct i40iw_cq_uk*,int) ;} ;
struct i40iw_cq_uk {TYPE_2__ ops; } ;
struct TYPE_3__ {struct i40iw_cq_uk cq_uk; } ;
struct i40iw_cq {int lock; TYPE_1__ sc_cq; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
typedef enum i40iw_completion_notify { ____Placeholder_i40iw_completion_notify } i40iw_completion_notify ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct i40iw_cq_uk*,int) ;

__attribute__((used)) static int FUNC_3(struct ib_cq *VAR_3,
          enum ib_cq_notify_flags VAR_4)
{
 struct i40iw_cq *VAR_5;
 struct i40iw_cq_uk *VAR_6;
 unsigned long VAR_7;
 enum i40iw_completion_notify VAR_8 = VAR_1;

 VAR_5 = (struct i40iw_cq *)VAR_3;
 VAR_6 = &VAR_5->sc_cq.cq_uk;
 if (VAR_4 == VAR_0)
  VAR_8 = VAR_2;
 FUNC_0(&VAR_5->lock, VAR_7);
 VAR_6->ops.iw_cq_request_notification(VAR_6, VAR_8);
 FUNC_1(&VAR_5->lock, VAR_7);
 return 0;
}
