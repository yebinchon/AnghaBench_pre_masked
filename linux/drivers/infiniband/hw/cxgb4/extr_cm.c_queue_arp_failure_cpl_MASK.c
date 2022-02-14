
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct TYPE_3__ {int opcode; } ;
struct cpl_act_establish {TYPE_1__ ot; } ;
struct TYPE_4__ {int dev; } ;
struct c4iw_ep {TYPE_2__ com; } ;


 struct cpl_act_establish* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct c4iw_ep *VAR_0, struct sk_buff *VAR_1,
      int VAR_2)
{
 struct cpl_act_establish *VAR_3 = FUNC_0(VAR_1);


 VAR_3->ot.opcode = VAR_2;





 *((struct c4iw_ep **)(VAR_1->cb + 2 * sizeof(void *))) = VAR_0;
 FUNC_1(VAR_0->com.dev, VAR_1);
}
