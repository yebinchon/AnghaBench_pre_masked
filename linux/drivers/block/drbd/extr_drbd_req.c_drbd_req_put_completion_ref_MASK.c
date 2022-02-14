
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_request {int rq_state; int kref; int completion_ref; struct drbd_device* device; } ;
struct drbd_device {int dummy; } ;
struct bio_and_error {int dummy; } ;


 int FUNC_0 (struct drbd_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct drbd_request*,struct bio_and_error*) ;
 int VAR_2 ;
 int FUNC_3 (struct drbd_request*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct drbd_request *VAR_3, struct bio_and_error *VAR_4, int VAR_5)
{
 struct drbd_device *VAR_6 = VAR_3->device;
 FUNC_0(VAR_6, VAR_4 || (VAR_3->rq_state & VAR_1));

 if (!VAR_5)
  return;

 if (!FUNC_1(VAR_5, &VAR_3->completion_ref))
  return;

 FUNC_2(VAR_3, VAR_4);



 if (VAR_3->rq_state & VAR_0)
  return;

 if (VAR_3->rq_state & VAR_1) {


  FUNC_3(VAR_3);
  return;
 }

 FUNC_4(&VAR_3->kref, VAR_2);
}
