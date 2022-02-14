
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {int rcu; int * fasync_list; int wait; } ;
struct sock {int * sk_wq; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct socket_wq*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 struct socket_wq* FUNC_7 (int *) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int ,int *) ;
 long FUNC_10 (long) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct sock*,unsigned int) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (long) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_16(struct sock *VAR_5, unsigned int VAR_6)
{
 FUNC_0(VAR_4, VAR_3);
 struct socket_wq VAR_7;
 long VAR_8;
 int VAR_9 = 0;

 VAR_8 = 200;





 if (!VAR_5->sk_wq) {
  FUNC_5(&VAR_7.wait);
  VAR_7.fasync_list = ((void*)0);
  FUNC_4(&VAR_7.rcu);
  FUNC_1(VAR_5->sk_wq, &VAR_7);
 }

 FUNC_3(FUNC_14(VAR_5), &VAR_4);
 while (!FUNC_13(VAR_5, VAR_6)) {
  if (!VAR_8) {
   VAR_9 = -VAR_0;
   break;
  }
  if (FUNC_12(VAR_3)) {
   VAR_9 = FUNC_15(VAR_8);
   break;
  }
  FUNC_11(VAR_2);
  FUNC_8(VAR_5);
  if (!FUNC_13(VAR_5, VAR_6))
   VAR_8 = FUNC_10(VAR_8);
  FUNC_2(VAR_1);
  FUNC_6(VAR_5);
 }
 FUNC_9(FUNC_14(VAR_5), &VAR_4);

 if (FUNC_7(VAR_5->sk_wq) == &VAR_7)
  VAR_5->sk_wq = ((void*)0);
 return VAR_9;
}
