
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
 unsigned int FUNC_0 (struct cpl_abort_req_rss*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct cpl_abort_req_rss* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct chtls_sock*) ;
 int FUNC_3 (int ,struct sk_buff*,struct l2t_entry*) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct sk_buff*) ;
 struct chtls_sock* FUNC_8 (struct sock*) ;
 int VAR_3 ;
 int FUNC_9 (struct sk_buff*,unsigned int,int) ;
 int FUNC_10 (struct sk_buff*,int ,int) ;
 int FUNC_11 (struct sk_buff*,struct chtls_dev*,int ) ;

__attribute__((used)) static void FUNC_12(struct sock *VAR_4, struct sk_buff *VAR_5,
     struct chtls_dev *VAR_6,
     int VAR_7, int VAR_8)
{
 struct cpl_abort_req_rss *VAR_9 = FUNC_1(VAR_5) + VAR_1;
 struct sk_buff *VAR_10;
 struct chtls_sock *VAR_11;
 unsigned int VAR_12;

 VAR_11 = FUNC_8(VAR_4);
 VAR_12 = FUNC_0(VAR_9);

 VAR_10 = FUNC_5(VAR_5, sizeof(struct cpl_abort_rpl), FUNC_6());
 if (!VAR_10) {
  VAR_9->status = (VAR_8 << 1) | VAR_7;
  FUNC_11(VAR_5, VAR_6, VAR_3);
  return;
 }

 FUNC_9(VAR_10, VAR_12, VAR_7);
 FUNC_10(VAR_10, VAR_0, VAR_8);
 if (FUNC_2(VAR_11)) {
  struct l2t_entry *VAR_13 = VAR_11->l2t_entry;

  if (VAR_13 && VAR_4->sk_state != VAR_2) {
   FUNC_3(VAR_11->egress_dev, VAR_10, VAR_13);
   return;
  }
 }
 FUNC_4(VAR_6->lldi->ports[0], VAR_10);
 FUNC_7(VAR_5);
}
