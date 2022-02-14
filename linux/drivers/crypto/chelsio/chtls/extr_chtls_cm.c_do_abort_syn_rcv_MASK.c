
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int orphan_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, struct sock *VAR_3)
{





 if (FUNC_4(VAR_3->sk_state == VAR_1)) {
  FUNC_2(VAR_2, VAR_3);







  FUNC_6(VAR_2);
  FUNC_5((VAR_2)->sk_prot->orphan_count);
  FUNC_1(VAR_2);
  FUNC_0(VAR_2);
 } else {
  if (FUNC_3(VAR_2, VAR_0)) {
   FUNC_1(VAR_2);
   FUNC_0(VAR_2);
  }
 }
}
