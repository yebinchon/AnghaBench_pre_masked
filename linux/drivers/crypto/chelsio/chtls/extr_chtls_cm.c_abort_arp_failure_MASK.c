
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cpl_abort_req {int cmd; } ;
struct chtls_dev {TYPE_1__* lldi; } ;
struct TYPE_2__ {int * ports; } ;


 int VAR_0 ;
 struct cpl_abort_req* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, struct sk_buff *VAR_2)
{
 struct cpl_abort_req *VAR_3 = FUNC_0(VAR_2);
 struct chtls_dev *VAR_4;

 VAR_4 = (struct chtls_dev *)VAR_1;
 VAR_3->cmd = VAR_0;
 FUNC_1(VAR_4->lldi->ports[0], VAR_2);
}
