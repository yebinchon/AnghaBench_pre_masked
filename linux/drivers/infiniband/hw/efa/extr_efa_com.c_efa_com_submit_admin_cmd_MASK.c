
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_comp_ctx {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct efa_com_admin_queue {int state; TYPE_1__ sq; int efa_dev; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct efa_admin_acq_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct efa_comp_ctx* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct efa_comp_ctx*) ;
 struct efa_comp_ctx* FUNC_2 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,size_t,struct efa_admin_acq_entry*,size_t) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static struct efa_comp_ctx *FUNC_8(struct efa_com_admin_queue *VAR_2,
           struct efa_admin_aq_entry *VAR_3,
           size_t VAR_4,
           struct efa_admin_acq_entry *VAR_5,
           size_t VAR_6)
{
 struct efa_comp_ctx *VAR_7;

 FUNC_5(&VAR_2->sq.lock);
 if (!FUNC_7(VAR_0, &VAR_2->state)) {
  FUNC_4(VAR_2->efa_dev, "Admin queue is closed\n");
  FUNC_6(&VAR_2->sq.lock);
  return FUNC_0(-VAR_1);
 }

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6);
 FUNC_6(&VAR_2->sq.lock);
 if (FUNC_1(VAR_7))
  FUNC_3(VAR_0, &VAR_2->state);

 return VAR_7;
}
