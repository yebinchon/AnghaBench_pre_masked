
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct chtls_sock {int sk; } ;
struct TYPE_2__ {int nr_frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct sk_buff const*) ;
 TYPE_1__* FUNC_1 (struct sk_buff const*) ;
 int FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_3(struct chtls_sock *VAR_2, const struct sk_buff *VAR_3,
    bool VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_1;
 VAR_5 += VAR_0;
 VAR_5 += FUNC_0(VAR_2->sk, VAR_3);

 if (VAR_4)
  return VAR_5;


 if (!FUNC_2(VAR_3))
  FUNC_1(VAR_3)->nr_frags++;

 return VAR_5;
}
