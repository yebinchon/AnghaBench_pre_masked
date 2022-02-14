
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct rbd_obj_request {struct rbd_img_request* img_request; } ;
struct rbd_img_request {struct request* rq; struct rbd_obj_request* obj_request; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct rbd_img_request*,int*) ;
 scalar_t__ FUNC_1 (struct rbd_obj_request*,int*) ;
 int FUNC_2 (struct request*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rbd_img_request*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct rbd_img_request *VAR_1, int VAR_2)
{
again:
 if (!FUNC_0(VAR_1, &VAR_2))
  return;

 if (FUNC_5(VAR_0, &VAR_1->flags)) {
  struct rbd_obj_request *VAR_3 = VAR_1->obj_request;

  FUNC_4(VAR_1);
  if (FUNC_1(VAR_3, &VAR_2)) {
   VAR_1 = VAR_3->img_request;
   goto again;
  }
 } else {
  struct request *VAR_4 = VAR_1->rq;

  FUNC_4(VAR_1);
  FUNC_2(VAR_4, FUNC_3(VAR_2));
 }
}
