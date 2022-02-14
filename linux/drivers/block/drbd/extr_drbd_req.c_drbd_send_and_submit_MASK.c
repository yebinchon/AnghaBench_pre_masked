
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drbd_resource {int req_lock; } ;
struct TYPE_5__ {int size; scalar_t__ sector; } ;
struct drbd_request {TYPE_2__ i; int req_pending_local; int pre_submit_jif; int * private_bio; int req_pending_master_completion; int tl_requests; int epoch; int rq_state; int master_bio; } ;
struct drbd_plug_cb {int dummy; } ;
struct drbd_device {int * pending_completion; int * pending_master_completion; struct drbd_resource* resource; } ;
struct bio_and_error {scalar_t__ bio; int * member_0; } ;
struct TYPE_6__ {TYPE_1__* connection; } ;
struct TYPE_4__ {int transfer_log; int current_tle_writes; int current_tle_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct drbd_request*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drbd_request*) ;
 int FUNC_6 (struct drbd_device*,struct bio_and_error*) ;
 int FUNC_7 (struct drbd_request*) ;
 struct drbd_plug_cb* FUNC_8 (struct drbd_resource*) ;
 int FUNC_9 (struct drbd_device*,char*,unsigned long long,int) ;
 int FUNC_10 (struct drbd_request*) ;
 int VAR_5 ;
 int FUNC_11 (struct drbd_request*,struct bio_and_error*,int) ;
 int FUNC_12 (struct drbd_request*) ;
 scalar_t__ FUNC_13 (struct drbd_device*) ;
 int FUNC_14 (struct drbd_plug_cb*,struct drbd_request*) ;
 TYPE_3__* FUNC_15 (struct drbd_device*) ;
 int VAR_6 ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *,int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (struct drbd_device*) ;
 int FUNC_20 (struct drbd_device*) ;
 int FUNC_21 (struct drbd_device*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static void FUNC_24(struct drbd_device *VAR_7, struct drbd_request *VAR_8)
{
 struct drbd_resource *VAR_9 = VAR_7->resource;
 const int VAR_10 = FUNC_3(VAR_8->master_bio);
 struct bio_and_error VAR_11 = { ((void*)0), };
 bool VAR_12 = 0;
 bool VAR_13 = 0;

 FUNC_22(&VAR_9->req_lock);
 if (VAR_10 == VAR_4) {



  FUNC_5(VAR_8);




  FUNC_20(VAR_7);
 }


 if (FUNC_13(VAR_7)) {

  VAR_8->rq_state |= VAR_1;
  if (VAR_8->private_bio) {
   FUNC_4(VAR_8->private_bio);
   VAR_8->private_bio = ((void*)0);
   FUNC_21(VAR_7);
  }
  goto out;
 }




 if (VAR_10 != VAR_4) {
  if (!FUNC_7(VAR_8) && !VAR_8->private_bio)
   goto nodata;
 }


 VAR_8->epoch = FUNC_2(&FUNC_15(VAR_7)->connection->current_tle_nr);



 if (FUNC_16(VAR_8->i.size!=0)) {
  if (VAR_10 == VAR_4)
   FUNC_15(VAR_7)->connection->current_tle_writes++;

  FUNC_17(&VAR_8->tl_requests, &FUNC_15(VAR_7)->connection->transfer_log);
 }

 if (VAR_10 == VAR_4) {
  if (VAR_8->private_bio && !FUNC_19(VAR_7)) {
   FUNC_4(VAR_8->private_bio);
   VAR_8->private_bio = ((void*)0);
   FUNC_21(VAR_7);
   goto nodata;
  }
  if (!FUNC_10(VAR_8))
   VAR_12 = 1;
 } else {


  if (VAR_8->private_bio == ((void*)0)) {
   FUNC_1(VAR_8, VAR_2);
   FUNC_1(VAR_8, VAR_0);
  } else
   VAR_12 = 1;
 }

 if (VAR_12 == 0) {
  struct drbd_plug_cb *VAR_14 = FUNC_8(VAR_9);
  if (VAR_14)
   FUNC_14(VAR_14, VAR_8);
 }



 if (FUNC_18(&VAR_8->req_pending_master_completion))
  FUNC_17(&VAR_8->req_pending_master_completion,
   &VAR_7->pending_master_completion[VAR_10 == VAR_4]);
 if (VAR_8->private_bio) {

  VAR_8->pre_submit_jif = VAR_6;
  FUNC_17(&VAR_8->req_pending_local,
   &VAR_7->pending_completion[VAR_10 == VAR_4]);
  FUNC_1(VAR_8, VAR_3);

  VAR_13 = 1;
 } else if (VAR_12) {
nodata:
  if (FUNC_0(&VAR_5))
   FUNC_9(VAR_7, "IO ERROR: neither local nor remote data, sector %llu+%u\n",
     (unsigned long long)VAR_8->i.sector, VAR_8->i.size >> 9);


 }

out:
 FUNC_11(VAR_8, &VAR_11, 1);
 FUNC_23(&VAR_9->req_lock);







 if (VAR_13)
  FUNC_12(VAR_8);
 if (VAR_11.bio)
  FUNC_6(VAR_7, &VAR_11);
}
