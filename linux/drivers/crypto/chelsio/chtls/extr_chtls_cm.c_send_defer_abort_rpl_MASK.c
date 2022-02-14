
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cpl_abort_rpl {int dummy; } ;
struct cpl_abort_req_rss {int status; } ;
struct chtls_dev {TYPE_1__* lldi; } ;
struct TYPE_2__ {int * ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpl_abort_req_rss*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (int,int) ;
 struct cpl_abort_req_rss* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct chtls_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct cpl_abort_req_rss *VAR_6 = FUNC_3(VAR_5);
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_2(sizeof(struct cpl_abort_rpl),
         VAR_2 | VAR_3);
 FUNC_1(VAR_7, sizeof(struct cpl_abort_rpl));
 FUNC_6(VAR_7, FUNC_0(VAR_6),
    (VAR_6->status & VAR_0));
 FUNC_7(VAR_7, VAR_1, VAR_6->status >> 1);
 FUNC_4(VAR_4->lldi->ports[0], VAR_7);
 FUNC_5(VAR_5);
}
