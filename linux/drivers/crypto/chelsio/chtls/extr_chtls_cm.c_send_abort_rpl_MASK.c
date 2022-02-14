
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct l2t_entry {int dummy; } ;
struct cpl_abort_rpl {int dummy; } ;
struct cpl_abort_req_rss {int status; } ;
struct chtls_sock {int egress_dev; struct l2t_entry* l2t_entry; } ;
struct chtls_dev {TYPE_1__* lldi; } ;
struct TYPE_2__ {int * ports; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpl_abort_req_rss*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 struct cpl_abort_req_rss* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct chtls_sock*) ;
 int FUNC_4 (int ,struct sk_buff*,struct l2t_entry*) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 struct chtls_sock* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct chtls_dev*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ,int) ;
 int FUNC_10 (struct sk_buff*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct sock *VAR_3, struct sk_buff *VAR_4,
      struct chtls_dev *VAR_5, int VAR_6, int VAR_7)
{
 struct cpl_abort_req_rss *VAR_8 = FUNC_2(VAR_4);
 struct sk_buff *VAR_9;
 struct chtls_sock *VAR_10;

 VAR_10 = FUNC_7(VAR_3);

 VAR_9 = FUNC_1(sizeof(struct cpl_abort_rpl),
         VAR_1);

 if (!VAR_9) {
  VAR_8->status = (VAR_7 << 1);
  FUNC_8(VAR_5, VAR_4);
  return;
 }

 FUNC_9(VAR_9, FUNC_0(VAR_8), VAR_6);
 FUNC_6(VAR_4);

 FUNC_10(VAR_9, VAR_0, VAR_7);
 if (FUNC_3(VAR_10)) {
  struct l2t_entry *VAR_11 = VAR_10->l2t_entry;

  if (VAR_11 && VAR_3->sk_state != VAR_2) {
   FUNC_4(VAR_10->egress_dev, VAR_9, VAR_11);
   return;
  }
 }
 FUNC_5(VAR_5->lldi->ports[0], VAR_9);
}
