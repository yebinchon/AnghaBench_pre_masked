
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_7__ {int * class_name; scalar_t__ method_name; } ;
struct TYPE_6__ {scalar_t__ file; } ;
struct TYPE_8__ {TYPE_2__ methodpoint; TYPE_1__ linepoint; } ;
struct TYPE_9__ {int type; TYPE_3__ point; } ;
typedef TYPE_4__ mrb_debug_breakpoint ;




 int FUNC_0 (int *,void*) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_0, mrb_debug_breakpoint *VAR_1)
{
  switch(VAR_1->type) {
    case 129:
      FUNC_0(VAR_0, (void*)VAR_1->point.linepoint.file);
      break;
    case 128:
      FUNC_0(VAR_0, (void*)VAR_1->point.methodpoint.method_name);
      if (VAR_1->point.methodpoint.class_name != ((void*)0)) {
        FUNC_0(VAR_0, (void*)VAR_1->point.methodpoint.class_name);
      }
      break;
    default:
      break;
  }
}
