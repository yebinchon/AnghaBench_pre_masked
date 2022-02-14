
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t capa; } ;
struct TYPE_8__ {char* ptr; size_t len; TYPE_1__ aux; } ;
struct TYPE_9__ {char* ary; TYPE_2__ heap; } ;
struct RString {TYPE_3__ as; scalar_t__ flags; int c; int tt; } ;
typedef int mrb_value ;
struct TYPE_10__ {int string_class; } ;
typedef TYPE_4__ mrb_state ;
typedef size_t mrb_int ;


 int FUNC_0 (struct RString*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_1 (struct RString*) ;
 scalar_t__ FUNC_2 (struct RString*) ;
 scalar_t__ FUNC_3 (struct RString*) ;
 int FUNC_4 (struct RString*) ;
 int FUNC_5 (struct RString*,size_t) ;
 int FUNC_6 (struct RString*) ;
 int FUNC_7 (char*,char*,size_t) ;
 scalar_t__ FUNC_8 (TYPE_4__*,size_t) ;
 int FUNC_9 (struct RString*) ;
 struct RString* FUNC_10 (int ) ;

mrb_value
FUNC_11(mrb_state *VAR_3, mrb_value VAR_4)
{
  struct RString *VAR_5 = FUNC_10(VAR_4);
  struct RString *VAR_6;
  char *VAR_7;
  mrb_int VAR_8;

  VAR_6 = (struct RString *)FUNC_8(VAR_3, sizeof(struct RString));
  VAR_6->tt = VAR_1;
  VAR_6->c = VAR_3->string_class;

  if (FUNC_3(VAR_5)) {
    VAR_6->flags = VAR_0;
    VAR_6->as.heap.ptr = VAR_5->as.heap.ptr;
    VAR_6->as.heap.len = VAR_5->as.heap.len;
    VAR_6->as.heap.aux.capa = 0;
  }
  else {
    VAR_6->flags = 0;
    if (FUNC_2(VAR_5)) {
      VAR_7 = VAR_5->as.ary;
      VAR_8 = FUNC_1(VAR_5);
    }
    else {
      VAR_7 = VAR_5->as.heap.ptr;
      VAR_8 = VAR_5->as.heap.len;
    }

    if (VAR_8 < VAR_2) {
      FUNC_4(VAR_6);
      FUNC_5(VAR_6, VAR_8);
      if (VAR_7) {
        FUNC_7(VAR_6->as.ary, VAR_7, VAR_8);
      }
      VAR_6->as.ary[VAR_8] = '\0';
    }
    else {
      VAR_6->as.heap.ptr = (char *)FUNC_8(VAR_3, (size_t)VAR_8+1);
      VAR_6->as.heap.len = VAR_8;
      VAR_6->as.heap.aux.capa = VAR_8;
      if (VAR_7) {
        FUNC_7(VAR_6->as.heap.ptr, VAR_7, VAR_8);
      }
      VAR_6->as.heap.ptr[VAR_8] = '\0';
    }
  }
  FUNC_6(VAR_6);
  FUNC_0(VAR_6);
  return FUNC_9(VAR_6);
}
