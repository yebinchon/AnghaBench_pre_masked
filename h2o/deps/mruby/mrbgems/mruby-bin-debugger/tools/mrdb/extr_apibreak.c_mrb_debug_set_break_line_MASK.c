
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int mrb_state ;
struct TYPE_9__ {scalar_t__ bpnum; scalar_t__ next_bpno; TYPE_3__* bp; int root_irep; } ;
typedef TYPE_4__ mrb_debug_context ;
typedef size_t int32_t ;
struct TYPE_6__ {char* file; scalar_t__ lineno; } ;
struct TYPE_7__ {TYPE_1__ linepoint; } ;
struct TYPE_8__ {scalar_t__ bpno; TYPE_2__ point; int type; int enable; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,scalar_t__) ;

int32_t
FUNC_4(mrb_state *VAR_10, mrb_debug_context *VAR_11, const char *VAR_12, uint16_t VAR_13)
{
  int32_t VAR_14;
  char* VAR_15;
  uint16_t VAR_16;

  if ((VAR_10 == ((void*)0))||(VAR_11 == ((void*)0))||(VAR_12 == ((void*)0))) {
    return VAR_8;
  }

  if (VAR_11->bpnum >= VAR_0) {
    return VAR_7;
  }

  if (VAR_11->next_bpno > VAR_1) {
    return VAR_6;
  }


  VAR_16 = FUNC_0(VAR_11->root_irep, VAR_12, VAR_13);
  if (VAR_16 == 0) {
    return VAR_4;
  }
  else if (VAR_16 == VAR_3) {
    return VAR_5;
  }

  VAR_15 = (char*)FUNC_1(VAR_10, FUNC_2(VAR_12) + 1);

  VAR_14 = VAR_11->bpnum;
  VAR_11->bp[VAR_14].bpno = VAR_11->next_bpno;
  VAR_11->next_bpno++;
  VAR_11->bp[VAR_14].enable = VAR_9;
  VAR_11->bp[VAR_14].type = VAR_2;
  VAR_11->bp[VAR_14].point.linepoint.lineno = VAR_13;
  VAR_11->bpnum++;

  FUNC_3(VAR_15, VAR_12, FUNC_2(VAR_12) + 1);

  VAR_11->bp[VAR_14].point.linepoint.file = VAR_15;

  return VAR_11->bp[VAR_14].bpno;
}
