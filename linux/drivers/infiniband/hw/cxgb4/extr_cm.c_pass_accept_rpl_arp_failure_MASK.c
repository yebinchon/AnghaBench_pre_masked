
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct c4iw_ep {int com; int hwtid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct c4iw_ep*,struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, struct sk_buff *VAR_3)
{
 struct c4iw_ep *VAR_4 = VAR_2;

 FUNC_1("ARP failure during accept - tid %u - dropping connection\n",
        VAR_4->hwtid);

 FUNC_0(&VAR_4->com, VAR_0);
 FUNC_2(VAR_4, VAR_3, VAR_1);
}
