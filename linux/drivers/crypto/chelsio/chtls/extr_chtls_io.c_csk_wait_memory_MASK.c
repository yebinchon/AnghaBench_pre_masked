
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_shutdown; int sk_write_pending; scalar_t__ sk_err; TYPE_1__* sk_socket; } ;
struct chtls_dev {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct chtls_dev*,struct sock*) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,struct sock*) ;
 int FUNC_8 (int ,struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,long*,int,int *) ;
 int FUNC_11 (long) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_12(struct chtls_dev *VAR_10,
      struct sock *VAR_11, long *VAR_12)
{
 FUNC_0(VAR_8, VAR_9);
 int VAR_13 = 0;
 long VAR_14;
 long VAR_15 = 0;
 bool VAR_16;

 VAR_14 = *VAR_12;
 VAR_16 = (*VAR_12 ? 0 : 1);
 if (FUNC_2(VAR_10, VAR_11)) {
  VAR_14 = (FUNC_3() % (VAR_2 / 5)) + 2;
  VAR_15 = (FUNC_3() % (VAR_2 / 5)) + 2;
 }

 FUNC_1(FUNC_9(VAR_11), &VAR_8);
 while (1) {
  FUNC_8(VAR_5, VAR_11);

  if (VAR_11->sk_err || (VAR_11->sk_shutdown & VAR_4))
   goto do_error;
  if (!*VAR_12) {
   if (VAR_16)
    FUNC_5(VAR_6, &VAR_11->sk_socket->flags);
   goto do_nonblock;
  }
  if (FUNC_6(VAR_7))
   goto do_interrupted;
  FUNC_7(VAR_5, VAR_11);
  if (FUNC_2(VAR_10, VAR_11) && !VAR_15)
   break;

  FUNC_5(VAR_6, &VAR_11->sk_socket->flags);
  VAR_11->sk_write_pending++;
  FUNC_10(VAR_11, &VAR_14, VAR_11->sk_err ||
         (VAR_11->sk_shutdown & VAR_4) ||
         (FUNC_2(VAR_10, VAR_11) && !VAR_15), &VAR_8);
  VAR_11->sk_write_pending--;

  if (VAR_15) {
   VAR_15 -= VAR_14;
   VAR_14 = *VAR_12;
   if (VAR_14 != VAR_3) {
    VAR_14 -= VAR_15;
    if (VAR_14 < 0)
     VAR_14 = 0;
   }
   VAR_15 = 0;
  }
  *VAR_12 = VAR_14;
 }
do_rm_wq:
 FUNC_4(FUNC_9(VAR_11), &VAR_8);
 return VAR_13;
do_error:
 VAR_13 = -VAR_1;
 goto do_rm_wq;
do_nonblock:
 VAR_13 = -VAR_0;
 goto do_rm_wq;
do_interrupted:
 VAR_13 = FUNC_11(*VAR_12);
 goto do_rm_wq;
}
