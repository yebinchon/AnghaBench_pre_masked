
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct one_flush_context {struct issue_flush_context* ctx; struct drbd_device* device; } ;
struct issue_flush_context {int done; int pending; int error; } ;
struct drbd_device {int kref; int flags; } ;
struct bio {scalar_t__ bi_status; struct one_flush_context* bi_private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (struct drbd_device*,char*,scalar_t__) ;
 int FUNC_6 (struct one_flush_context*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct drbd_device*) ;

__attribute__((used)) static void FUNC_9(struct bio *VAR_2)
{
 struct one_flush_context *VAR_3 = VAR_2->bi_private;
 struct drbd_device *VAR_4 = VAR_3->device;
 struct issue_flush_context *VAR_5 = VAR_3->ctx;

 if (VAR_2->bi_status) {
  VAR_5->error = FUNC_2(VAR_2->bi_status);
  FUNC_5(VAR_4, "local disk FLUSH FAILED with status %d\n", VAR_2->bi_status);
 }
 FUNC_6(VAR_3);
 FUNC_1(VAR_2);

 FUNC_3(VAR_0, &VAR_4->flags);
 FUNC_8(VAR_4);
 FUNC_7(&VAR_4->kref, VAR_1);

 if (FUNC_0(&VAR_5->pending))
  FUNC_4(&VAR_5->done);
}
