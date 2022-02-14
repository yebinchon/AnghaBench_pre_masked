
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int completed; scalar_t__ waiting; } ;
struct drbd_request {unsigned int rq_state; scalar_t__ epoch; int req_pending_master_completion; TYPE_1__ i; TYPE_4__* master_bio; int tl_requests; int private_bio; struct drbd_device* device; } ;
struct drbd_device {int misc_wait; } ;
struct bio_and_error {TYPE_4__* bio; int error; } ;
struct TYPE_8__ {int bi_opf; } ;
struct TYPE_7__ {TYPE_2__* connection; } ;
struct TYPE_6__ {int current_tle_nr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 unsigned int const VAR_5 ;
 unsigned int const VAR_6 ;
 unsigned int const VAR_7 ;
 unsigned int const VAR_8 ;
 unsigned int const VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct drbd_device*,struct drbd_request*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct drbd_device*,char*,...) ;
 TYPE_3__* FUNC_5 (struct drbd_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static
void FUNC_11(struct drbd_request *VAR_11, struct bio_and_error *VAR_12)
{
 const unsigned VAR_13 = VAR_11->rq_state;
 struct drbd_device *VAR_14 = VAR_11->device;
 int VAR_15, VAR_16;
 if ((VAR_13 & VAR_6 && !(VAR_13 & VAR_4)) ||
     (VAR_13 & VAR_9) || (VAR_13 & VAR_8) ||
     (VAR_13 & VAR_3)) {
  FUNC_4(VAR_14, "drbd_req_complete: Logic BUG rq_state = 0x%x\n", VAR_13);
  return;
 }

 if (!VAR_11->master_bio) {
  FUNC_4(VAR_14, "drbd_req_complete: Logic BUG, master_bio == NULL!\n");
  return;
 }
 VAR_16 = (VAR_13 & VAR_5) || (VAR_13 & VAR_7);
 VAR_15 = FUNC_0(VAR_11->private_bio);
 if (FUNC_8(FUNC_3(VAR_11->master_bio)) &&
     VAR_11->epoch == FUNC_2(&FUNC_5(VAR_14)->connection->current_tle_nr))
  FUNC_9(FUNC_5(VAR_14)->connection);


 FUNC_1(VAR_14, VAR_11);
 if (!VAR_16 &&
     FUNC_3(VAR_11->master_bio) == VAR_1 &&
     !(VAR_11->master_bio->bi_opf & VAR_2) &&
     !FUNC_7(&VAR_11->tl_requests))
  VAR_11->rq_state |= VAR_10;

 if (!(VAR_11->rq_state & VAR_10)) {
  VAR_12->error = VAR_16 ? 0 : (VAR_15 ?: -VAR_0);
  VAR_12->bio = VAR_11->master_bio;
  VAR_11->master_bio = ((void*)0);




  VAR_11->i.completed = 1;
 }

 if (VAR_11->i.waiting)
  FUNC_10(&VAR_14->misc_wait);





 FUNC_6(&VAR_11->req_pending_master_completion);
}
