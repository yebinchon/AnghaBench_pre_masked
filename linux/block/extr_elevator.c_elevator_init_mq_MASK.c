
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int required_elevator_features; int elevator; int queue_flags; } ;
struct elevator_type {int elevator_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*,struct elevator_type*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (struct request_queue*) ;
 struct elevator_type* FUNC_6 (struct request_queue*) ;
 struct elevator_type* FUNC_7 (struct request_queue*) ;
 int FUNC_8 (struct elevator_type*) ;
 int FUNC_9 (struct request_queue*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ) ;

void FUNC_13(struct request_queue *VAR_1)
{
 struct elevator_type *VAR_2;
 int VAR_3;

 if (!FUNC_9(VAR_1))
  return;

 FUNC_0(FUNC_11(VAR_0, &VAR_1->queue_flags));

 if (FUNC_12(VAR_1->elevator))
  return;

 if (!VAR_1->required_elevator_features)
  VAR_2 = FUNC_7(VAR_1);
 else
  VAR_2 = FUNC_6(VAR_1);
 if (!VAR_2)
  return;

 FUNC_1(VAR_1);
 FUNC_3(VAR_1);

 VAR_3 = FUNC_2(VAR_1, VAR_2);

 FUNC_5(VAR_1);
 FUNC_4(VAR_1);

 if (VAR_3) {
  FUNC_10("\"%s\" elevator initialization failed, "
   "falling back to \"none\"\n", VAR_2->elevator_name);
  FUNC_8(VAR_2);
 }
}
