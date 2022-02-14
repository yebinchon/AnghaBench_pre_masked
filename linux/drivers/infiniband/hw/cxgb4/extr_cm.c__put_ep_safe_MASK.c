
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct c4iw_ep {int dummy; } ;
struct c4iw_dev {int dummy; } ;


 int FUNC_0 (struct c4iw_ep*) ;

__attribute__((used)) static int FUNC_1(struct c4iw_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct c4iw_ep *VAR_2;

 VAR_2 = *((struct c4iw_ep **)(VAR_1->cb + 2 * sizeof(void *)));
 FUNC_0(VAR_2);
 return 0;
}
