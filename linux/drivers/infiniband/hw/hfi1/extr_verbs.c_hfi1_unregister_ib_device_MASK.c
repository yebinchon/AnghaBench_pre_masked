
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_ibdev {int mem_timer; int memwait; int txwait; int rdi; } ;
struct hfi1_devdata {struct hfi1_ibdev verbs_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,char*) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int FUNC_2 (struct hfi1_devdata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct hfi1_ibdev*) ;

void FUNC_9(struct hfi1_devdata *VAR_4)
{
 struct hfi1_ibdev *VAR_5 = &VAR_4->verbs_dev;

 FUNC_2(VAR_4);

 FUNC_7(&VAR_4->verbs_dev.rdi);

 if (!FUNC_4(&VAR_5->txwait))
  FUNC_0(VAR_4, "txwait list not empty!\n");
 if (!FUNC_4(&VAR_5->memwait))
  FUNC_0(VAR_4, "memwait list not empty!\n");

 FUNC_1(&VAR_5->mem_timer);
 FUNC_8(VAR_5);

 FUNC_5(&VAR_1);
 FUNC_3(VAR_2);
 FUNC_3(VAR_3);
 VAR_2 = ((void*)0);
 VAR_3 = ((void*)0);
 VAR_0 = 0;
 FUNC_6(&VAR_1);
}
