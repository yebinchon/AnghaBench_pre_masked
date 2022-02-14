
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct zip_device {TYPE_1__* iq; } ;
struct TYPE_2__ {int free_flag; int hw_tail; int sw_head; int lock; int pend_cnt; int sw_tail; int done_cnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

void FUNC_3(struct zip_device *VAR_0, u32 VAR_1)
{

 FUNC_0(&VAR_0->iq[VAR_1].lock);


 if (VAR_0->iq[VAR_1].free_flag == 1) {
  FUNC_2("Free flag. Free cmd buffer, adjust sw head and tail");

  VAR_0->iq[VAR_1].free_flag = 0;


  VAR_0->iq[VAR_1].hw_tail = VAR_0->iq[VAR_1].sw_head;
 } else {
  FUNC_2("Free flag not set. increment hw tail");
  VAR_0->iq[VAR_1].hw_tail += 16;
 }

 VAR_0->iq[VAR_1].done_cnt++;
 VAR_0->iq[VAR_1].pend_cnt--;

 FUNC_2("sw_head :0x%lx sw_tail :0x%lx hw_tail :0x%lx",
  VAR_0->iq[VAR_1].sw_head, VAR_0->iq[VAR_1].sw_tail,
  VAR_0->iq[VAR_1].hw_tail);
 FUNC_2(" Got CC : pend_cnt : %d\n", VAR_0->iq[VAR_1].pend_cnt);

 FUNC_1(&VAR_0->iq[VAR_1].lock);
}
