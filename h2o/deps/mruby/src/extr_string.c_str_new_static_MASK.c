
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ capa; } ;
struct TYPE_6__ {char* ptr; TYPE_1__ aux; scalar_t__ len; } ;
struct TYPE_5__ {TYPE_3__ heap; } ;
struct RString {int flags; TYPE_2__ as; } ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct RString* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static struct RString*
FUNC_2(mrb_state *VAR_3, const char *VAR_4, size_t VAR_5)
{
  struct RString *VAR_6;

  if (VAR_5 >= VAR_1) {
    FUNC_1(VAR_3, VAR_0, "string size too big");
  }
  VAR_6 = FUNC_0(VAR_3);
  VAR_6->as.heap.len = (mrb_int)VAR_5;
  VAR_6->as.heap.aux.capa = 0;
  VAR_6->as.heap.ptr = (char *)VAR_4;
  VAR_6->flags = VAR_2;

  return VAR_6;
}
