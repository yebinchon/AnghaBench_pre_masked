
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int message; int klass; } ;
struct TYPE_9__ {int error_code; int oom; TYPE_1__ error_msg; } ;
typedef TYPE_2__ git_error_state ;
struct TYPE_10__ {int message; int klass; } ;
typedef TYPE_3__ git_error ;
typedef int git_buf ;
struct TYPE_11__ {int error_buf; TYPE_3__* last_error; } ;


 TYPE_7__* VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

int FUNC_3(git_error_state *VAR_2, int VAR_3)
{
 git_error *VAR_4 = VAR_0->last_error;
 git_buf *VAR_5 = &VAR_0->error_buf;

 FUNC_2(VAR_2, 0, sizeof(git_error_state));

 if (!VAR_3)
  return 0;

 VAR_2->error_code = VAR_3;
 VAR_2->oom = (VAR_4 == &VAR_1);

 if (VAR_4) {
  VAR_2->error_msg.klass = VAR_4->klass;

  if (VAR_2->oom)
   VAR_2->error_msg.message = VAR_1.message;
  else
   VAR_2->error_msg.message = FUNC_0(VAR_5);
 }

 FUNC_1();
 return VAR_3;
}
