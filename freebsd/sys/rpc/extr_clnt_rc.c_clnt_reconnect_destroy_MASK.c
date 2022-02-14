
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_data {int rc_lock; int rc_ucred; scalar_t__ rc_backchannel; scalar_t__ rc_client; scalar_t__ cl_private; } ;
typedef int SVCXPRT ;
typedef struct rc_data CLIENT ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rc_data*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(CLIENT *VAR_0)
{
 struct rc_data *VAR_1 = (struct rc_data *)VAR_0->cl_private;
 SVCXPRT *VAR_2;

 if (VAR_1->rc_client)
  FUNC_0(VAR_1->rc_client);
 if (VAR_1->rc_backchannel) {
  VAR_2 = (SVCXPRT *)VAR_1->rc_backchannel;
  FUNC_5(VAR_2);
  FUNC_1(VAR_2);
 }
 FUNC_2(VAR_1->rc_ucred);
 FUNC_4(&VAR_1->rc_lock);
 FUNC_3(VAR_1, sizeof(*VAR_1));
 FUNC_3(VAR_0, sizeof (CLIENT));
}
