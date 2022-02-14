
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct RClass {int dummy; } ;
typedef int mrb_state ;
struct TYPE_3__ {scalar_t__ len; } ;
typedef TYPE_1__ mrb_input_stream_t ;


 struct RClass* VAR_0 ;
 struct RClass* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct RClass*,char*) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_1, mrb_input_stream_t *VAR_2)
{
  if (VAR_2->len < 0) {
    struct RClass *VAR_3 = FUNC_0(VAR_1, "IOError");
    if (VAR_3 == ((void*)0))
      VAR_3 = VAR_0;
    FUNC_1(VAR_1, VAR_3, "stream closed");
  }
}
