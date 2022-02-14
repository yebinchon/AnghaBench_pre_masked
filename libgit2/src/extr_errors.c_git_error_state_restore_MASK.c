
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ message; int klass; } ;
struct TYPE_6__ {int error_code; TYPE_1__ error_msg; scalar_t__ oom; } ;
typedef TYPE_2__ git_error_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;

int FUNC_4(git_error_state *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0();

 if (VAR_0 && VAR_0->error_msg.message) {
  if (VAR_0->oom)
   FUNC_1();
  else
   FUNC_3(VAR_0->error_msg.klass, VAR_0->error_msg.message);

  VAR_1 = VAR_0->error_code;
  FUNC_2(VAR_0, 0, sizeof(git_error_state));
 }

 return VAR_1;
}
