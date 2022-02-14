
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rdi; } ;
struct hfi1_devdata {TYPE_1__ verbs_dev; int num_sdma; int * comp_vect; int * tx_opstats; int * send_schedule; int * rcv_limit; int * int_counter; int unit; } ;
struct hfi1_asic_data {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hfi1_devdata*,struct hfi1_asic_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hfi1_devdata*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 struct hfi1_asic_data* FUNC_6 (struct hfi1_devdata*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct hfi1_devdata*,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct hfi1_devdata *VAR_1)
{
 struct hfi1_asic_data *VAR_2;
 unsigned long VAR_3;

 FUNC_9(&VAR_0, VAR_3);
 FUNC_0(&VAR_0, VAR_1->unit);
 VAR_2 = FUNC_6(VAR_1);
 FUNC_10(&VAR_0, VAR_3);

 FUNC_1(VAR_1, VAR_2);
 FUNC_3(VAR_1);
 FUNC_5();
 FUNC_2(VAR_1->int_counter);
 FUNC_2(VAR_1->rcv_limit);
 FUNC_2(VAR_1->send_schedule);
 FUNC_2(VAR_1->tx_opstats);
 VAR_1->int_counter = ((void*)0);
 VAR_1->rcv_limit = ((void*)0);
 VAR_1->send_schedule = ((void*)0);
 VAR_1->tx_opstats = ((void*)0);
 FUNC_4(VAR_1->comp_vect);
 VAR_1->comp_vect = ((void*)0);
 FUNC_8(VAR_1, VAR_1->num_sdma);
 FUNC_7(&VAR_1->verbs_dev.rdi);
}
