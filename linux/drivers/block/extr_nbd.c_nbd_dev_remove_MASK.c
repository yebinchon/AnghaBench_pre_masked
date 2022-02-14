
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct nbd_device {scalar_t__ destroy_complete; int flags; int tag_set; struct gendisk* disk; } ;
struct gendisk {int * private_data; struct request_queue* queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct gendisk*) ;
 int FUNC_4 (struct nbd_device*) ;
 int FUNC_5 (struct gendisk*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct nbd_device *VAR_1)
{
 struct gendisk *VAR_2 = VAR_1->disk;
 struct request_queue *VAR_3;

 if (VAR_2) {
  VAR_3 = VAR_2->queue;
  FUNC_3(VAR_2);
  FUNC_0(VAR_3);
  FUNC_1(&VAR_1->tag_set);
  VAR_2->private_data = ((void*)0);
  FUNC_5(VAR_2);
 }







 if (FUNC_6(VAR_0, &VAR_1->flags) && VAR_1->destroy_complete)
  FUNC_2(VAR_1->destroy_complete);

 FUNC_4(VAR_1);
}
