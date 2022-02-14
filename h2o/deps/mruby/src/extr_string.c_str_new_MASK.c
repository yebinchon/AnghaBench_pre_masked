
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* capa; } ;
struct TYPE_5__ {char* ptr; TYPE_1__ aux; void* len; } ;
struct TYPE_6__ {char* ary; TYPE_2__ heap; } ;
struct RString {TYPE_3__ as; } ;
typedef int mrb_state ;
typedef void* mrb_int ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char* FUNC_0 (struct RString*) ;
 int FUNC_1 (struct RString*) ;
 int FUNC_2 (struct RString*,size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 scalar_t__ FUNC_4 (int *,size_t) ;
 struct RString* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 scalar_t__ FUNC_7 (char const*) ;
 struct RString* FUNC_8 (int *,char const*,size_t) ;

__attribute__((used)) static struct RString*
FUNC_9(mrb_state *VAR_3, const char *VAR_4, size_t VAR_5)
{
  struct RString *VAR_6;

  if (VAR_4 && FUNC_7(VAR_4)) {
    return FUNC_8(VAR_3, VAR_4, VAR_5);
  }
  VAR_6 = FUNC_5(VAR_3);
  if (VAR_5 <= VAR_2) {
    FUNC_1(VAR_6);
    FUNC_2(VAR_6, VAR_5);
    if (VAR_4) {
      FUNC_3(VAR_6->as.ary, VAR_4, VAR_5);
    }
  }
  else {
    if (VAR_5 >= VAR_1) {
      FUNC_6(VAR_3, VAR_0, "string size too big");
    }
    VAR_6->as.heap.ptr = (char *)FUNC_4(VAR_3, VAR_5+1);
    VAR_6->as.heap.len = (mrb_int)VAR_5;
    VAR_6->as.heap.aux.capa = (mrb_int)VAR_5;
    if (VAR_4) {
      FUNC_3(VAR_6->as.heap.ptr, VAR_4, VAR_5);
    }
  }
  FUNC_0(VAR_6)[VAR_5] = '\0';
  return VAR_6;
}
