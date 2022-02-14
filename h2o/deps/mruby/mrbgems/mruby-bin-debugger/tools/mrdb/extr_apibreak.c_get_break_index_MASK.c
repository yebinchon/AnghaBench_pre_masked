
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t bpnum; TYPE_1__* bp; } ;
typedef TYPE_2__ mrb_debug_context ;
typedef size_t int32_t ;
struct TYPE_4__ {size_t bpno; } ;


 char VAR_0 ;
 size_t VAR_1 ;
 char VAR_2 ;

__attribute__((used)) static int32_t
FUNC_0(mrb_debug_context *VAR_3, uint32_t VAR_4)
{
  uint32_t VAR_5;
  int32_t VAR_6;
  char VAR_7 = VAR_0;

  for(VAR_5 = 0 ; VAR_5 < VAR_3->bpnum; VAR_5++) {
    if (VAR_3->bp[VAR_5].bpno == VAR_4) {
      VAR_7 = VAR_2;
      VAR_6 = VAR_5;
      break;
    }
  }

  if (VAR_7 == VAR_0) {
    return VAR_1;
  }

  return VAR_6;
}
