
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct chtls_sock {int kref; int ulp_mode; } ;
struct TYPE_2__ {int (* destroy ) (struct sock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int VAR_1 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int *,int ) ;
 struct chtls_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 TYPE_1__ VAR_2 ;

void FUNC_6(struct sock *VAR_3)
{
 struct chtls_sock *VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 FUNC_0(VAR_3);
 VAR_4->ulp_mode = VAR_0;
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 FUNC_3(&VAR_4->kref, VAR_1);
 VAR_3->sk_prot = &VAR_2;
 VAR_3->sk_prot->destroy(VAR_3);
}
