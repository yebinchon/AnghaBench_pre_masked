
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int size; int ptr; } ;
struct proxy_stream {TYPE_3__* target; TYPE_2__* output; TYPE_2__ input; int source; int payload; TYPE_6__* filter; } ;
typedef int git_writestream ;
struct TYPE_12__ {int member_0; } ;
typedef TYPE_1__ git_error_state ;
typedef TYPE_2__ git_buf ;
struct TYPE_15__ {int (* apply ) (TYPE_6__*,int ,TYPE_2__*,TYPE_2__*,int ) ;} ;
struct TYPE_14__ {int (* close ) (TYPE_3__*) ;int (* write ) (TYPE_3__*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct proxy_stream*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_6__*,int ,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(git_writestream *VAR_1)
{
 struct proxy_stream *VAR_2 = (struct proxy_stream *)VAR_1;
 git_buf *VAR_3;
 git_error_state VAR_4 = {0};
 int VAR_5;

 FUNC_0(VAR_2);

 VAR_5 = VAR_2->filter->apply(
  VAR_2->filter,
  VAR_2->payload,
  VAR_2->output,
  &VAR_2->input,
  VAR_2->source);

 if (VAR_5 == VAR_0) {
  VAR_3 = &VAR_2->input;
 } else if (VAR_5 == 0) {
  FUNC_1(VAR_2->output);
  VAR_3 = VAR_2->output;
 } else {


  FUNC_2(&VAR_4, VAR_5);
  VAR_2->target->close(VAR_2->target);
  FUNC_3(&VAR_4);
  return VAR_5;
 }

 if ((VAR_5 = VAR_2->target->write(
   VAR_2->target, VAR_3->ptr, VAR_3->size)) == 0)
  VAR_5 = VAR_2->target->close(VAR_2->target);

 return VAR_5;
}
