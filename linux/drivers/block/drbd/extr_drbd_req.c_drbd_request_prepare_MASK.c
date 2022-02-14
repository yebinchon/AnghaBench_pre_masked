
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct drbd_request {unsigned long start_jif; int in_actlog_jif; int rq_state; TYPE_1__ i; int * private_bio; } ;
struct drbd_device {int ap_actlog_cnt; int flags; } ;
struct bio {int bi_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drbd_request* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int FUNC_1 (struct drbd_device*,struct drbd_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drbd_device*) ;
 int FUNC_8 (struct drbd_device*,TYPE_1__*) ;
 int FUNC_9 (struct drbd_device*,char*) ;
 int FUNC_10 (struct drbd_device*,struct drbd_request*) ;
 struct drbd_request* FUNC_11 (struct drbd_device*,struct bio*) ;
 int FUNC_12 (struct drbd_device*) ;
 int VAR_7 ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static struct drbd_request *
FUNC_14(struct drbd_device *VAR_8, struct bio *VAR_9, unsigned long VAR_10)
{
 const int VAR_11 = FUNC_3(VAR_9);
 struct drbd_request *VAR_12;


 VAR_12 = FUNC_11(VAR_8, VAR_9);
 if (!VAR_12) {
  FUNC_7(VAR_8);


  FUNC_9(VAR_8, "could not kmalloc() req\n");
  VAR_9->bi_status = VAR_1;
  FUNC_4(VAR_9);
  return FUNC_0(-VAR_2);
 }
 VAR_12->start_jif = VAR_10;

 if (!FUNC_12(VAR_8)) {
  FUNC_6(VAR_12->private_bio);
  VAR_12->private_bio = ((void*)0);
 }


 FUNC_1(VAR_8, VAR_12);


 if (FUNC_5(VAR_9) == VAR_4 ||
     FUNC_5(VAR_9) == VAR_3)
  goto queue_for_submitter_thread;

 if (VAR_11 == VAR_6 && VAR_12->private_bio && VAR_12->i.size
 && !FUNC_13(VAR_0, &VAR_8->flags)) {
  if (!FUNC_8(VAR_8, &VAR_12->i))
   goto queue_for_submitter_thread;
  VAR_12->rq_state |= VAR_5;
  VAR_12->in_actlog_jif = VAR_7;
 }
 return VAR_12;

 queue_for_submitter_thread:
 FUNC_2(&VAR_8->ap_actlog_cnt);
 FUNC_10(VAR_8, VAR_12);
 return ((void*)0);
}
