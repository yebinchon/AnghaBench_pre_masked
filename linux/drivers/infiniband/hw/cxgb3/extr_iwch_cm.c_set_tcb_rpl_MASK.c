
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_set_tcb_rpl {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpl_set_tcb_rpl*) ;
 struct cpl_set_tcb_rpl* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct t3cdev *VAR_2, struct sk_buff *VAR_3, void *VAR_4)
{
 struct cpl_set_tcb_rpl *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->status != VAR_0) {
  FUNC_2("Unexpected SET_TCB_RPL status %u for tid %u\n",
         VAR_5->status, FUNC_0(VAR_5));
 }
 return VAR_1;
}
