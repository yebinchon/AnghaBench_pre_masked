
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cpl_abort_rpl {int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpl_abort_rpl*,int ,unsigned int) ;
 struct cpl_abort_rpl* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_1, unsigned int VAR_2,
        int VAR_3)
{
 struct cpl_abort_rpl *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4, VAR_0, VAR_2);
 VAR_4->cmd = VAR_3;
}
