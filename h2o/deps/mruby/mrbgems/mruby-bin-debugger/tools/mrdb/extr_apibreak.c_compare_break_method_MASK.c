
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_method_t ;
struct TYPE_6__ {char const* method_name; int * class_name; } ;
typedef TYPE_2__ mrb_debug_methodpoint ;
struct TYPE_5__ {TYPE_2__ methodpoint; } ;
struct TYPE_7__ {int bpno; TYPE_1__ point; } ;
typedef TYPE_3__ mrb_debug_breakpoint ;
typedef scalar_t__ mrb_bool ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 struct RClass* FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *,struct RClass*) ;
 int FUNC_6 (int *,struct RClass**,int ) ;
 char* FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;

__attribute__((used)) static int32_t
FUNC_10(mrb_state *VAR_3, mrb_debug_breakpoint *VAR_4, struct RClass *VAR_5, mrb_sym VAR_6, mrb_bool* VAR_7)
{
  const char* VAR_8;
  const char* VAR_9;
  mrb_method_t VAR_10;
  struct RClass* VAR_11;
  const char* VAR_12;
  mrb_sym VAR_13;
  mrb_debug_methodpoint *VAR_14;
  mrb_bool VAR_15;

  VAR_9 = FUNC_7(VAR_3, VAR_6);

  VAR_14 = &VAR_4->point.methodpoint;
  if (FUNC_9(VAR_14->method_name, VAR_9) == 0) {
    VAR_8 = FUNC_5(VAR_3, VAR_5);
    if (VAR_8 == ((void*)0)) {
      if (VAR_14->class_name == ((void*)0)) {
        return VAR_4->bpno;
      }
    }
    else if (VAR_14->class_name != ((void*)0)) {
      VAR_10 = FUNC_6(VAR_3, &VAR_5, VAR_6);
      if (FUNC_1(VAR_10)) {
        return VAR_1;
      }
      if (FUNC_0(VAR_10)) {
        *VAR_7 = VAR_2;
      }

      VAR_15 = FUNC_3(VAR_3, VAR_14->class_name);
      if (VAR_15 == VAR_0) {
        return VAR_1;
      }

      VAR_11 = FUNC_4(VAR_3, VAR_14->class_name);
      VAR_13 = FUNC_8(FUNC_2(VAR_3, VAR_14->method_name));
      VAR_10 = FUNC_6(VAR_3, &VAR_11, VAR_13);
      if (FUNC_1(VAR_10)) {
        return VAR_1;
      }

      VAR_8 = FUNC_5(VAR_3, VAR_5);
      VAR_12 = FUNC_5(VAR_3, VAR_11);
      if (FUNC_9(VAR_12, VAR_8) == 0) {
        return VAR_4->bpno;
      }
    }
  }
  return VAR_1;
}
