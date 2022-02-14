
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int len; char* buf; } ;
struct xdiff_emit_state {TYPE_3__ remainder; int line_fn; } ;
struct TYPE_5__ {char* ptr; int size; } ;
typedef TYPE_1__ mmbuffer_t ;


 int FUNC_0 (struct xdiff_emit_state*,char*,int) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, mmbuffer_t *VAR_1, int VAR_2)
{
 struct xdiff_emit_state *VAR_3 = VAR_0;
 int VAR_4;

 if (!VAR_3->line_fn)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_1[VAR_4].ptr[VAR_1[VAR_4].size-1] != '\n') {

   FUNC_1(&VAR_3->remainder, VAR_1[VAR_4].ptr, VAR_1[VAR_4].size);
   continue;
  }


  if (!VAR_3->remainder.len) {
   FUNC_0(VAR_3, VAR_1[VAR_4].ptr, VAR_1[VAR_4].size);
   continue;
  }
  FUNC_1(&VAR_3->remainder, VAR_1[VAR_4].ptr, VAR_1[VAR_4].size);
  FUNC_0(VAR_3, VAR_3->remainder.buf, VAR_3->remainder.len);
  FUNC_2(&VAR_3->remainder);
 }
 if (VAR_3->remainder.len) {
  FUNC_0(VAR_3, VAR_3->remainder.buf, VAR_3->remainder.len);
  FUNC_2(&VAR_3->remainder);
 }
 return 0;
}
