
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int digest_length; } ;
struct mrb_md {TYPE_1__ ctx; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_1, struct mrb_md *VAR_2)
{
  unsigned char VAR_3[VAR_0];

  FUNC_1(&VAR_2->ctx, VAR_3);
  FUNC_2(&VAR_2->ctx);
  return FUNC_0(VAR_1, (char *)VAR_3, VAR_2->ctx.digest_length);
}
