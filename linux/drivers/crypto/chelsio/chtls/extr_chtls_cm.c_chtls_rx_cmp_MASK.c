
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_rx_tls_cmp {int dummy; } ;
struct chtls_dev {int tids; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct cpl_rx_tls_cmp*) ;
 int VAR_1 ;
 struct cpl_rx_tls_cmp* FUNC_1 (struct sk_buff*) ;
 struct sock* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (int ,struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct chtls_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct cpl_rx_tls_cmp *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5 = FUNC_0(VAR_4);
 struct sock *VAR_6;

 VAR_6 = FUNC_2(VAR_2->tids, VAR_5);
 if (FUNC_6(!VAR_6)) {
  FUNC_3("can't find conn. for hwtid %u.\n", VAR_5);
  return -VAR_0;
 }
 FUNC_5(VAR_3, ((void*)0));
 FUNC_4(VAR_1, VAR_6, VAR_3);

 return 0;
}
