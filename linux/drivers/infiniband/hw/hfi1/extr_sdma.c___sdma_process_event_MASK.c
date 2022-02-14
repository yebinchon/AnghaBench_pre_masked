
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_state {size_t current_state; int go_s99_running; int last_event; } ;
struct sdma_engine {TYPE_1__* dd; int err_halt_worker; int sdma_sw_clean_up_task; struct sdma_state state; int this_idx; } ;
typedef enum sdma_events { ____Placeholder_sdma_events } sdma_events ;
struct TYPE_2__ {int sdma_unfreeze_wq; int sdma_unfreeze_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sdma_engine*) ;
 int * VAR_0 ;
 int FUNC_4 (struct sdma_state*) ;
 int FUNC_5 (struct sdma_engine*) ;
 int FUNC_6 (struct sdma_engine*,int ) ;
 int FUNC_7 (struct sdma_engine*,int const) ;
 int FUNC_8 (struct sdma_engine*) ;
 int * VAR_1 ;
 int FUNC_9 (struct sdma_engine*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct sdma_engine *VAR_2,
     enum sdma_events VAR_3)
{
 struct sdma_state *VAR_4 = &VAR_2->state;
 int VAR_5 = 0;
 switch (VAR_4->current_state) {
 case 138:
  switch (VAR_3) {
  case 152:
   break;
  case 148:







   VAR_4->go_s99_running = 1;

  case 151:

   FUNC_4(&VAR_2->state);
   FUNC_7(VAR_2,
           137);
   break;
  case 150:
   break;
  case 149:
   break;
  case 147:
   FUNC_9(VAR_2);
   break;
  case 146:
   break;
  case 145:
   break;
  case 144:
   break;
  case 143:
   break;
  case 142:
   break;
  case 141:
   break;
  case 140:
   break;
  case 139:
   break;
  }
  break;

 case 137:
  switch (VAR_3) {
  case 152:
   FUNC_7(VAR_2, 138);
   FUNC_9(VAR_2);
   break;
  case 151:
   break;
  case 150:
   FUNC_7(VAR_2,
           136);
   FUNC_8(VAR_2);
   break;
  case 149:
   break;
  case 148:
   VAR_4->go_s99_running = 1;
   break;
  case 147:
   break;
  case 146:
   break;
  case 145:
   FUNC_2(&VAR_2->err_halt_worker);
   break;
  case 144:
   VAR_4->go_s99_running = 0;
   break;
  case 143:
   break;
  case 142:
   break;
  case 141:
   break;
  case 140:
   break;
  case 139:
   break;
  }
  break;

 case 136:
  switch (VAR_3) {
  case 152:
   FUNC_7(VAR_2, 138);
   FUNC_9(VAR_2);
   break;
  case 151:
   break;
  case 150:
   break;
  case 149:
   FUNC_5(VAR_2);
   FUNC_7(VAR_2, VAR_4->go_s99_running ?
           128 :
           135);
   break;
  case 148:
   VAR_4->go_s99_running = 1;
   break;
  case 147:
   break;
  case 146:
   break;
  case 145:
   break;
  case 144:
   VAR_4->go_s99_running = 0;
   break;
  case 143:
   break;
  case 142:
   break;
  case 141:
   break;
  case 140:
   break;
  case 139:
   break;
  }
  break;

 case 135:
  switch (VAR_3) {
  case 152:
   FUNC_7(VAR_2, 138);
   FUNC_9(VAR_2);
   break;
  case 151:
   break;
  case 150:
   break;
  case 149:
   break;
  case 148:
   FUNC_7(VAR_2, 128);
   VAR_4->go_s99_running = 1;
   break;
  case 147:
   break;
  case 146:
   break;
  case 145:
   FUNC_7(VAR_2, 132);
   FUNC_2(&VAR_2->err_halt_worker);
   break;
  case 144:
   break;
  case 140:

  case 143:
   FUNC_7(VAR_2, 130);
   FUNC_0(&VAR_2->dd->sdma_unfreeze_count);
   FUNC_11(&VAR_2->dd->sdma_unfreeze_wq);
   break;
  case 142:
   break;
  case 141:
   break;
  case 139:
   break;
  }
  break;

 case 134:
  switch (VAR_3) {
  case 152:
   FUNC_7(VAR_2, 138);
   break;
  case 151:
   break;
  case 150:
   break;
  case 149:
   break;
  case 148:
   VAR_4->go_s99_running = 1;
   break;
  case 147:
   FUNC_7(VAR_2, 133);
   FUNC_8(VAR_2);
   break;
  case 146:
   break;
  case 145:
   break;
  case 144:
   VAR_4->go_s99_running = 0;
   break;
  case 143:
   break;
  case 142:
   break;
  case 141:
   break;
  case 140:
   VAR_4->go_s99_running = 0;
   break;
  case 139:
   break;
  }
  break;

 case 133:
  switch (VAR_3) {
  case 152:
   FUNC_7(VAR_2, 138);
   FUNC_10(&VAR_2->sdma_sw_clean_up_task);
   break;
  case 151:
   break;
  case 150:
   break;
  case 149:
   FUNC_5(VAR_2);
   FUNC_7(VAR_2, VAR_4->go_s99_running ?
           128 :
           135);
   break;
  case 148:
   VAR_4->go_s99_running = 1;
   break;
  case 147:
   break;
  case 146:
   break;
  case 145:
   break;
  case 144:
   VAR_4->go_s99_running = 0;
   break;
  case 143:
   break;
  case 142:
   break;
  case 141:
   break;
  case 140:
   VAR_4->go_s99_running = 0;
   break;
  case 139:
   break;
  }
  break;

 case 132:
  switch (VAR_3) {
  case 152:
   FUNC_7(VAR_2, 138);
   FUNC_10(&VAR_2->sdma_sw_clean_up_task);
   break;
  case 151:
   break;
  case 150:
   FUNC_7(VAR_2, 134);
   FUNC_10(&VAR_2->sdma_sw_clean_up_task);
   break;
  case 149:
   break;
  case 148:
   VAR_4->go_s99_running = 1;
   break;
  case 147:
   break;
  case 146:
   break;
  case 145:
   FUNC_2(&VAR_2->err_halt_worker);
   break;
  case 144:
   VAR_4->go_s99_running = 0;
   break;
  case 143:
   break;
  case 142:
   break;
  case 141:
   break;
  case 140:
   VAR_4->go_s99_running = 0;
   break;
  case 139:
   break;
  }
  break;

 case 131:
  switch (VAR_3) {
  case 152:
   FUNC_7(VAR_2, 138);
   FUNC_10(&VAR_2->sdma_sw_clean_up_task);
   break;
  case 151:
   break;
  case 150:
   FUNC_7(VAR_2, 134);
   FUNC_10(&VAR_2->sdma_sw_clean_up_task);
   break;
  case 149:
   break;
  case 148:
   VAR_4->go_s99_running = 1;
   break;
  case 147:
   break;
  case 146:
   break;
  case 145:
   FUNC_2(&VAR_2->err_halt_worker);
   break;
  case 144:
   VAR_4->go_s99_running = 0;
   break;
  case 143:
   break;
  case 142:
   break;
  case 141:
   break;
  case 140:
   break;
  case 139:
   break;
  }
  break;

 case 130:
  switch (VAR_3) {
  case 152:
   FUNC_7(VAR_2, 138);
   FUNC_10(&VAR_2->sdma_sw_clean_up_task);
   break;
  case 151:
   break;
  case 150:
   break;
  case 149:
   break;
  case 148:
   VAR_4->go_s99_running = 1;
   break;
  case 147:
   break;
  case 146:
   break;
  case 145:
   break;
  case 144:
   VAR_4->go_s99_running = 0;
   break;
  case 143:
   break;
  case 142:
   FUNC_7(VAR_2, 129);
   FUNC_10(&VAR_2->sdma_sw_clean_up_task);
   break;
  case 141:
   break;
  case 140:
   break;
  case 139:
   break;
  }
  break;

 case 129:
  switch (VAR_3) {
  case 152:
   FUNC_7(VAR_2, 138);
   FUNC_10(&VAR_2->sdma_sw_clean_up_task);
   break;
  case 151:
   break;
  case 150:
   break;
  case 149:
   break;
  case 148:
   VAR_4->go_s99_running = 1;
   break;
  case 147:

   FUNC_0(&VAR_2->dd->sdma_unfreeze_count);
   FUNC_11(&VAR_2->dd->sdma_unfreeze_wq);
   break;
  case 146:
   break;
  case 145:
   break;
  case 144:
   VAR_4->go_s99_running = 0;
   break;
  case 143:
   break;
  case 142:
   break;
  case 141:
   FUNC_5(VAR_2);
   FUNC_7(VAR_2, VAR_4->go_s99_running ?
           128 :
           135);
   break;
  case 140:
   break;
  case 139:
   break;
  }
  break;

 case 128:
  switch (VAR_3) {
  case 152:
   FUNC_7(VAR_2, 138);
   FUNC_10(&VAR_2->sdma_sw_clean_up_task);
   break;
  case 151:
   break;
  case 150:
   break;
  case 149:
   break;
  case 148:
   break;
  case 147:
   break;
  case 146:
   break;
  case 145:
   VAR_5 = 1;
   FUNC_3(VAR_2);

  case 139:




   FUNC_7(VAR_2, 132);
   FUNC_2(&VAR_2->err_halt_worker);
   break;
  case 144:
   FUNC_7(VAR_2, 131);
   break;
  case 140:
   VAR_4->go_s99_running = 0;

  case 143:
   FUNC_7(VAR_2, 130);
   FUNC_0(&VAR_2->dd->sdma_unfreeze_count);
   FUNC_11(&VAR_2->dd->sdma_unfreeze_wq);
   break;
  case 142:
   break;
  case 141:
   break;
  }
  break;
 }

 VAR_4->last_event = VAR_3;
 if (VAR_5)
  FUNC_6(VAR_2, 0);
}
