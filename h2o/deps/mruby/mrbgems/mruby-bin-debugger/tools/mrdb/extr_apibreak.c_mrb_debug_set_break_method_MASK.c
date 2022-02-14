
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_9__ {scalar_t__ bpnum; scalar_t__ next_bpno; TYPE_3__* bp; } ;
typedef TYPE_4__ mrb_debug_context ;
typedef size_t int32_t ;
struct TYPE_6__ {char* method_name; char* class_name; } ;
struct TYPE_7__ {TYPE_1__ methodpoint; } ;
struct TYPE_8__ {scalar_t__ bpno; TYPE_2__ point; int type; int enable; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;

int32_t
FUNC_3(mrb_state *VAR_7, mrb_debug_context *VAR_8, const char *VAR_9, const char *VAR_10)
{
  int32_t VAR_11;
  char* VAR_12;
  char* VAR_13;

  if ((VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0)) || (VAR_10 == ((void*)0))) {
    return VAR_5;
  }

  if (VAR_8->bpnum >= VAR_0) {
    return VAR_4;
  }

  if (VAR_8->next_bpno > VAR_1) {
    return VAR_3;
  }

  if (VAR_9 != ((void*)0)) {
    VAR_12 = (char*)FUNC_0(VAR_7, FUNC_1(VAR_9) + 1);
    FUNC_2(VAR_12, VAR_9, FUNC_1(VAR_9) + 1);
  }
  else {
    VAR_12 = ((void*)0);
  }

  VAR_13 = (char*)FUNC_0(VAR_7, FUNC_1(VAR_10) + 1);

  FUNC_2(VAR_13, VAR_10, FUNC_1(VAR_10) + 1);

  VAR_11 = VAR_8->bpnum;
  VAR_8->bp[VAR_11].bpno = VAR_8->next_bpno;
  VAR_8->next_bpno++;
  VAR_8->bp[VAR_11].enable = VAR_6;
  VAR_8->bp[VAR_11].type = VAR_2;
  VAR_8->bp[VAR_11].point.methodpoint.method_name = VAR_13;
  VAR_8->bp[VAR_11].point.methodpoint.class_name = VAR_12;
  VAR_8->bpnum++;

  return VAR_8->bp[VAR_11].bpno;
}
