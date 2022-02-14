
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct c4iw_ep {TYPE_1__* parent_ep; } ;
struct c4iw_dev {int dummy; } ;
struct TYPE_2__ {int com; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct c4iw_ep*) ;

__attribute__((used)) static int FUNC_2(struct c4iw_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct c4iw_ep *VAR_2;

 VAR_2 = *((struct c4iw_ep **)(VAR_1->cb + 2 * sizeof(void *)));
 FUNC_0(&VAR_2->parent_ep->com);
 FUNC_1(VAR_2);
 return 0;
}
