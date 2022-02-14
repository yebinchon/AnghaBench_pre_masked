
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_allocation; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int type; } ;
struct chtls_sock {TYPE_3__ tlshws; } ;
struct TYPE_5__ {int ofld; int type; } ;
struct TYPE_6__ {TYPE_1__ tls; } ;
struct TYPE_8__ {TYPE_2__ ulp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sock*,int) ;
 struct chtls_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct sock *VAR_3, int VAR_4, bool VAR_5)
{
 struct chtls_sock *VAR_6 = FUNC_4(VAR_3);
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_1(((VAR_5 ? 0 : VAR_4) + VAR_1 +
   VAR_0 + FUNC_3(VAR_3, VAR_4)),
   VAR_3->sk_allocation);
 if (FUNC_2(VAR_7)) {
  FUNC_6(VAR_7, (VAR_1 +
       VAR_0 + FUNC_3(VAR_3, VAR_4)));
  FUNC_5(VAR_3, VAR_7, VAR_2);
  FUNC_7(VAR_7);
  FUNC_0(VAR_7)->ulp.tls.ofld = 1;
  FUNC_0(VAR_7)->ulp.tls.type = VAR_6->tlshws.type;
 }
 return VAR_7;
}
