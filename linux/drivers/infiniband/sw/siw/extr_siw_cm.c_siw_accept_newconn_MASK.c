
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct socket {TYPE_1__* sk; } ;
struct siw_cep {scalar_t__ state; struct socket* sock; struct siw_cep* listen_cep; int sk_error_report; int sk_write_space; int sk_data_ready; int sk_state_change; int sdev; } ;
struct TYPE_2__ {int sk_rmem_alloc; struct siw_cep* sk_user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct socket*,struct socket**,int ) ;
 int FUNC_2 (struct socket*,int ,int ,char*,int) ;
 struct siw_cep* FUNC_3 (int ) ;
 int FUNC_4 (struct siw_cep*) ;
 int FUNC_5 (struct siw_cep*) ;
 int FUNC_6 (struct siw_cep*) ;
 int FUNC_7 (struct siw_cep*) ;
 scalar_t__ FUNC_8 (struct siw_cep*,int) ;
 int FUNC_9 (struct siw_cep*,int ) ;
 int FUNC_10 (struct siw_cep*,char*,...) ;
 int FUNC_11 (struct siw_cep*) ;
 int FUNC_12 (struct socket*) ;
 int VAR_7 ;
 int FUNC_13 (struct socket*) ;

__attribute__((used)) static void FUNC_14(struct siw_cep *VAR_8)
{
 struct socket *VAR_9 = VAR_8->sock;
 struct socket *VAR_10 = ((void*)0);
 struct siw_cep *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 if (VAR_8->state != VAR_4)
  goto error;

 VAR_11 = FUNC_3(VAR_8->sdev);
 if (!VAR_11)
  goto error;






 if (FUNC_8(VAR_11, 4) != 0)
  goto error;





 VAR_11->sk_state_change = VAR_8->sk_state_change;
 VAR_11->sk_data_ready = VAR_8->sk_data_ready;
 VAR_11->sk_write_space = VAR_8->sk_write_space;
 VAR_11->sk_error_report = VAR_8->sk_error_report;

 VAR_12 = FUNC_1(VAR_9, &VAR_10, VAR_1);
 if (VAR_12 != 0) {



  FUNC_10(VAR_8, "kernel_accept() error: %d\n", VAR_12);
  goto error;
 }
 VAR_11->sock = VAR_10;
 FUNC_4(VAR_11);
 VAR_10->sk->sk_user_data = VAR_11;

 if (VAR_7 == 0) {
  int VAR_13 = 1;

  VAR_12 = FUNC_2(VAR_10, VAR_5, VAR_6,
           (char *)&VAR_13, sizeof(VAR_13));
  if (VAR_12) {
   FUNC_10(VAR_8, "setsockopt NODELAY error: %d\n", VAR_12);
   goto error;
  }
 }
 VAR_11->state = VAR_3;

 VAR_12 = FUNC_9(VAR_11, VAR_2);
 if (VAR_12)
  goto error;



 VAR_11->listen_cep = VAR_8;
 FUNC_4(VAR_8);

 if (FUNC_0(&VAR_10->sk->sk_rmem_alloc)) {



  FUNC_10(VAR_8, "immediate mpa request\n");

  FUNC_7(VAR_11);
  VAR_12 = FUNC_11(VAR_11);
  FUNC_6(VAR_11);

  if (VAR_12 != -VAR_0) {
   FUNC_5(VAR_8);
   VAR_11->listen_cep = ((void*)0);
   if (VAR_12)
    goto error;
  }
 }
 return;

error:
 if (VAR_11)
  FUNC_5(VAR_11);

 if (VAR_10) {
  FUNC_12(VAR_10);
  FUNC_13(VAR_10);
  VAR_11->sock = ((void*)0);
 }
 FUNC_10(VAR_8, "error %d\n", VAR_12);
}
