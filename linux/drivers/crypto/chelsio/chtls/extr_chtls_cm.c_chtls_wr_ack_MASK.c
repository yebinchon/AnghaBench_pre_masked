
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_fw4_ack {int dummy; } ;
struct chtls_dev {int tids; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct cpl_fw4_ack*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct cpl_fw4_ack* FUNC_1 (struct sk_buff*) ;
 struct sock* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (int ,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct chtls_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct cpl_fw4_ack *VAR_5 = FUNC_1(VAR_4) + VAR_1;
 unsigned int VAR_6 = FUNC_0(VAR_5);
 struct sock *VAR_7;

 VAR_7 = FUNC_2(VAR_3->tids, VAR_6);
 if (FUNC_5(!VAR_7)) {
  FUNC_3("can't find conn. for hwtid %u.\n", VAR_6);
  return -VAR_0;
 }
 FUNC_4(VAR_2, VAR_7, VAR_4);

 return 0;
}
