
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_4__ {int iv; } ;
struct TYPE_5__ {TYPE_1__ tls; } ;
struct TYPE_6__ {TYPE_2__ ulp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sk_buff const*) ;
 int FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_4, const struct sk_buff *VAR_5)
{
 int VAR_6 = FUNC_2(VAR_4, VAR_5->len) * VAR_0;
 int VAR_7 = VAR_3 + FUNC_1(VAR_5);

 if ((VAR_7 + VAR_1 + VAR_6) <
     VAR_2) {
  FUNC_0(VAR_5)->ulp.tls.iv = 1;
  return 1;
 }
 FUNC_0(VAR_5)->ulp.tls.iv = 0;
 return 0;
}
