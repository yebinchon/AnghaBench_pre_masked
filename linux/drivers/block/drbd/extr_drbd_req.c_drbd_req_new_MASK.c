
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int list; } ;
struct TYPE_6__ {int local; int waiting; int size; int sector; } ;
struct drbd_request {int rq_state; int kref; int completion_ref; int req_pending_local; int req_pending_master_completion; TYPE_2__ w; int tl_requests; TYPE_3__ i; scalar_t__ epoch; struct bio* master_bio; struct drbd_device* device; } ;
struct drbd_device {int dummy; } ;
struct TYPE_4__ {int bi_size; int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct drbd_request*,struct bio*) ;
 int VAR_9 ;
 int FUNC_6 (int *) ;
 struct drbd_request* FUNC_7 (int *,int ) ;
 int FUNC_8 (struct drbd_request*,int ,int) ;

__attribute__((used)) static struct drbd_request *FUNC_9(struct drbd_device *VAR_10, struct bio *VAR_11)
{
 struct drbd_request *VAR_12;

 VAR_12 = FUNC_7(&VAR_9, VAR_0);
 if (!VAR_12)
  return ((void*)0);
 FUNC_8(VAR_12, 0, sizeof(*VAR_12));

 FUNC_5(VAR_12, VAR_11);
 VAR_12->rq_state = (FUNC_2(VAR_11) == VAR_8 ? VAR_5 : 0)
        | (FUNC_3(VAR_11) == VAR_2 ? VAR_6 : 0)
        | (FUNC_3(VAR_11) == VAR_3 ? VAR_7 : 0)
        | (FUNC_3(VAR_11) == VAR_1 ? VAR_4 : 0);
 VAR_12->device = VAR_10;
 VAR_12->master_bio = VAR_11;
 VAR_12->epoch = 0;

 FUNC_4(&VAR_12->i);
 VAR_12->i.sector = VAR_11->bi_iter.bi_sector;
 VAR_12->i.size = VAR_11->bi_iter.bi_size;
 VAR_12->i.local = 1;
 VAR_12->i.waiting = 0;

 FUNC_0(&VAR_12->tl_requests);
 FUNC_0(&VAR_12->w.list);
 FUNC_0(&VAR_12->req_pending_master_completion);
 FUNC_0(&VAR_12->req_pending_local);


 FUNC_1(&VAR_12->completion_ref, 1);

 FUNC_6(&VAR_12->kref);
 return VAR_12;
}
