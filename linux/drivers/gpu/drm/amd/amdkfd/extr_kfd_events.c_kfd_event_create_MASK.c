
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct kfd_process {int event_mutex; } ;
struct kfd_event {int type; int auto_reset; int signaled; int event_id; int wq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct kfd_process*,struct kfd_event*) ;
 int FUNC_1 (struct file*,struct kfd_process*,struct kfd_event*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kfd_event*) ;
 struct kfd_event* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct file *VAR_4, struct kfd_process *VAR_5,
       uint32_t VAR_6, bool VAR_7, uint32_t VAR_8,
       uint32_t *VAR_9, uint32_t *VAR_10,
       uint64_t *VAR_11, uint32_t *VAR_12)
{
 int VAR_13 = 0;
 struct kfd_event *VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_1);

 if (!VAR_14)
  return -VAR_0;

 VAR_14->type = VAR_6;
 VAR_14->auto_reset = VAR_7;
 VAR_14->signaled = 0;

 FUNC_2(&VAR_14->wq);

 *VAR_11 = 0;

 FUNC_5(&VAR_5->event_mutex);

 switch (VAR_6) {
 case 128:
 case 129:
  VAR_13 = FUNC_1(VAR_4, VAR_5, VAR_14);
  if (!VAR_13) {
   *VAR_11 = VAR_2;
   *VAR_11 <<= VAR_3;
   *VAR_12 = VAR_14->event_id;
  }
  break;
 default:
  VAR_13 = FUNC_0(VAR_5, VAR_14);
  break;
 }

 if (!VAR_13) {
  *VAR_9 = VAR_14->event_id;
  *VAR_10 = VAR_14->event_id;
 } else {
  FUNC_3(VAR_14);
 }

 FUNC_6(&VAR_5->event_mutex);

 return VAR_13;
}
