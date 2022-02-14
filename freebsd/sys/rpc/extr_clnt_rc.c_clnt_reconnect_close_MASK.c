
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rc_data {int rc_lock; TYPE_1__* rc_client; scalar_t__ rc_closed; } ;
struct TYPE_5__ {scalar_t__ cl_private; } ;
typedef TYPE_1__ CLIENT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(CLIENT *VAR_1)
{
 struct rc_data *VAR_2 = (struct rc_data *)VAR_1->cl_private;
 CLIENT *VAR_3;

 FUNC_2(&VAR_2->rc_lock);

 if (VAR_2->rc_closed) {
  FUNC_3(&VAR_2->rc_lock);
  return;
 }

 VAR_2->rc_closed = VAR_0;
 VAR_3 = VAR_2->rc_client;
 VAR_2->rc_client = ((void*)0);

 FUNC_3(&VAR_2->rc_lock);

 if (VAR_3) {
  FUNC_0(VAR_3);
  FUNC_1(VAR_3);
 }
}
