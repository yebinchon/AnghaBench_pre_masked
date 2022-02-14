
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_abort_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sock*,int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct cpl_abort_req), VAR_1);
 if (VAR_4)
  FUNC_1(VAR_2, VAR_0, VAR_4);
}
