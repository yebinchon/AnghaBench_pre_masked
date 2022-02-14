
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct bsg_device {int dev_list; int ref_count; struct request_queue* queue; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct bsg_device*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bsg_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct bsg_device *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->queue;

 FUNC_4(&VAR_0);

 if (!FUNC_6(&VAR_1->ref_count)) {
  FUNC_5(&VAR_0);
  return 0;
 }

 FUNC_2(&VAR_1->dev_list);
 FUNC_5(&VAR_0);

 FUNC_1(VAR_1, "tearing down\n");




 FUNC_3(VAR_1);
 FUNC_0(VAR_2);
 return 0;
}
