
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,int ) ;
 scalar_t__ FUNC_1 (struct sock*,struct sk_buff const*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_1, const struct sk_buff *VAR_2)
{
 return FUNC_1(VAR_1, VAR_2) ? (FUNC_0(VAR_1, VAR_2->len) *
   VAR_0) : 0;
}
