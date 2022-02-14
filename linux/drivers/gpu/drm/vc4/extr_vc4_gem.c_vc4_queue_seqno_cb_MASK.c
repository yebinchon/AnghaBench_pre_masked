
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int entry; } ;
struct vc4_seqno_cb {void (* func ) (struct vc4_seqno_cb*) ;TYPE_1__ work; scalar_t__ seqno; } ;
struct vc4_dev {scalar_t__ finished_seqno; int job_lock; int seqno_cb_list; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct vc4_dev* FUNC_5 (struct drm_device*) ;
 int VAR_0 ;

int FUNC_6(struct drm_device *VAR_1,
         struct vc4_seqno_cb *VAR_2, uint64_t VAR_3,
         void (*VAR_4)(struct vc4_seqno_cb *VAR_5))
{
 struct vc4_dev *VAR_6 = FUNC_5(VAR_1);
 int VAR_7 = 0;
 unsigned long VAR_8;

 VAR_2->func = VAR_4;
 FUNC_0(&VAR_2->work, VAR_0);

 FUNC_3(&VAR_6->job_lock, VAR_8);
 if (VAR_3 > VAR_6->finished_seqno) {
  VAR_2->seqno = VAR_3;
  FUNC_1(&VAR_2->work.entry, &VAR_6->seqno_cb_list);
 } else {
  FUNC_2(&VAR_2->work);
 }
 FUNC_4(&VAR_6->job_lock, VAR_8);

 return VAR_7;
}
