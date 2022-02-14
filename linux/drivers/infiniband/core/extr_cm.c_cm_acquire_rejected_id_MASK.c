
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int local_id; } ;
struct cm_timewait_info {TYPE_1__ work; } ;
struct cm_rej_msg {scalar_t__ local_comm_id; int remote_comm_id; scalar_t__ ari; int reason; } ;
struct TYPE_5__ {scalar_t__ remote_id; } ;
struct cm_id_private {int refcount; TYPE_2__ id; } ;
typedef int __be64 ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {int lock; int local_id_table; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_2 ;
 struct cm_id_private* FUNC_2 (int ,scalar_t__) ;
 struct cm_timewait_info* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct cm_rej_msg*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct cm_id_private* FUNC_8 (int *,int ) ;

__attribute__((used)) static struct cm_id_private * FUNC_9(struct cm_rej_msg *VAR_3)
{
 struct cm_timewait_info *VAR_4;
 struct cm_id_private *VAR_5;
 __be32 VAR_6;

 VAR_6 = VAR_3->local_comm_id;

 if (FUNC_0(VAR_3->reason) == VAR_1) {
  FUNC_6(&VAR_2.lock);
  VAR_4 = FUNC_3( *((__be64 *) VAR_3->ari),
        VAR_6);
  if (!VAR_4) {
   FUNC_7(&VAR_2.lock);
   return ((void*)0);
  }
  VAR_5 = FUNC_8(&VAR_2.local_id_table,
    FUNC_4(VAR_4->work.local_id));
  if (VAR_5) {
   if (VAR_5->id.remote_id == VAR_6)
    FUNC_1(&VAR_5->refcount);
   else
    VAR_5 = ((void*)0);
  }
  FUNC_7(&VAR_2.lock);
 } else if (FUNC_5(VAR_3) == VAR_0)
  VAR_5 = FUNC_2(VAR_3->remote_comm_id, 0);
 else
  VAR_5 = FUNC_2(VAR_3->remote_comm_id, VAR_6);

 return VAR_5;
}
