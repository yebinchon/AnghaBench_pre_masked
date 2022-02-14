
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_allocation; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct sock *VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_0(VAR_3 + VAR_0, VAR_2->sk_allocation);
 if (FUNC_1(VAR_4)) {
  FUNC_3(VAR_4, VAR_0);
  FUNC_2(VAR_2, VAR_4, VAR_1);
  FUNC_4(VAR_4);
 }
 return VAR_4;
}
