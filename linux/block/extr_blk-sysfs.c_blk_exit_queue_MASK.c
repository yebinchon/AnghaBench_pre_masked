
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int backing_dev_info; int * elevator; } ;


 int FUNC_0 (struct request_queue*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;

__attribute__((used)) static void FUNC_4(struct request_queue *VAR_0)
{





 if (VAR_0->elevator) {
  FUNC_3(VAR_0);
  FUNC_0(VAR_0, VAR_0->elevator);
  VAR_0->elevator = ((void*)0);
 }






 FUNC_2(VAR_0);






 FUNC_1(VAR_0->backing_dev_info);
}
