
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_protocol; scalar_t__ sk_family; int sk_backlog_rcv; } ;
struct chtls_listen {struct sock* sk; struct chtls_dev* cdev; } ;
struct chtls_dev {int dummy; } ;
struct TYPE_2__ {int inet_rcv_saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 struct chtls_listen* FUNC_2 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (int *,int ,struct chtls_listen*) ;

__attribute__((used)) static int FUNC_6(struct chtls_dev *VAR_10, struct sock *VAR_11)
{
 struct chtls_listen *VAR_12;
 int VAR_13;

 if (VAR_11->sk_protocol != VAR_5)
  return -VAR_3;

 if (VAR_11->sk_family == VAR_6 &&
     FUNC_0(FUNC_1(VAR_11)->inet_rcv_saddr))
  return -VAR_1;

 VAR_11->sk_backlog_rcv = VAR_7;
 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_2;
 VAR_12->cdev = VAR_10;
 VAR_12->sk = VAR_11;
 FUNC_3(&VAR_9);
 VAR_13 = FUNC_5(&VAR_8,
          VAR_0, VAR_12);
 FUNC_4(&VAR_9);
 return VAR_13;
}
