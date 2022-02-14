
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vc4_exec_info {scalar_t__ last_ct0ca; scalar_t__ last_ct1ca; } ;
struct TYPE_3__ {int reset_work; } ;
struct vc4_dev {TYPE_1__ hangcheck; int job_lock; struct drm_device* dev; } ;
struct timer_list {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int timer; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct vc4_dev* FUNC_2 (int ,struct timer_list*,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct vc4_dev* VAR_1 ;
 struct vc4_exec_info* FUNC_6 (struct vc4_dev*) ;
 struct vc4_exec_info* FUNC_7 (struct vc4_dev*) ;
 int FUNC_8 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_9(struct timer_list *VAR_2)
{
 struct vc4_dev *VAR_3 = FUNC_2(VAR_3, VAR_2, VAR_0.timer);
 struct drm_device *VAR_4 = VAR_3->dev;
 uint32_t VAR_5, VAR_6;
 unsigned long VAR_7;
 struct vc4_exec_info *VAR_8, *VAR_9;

 FUNC_4(&VAR_3->job_lock, VAR_7);

 VAR_8 = FUNC_6(VAR_3);
 VAR_9 = FUNC_7(VAR_3);


 if (!VAR_8 && !VAR_9) {
  FUNC_5(&VAR_3->job_lock, VAR_7);
  return;
 }

 VAR_5 = FUNC_1(FUNC_0(0));
 VAR_6 = FUNC_1(FUNC_0(1));




 if ((VAR_8 && VAR_5 != VAR_8->last_ct0ca) ||
     (VAR_9 && VAR_6 != VAR_9->last_ct1ca)) {
  if (VAR_8)
   VAR_8->last_ct0ca = VAR_5;
  if (VAR_9)
   VAR_9->last_ct1ca = VAR_6;
  FUNC_5(&VAR_3->job_lock, VAR_7);
  FUNC_8(VAR_4);
  return;
 }

 FUNC_5(&VAR_3->job_lock, VAR_7);





 FUNC_3(&VAR_3->hangcheck.reset_work);
}
