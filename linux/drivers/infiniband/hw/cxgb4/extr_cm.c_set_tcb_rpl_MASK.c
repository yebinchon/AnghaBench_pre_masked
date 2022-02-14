
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cpl_set_tcb_rpl {scalar_t__ status; } ;
struct c4iw_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpl_set_tcb_rpl*) ;
 struct cpl_set_tcb_rpl* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct c4iw_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct cpl_set_tcb_rpl *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->status != VAR_0) {
  FUNC_3("Unexpected SET_TCB_RPL status %u for tid %u\n",
         VAR_3->status, FUNC_0(VAR_3));
 }
 FUNC_2(VAR_2);
 return 0;
}
