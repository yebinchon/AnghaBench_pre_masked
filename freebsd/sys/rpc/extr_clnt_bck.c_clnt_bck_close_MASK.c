
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ct_data {int ct_lock; scalar_t__ ct_closed; scalar_t__ ct_closing; } ;
struct TYPE_3__ {scalar_t__ cl_private; } ;
typedef TYPE_1__ CLIENT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ct_data*,int *,int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ct_data*) ;

__attribute__((used)) static void
FUNC_5(CLIENT *VAR_2)
{
 struct ct_data *VAR_3 = (struct ct_data *) VAR_2->cl_private;

 FUNC_2(&VAR_3->ct_lock);

 if (VAR_3->ct_closed) {
  FUNC_3(&VAR_3->ct_lock);
  return;
 }

 if (VAR_3->ct_closing) {
  while (VAR_3->ct_closing)
   FUNC_1(VAR_3, &VAR_3->ct_lock, 0, "rpcclose", 0);
  FUNC_0(VAR_3->ct_closed, ("client should be closed"));
  FUNC_3(&VAR_3->ct_lock);
  return;
 }

 VAR_3->ct_closing = VAR_0;
 VAR_3->ct_closed = VAR_1;
 FUNC_3(&VAR_3->ct_lock);
 FUNC_4(VAR_3);
}
