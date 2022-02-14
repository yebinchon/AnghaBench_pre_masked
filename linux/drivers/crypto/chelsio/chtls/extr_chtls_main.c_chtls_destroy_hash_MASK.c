
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_device {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct chtls_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct chtls_dev*,struct sock*) ;
 struct chtls_dev* FUNC_1 (struct tls_device*) ;

__attribute__((used)) static void FUNC_2(struct tls_device *VAR_1, struct sock *VAR_2)
{
 struct chtls_dev *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2->sk_state == VAR_0)
  FUNC_0(VAR_3, VAR_2);
}
