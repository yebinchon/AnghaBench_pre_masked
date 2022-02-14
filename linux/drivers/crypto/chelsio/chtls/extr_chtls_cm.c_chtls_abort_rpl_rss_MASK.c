
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_family; } ;
struct sk_buff {int dummy; } ;
struct cpl_abort_rpl_rss {int dummy; } ;
struct chtls_sock {int port_id; struct chtls_dev* cdev; } ;
struct chtls_dev {int tids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpl_abort_rpl_rss*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct cpl_abort_rpl_rss* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct chtls_sock*,int ) ;
 int FUNC_5 (struct chtls_sock*,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct chtls_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct cpl_abort_rpl_rss *VAR_6 = FUNC_3(VAR_5) + VAR_2;
 struct chtls_sock *VAR_7;
 struct chtls_dev *VAR_8;

 VAR_7 = FUNC_8(VAR_4);
 VAR_8 = VAR_7->cdev;

 if (FUNC_4(VAR_7, VAR_1)) {
  FUNC_5(VAR_7, VAR_1);
  if (!FUNC_4(VAR_7, VAR_0)) {
   if (VAR_4->sk_state == VAR_3) {
    FUNC_6(VAR_8->tids,
       VAR_7->port_id,
       FUNC_0(VAR_6),
       VAR_4->sk_family);
    FUNC_9(VAR_4);
   }
   FUNC_2(VAR_4);
   FUNC_1(VAR_4);
  }
 }
 FUNC_7(VAR_5);
}
