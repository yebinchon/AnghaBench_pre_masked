
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_protocol; } ;
struct chtls_listen {struct sock* sk; struct chtls_dev* cdev; } ;
struct chtls_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct chtls_listen* FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,struct chtls_listen*) ;

__attribute__((used)) static void FUNC_4(struct chtls_dev *VAR_5, struct sock *VAR_6)
{
 struct chtls_listen *VAR_7;

 if (VAR_6->sk_protocol != VAR_2)
  return;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return;
 VAR_7->cdev = VAR_5;
 VAR_7->sk = VAR_6;
 FUNC_1(&VAR_4);
 FUNC_3(&VAR_3,
    VAR_0, VAR_7);
 FUNC_2(&VAR_4);
}
