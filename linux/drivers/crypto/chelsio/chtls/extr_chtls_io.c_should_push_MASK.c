
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int nonagle; } ;
struct sock {int dummy; } ;
struct chtls_sock {scalar_t__ wr_credits; scalar_t__ wr_max_credits; struct chtls_dev* cdev; } ;
struct chtls_dev {int dummy; } ;


 int VAR_0 ;
 struct chtls_sock* FUNC_0 (struct sock*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static bool FUNC_2(struct sock *VAR_1)
{
 struct chtls_sock *VAR_2 = FUNC_0(VAR_1);
 struct chtls_dev *VAR_3 = VAR_2->cdev;
 struct tcp_sock *VAR_4 = FUNC_1(VAR_1);




 if (!VAR_3)
  return 0;






 return VAR_2->wr_credits == VAR_2->wr_max_credits ||
  (VAR_4->nonagle & VAR_0);
}
