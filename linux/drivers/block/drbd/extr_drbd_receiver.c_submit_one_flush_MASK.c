
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct one_flush_context {struct issue_flush_context* ctx; struct drbd_device* device; } ;
struct issue_flush_context {int pending; int error; } ;
struct drbd_device {int flags; int flush_jif; TYPE_1__* ldev; int kref; } ;
struct bio {int bi_opf; int bi_end_io; struct one_flush_context* bi_private; } ;
struct TYPE_2__ {int backing_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct bio* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct drbd_device*,char*) ;
 int VAR_6 ;
 int FUNC_5 (struct one_flush_context*) ;
 struct one_flush_context* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_7 ;
 int FUNC_8 (struct drbd_device*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct bio*) ;

__attribute__((used)) static void FUNC_11(struct drbd_device *VAR_8, struct issue_flush_context *VAR_9)
{
 struct bio *VAR_10 = FUNC_1(VAR_2, 0);
 struct one_flush_context *VAR_11 = FUNC_6(sizeof(*VAR_11), VAR_2);
 if (!VAR_10 || !VAR_11) {
  FUNC_4(VAR_8, "Could not allocate a bio, CANNOT ISSUE FLUSH\n");



  FUNC_5(VAR_11);
  if (VAR_10)
   FUNC_2(VAR_10);

  VAR_9->error = -VAR_0;
  FUNC_8(VAR_8);
  FUNC_7(&VAR_8->kref, VAR_5);
  return;
 }

 VAR_11->device = VAR_8;
 VAR_11->ctx = VAR_9;
 FUNC_3(VAR_10, VAR_8->ldev->backing_bdev);
 VAR_10->bi_private = VAR_11;
 VAR_10->bi_end_io = VAR_7;
 VAR_10->bi_opf = VAR_3 | VAR_4;

 VAR_8->flush_jif = VAR_6;
 FUNC_9(VAR_1, &VAR_8->flags);
 FUNC_0(&VAR_9->pending);
 FUNC_10(VAR_10);
}
