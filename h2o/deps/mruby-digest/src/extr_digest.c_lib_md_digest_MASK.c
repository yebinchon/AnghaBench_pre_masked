
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int digest_length; } ;
struct mrb_md {TYPE_1__ ctx; } ;
typedef TYPE_1__ picohash_ctx_t ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned char*) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_1, const struct mrb_md *VAR_2)
{
  picohash_ctx_t VAR_3;
  unsigned char VAR_4[VAR_0];

  VAR_3 = VAR_2->ctx;
  FUNC_1(&VAR_3, VAR_4);
  return FUNC_0(VAR_1, (char *)VAR_4, VAR_3.digest_length);
}
