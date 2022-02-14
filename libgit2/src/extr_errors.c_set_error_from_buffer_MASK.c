
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int klass; int message; } ;
typedef TYPE_1__ git_error ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_2__ git_buf ;
struct TYPE_6__ {TYPE_1__* last_error; TYPE_2__ error_buf; TYPE_1__ error_t; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1)
{
 git_error *VAR_2 = &VAR_0->error_t;
 git_buf *VAR_3 = &VAR_0->error_buf;

 VAR_2->message = VAR_3->ptr;
 VAR_2->klass = VAR_1;

 VAR_0->last_error = VAR_2;
}
