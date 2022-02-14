
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf_len; int left; int ptr; } ;
typedef TYPE_1__ dl_zout ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,void const*,int) ;
 int FUNC_2 (int,void const*,size_t) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4 (dl_zout *VAR_0, const void *VAR_1, int VAR_2) {
  if (FUNC_3 (VAR_2 > VAR_0->buf_len)) {
    FUNC_0 (VAR_0);
    return FUNC_1 (VAR_0, VAR_1, VAR_2);
  }
  int VAR_3 = VAR_2;
  while (VAR_2) {
    int VAR_4 = VAR_2;
    if (VAR_0->left < VAR_2) {
      VAR_4 = VAR_0->left;
    }
    FUNC_2 (VAR_0->ptr, VAR_1, (size_t)VAR_4);
    VAR_0->ptr += VAR_4;
    VAR_0->left -= VAR_4;

    if ((VAR_2 -= VAR_4)) {
      FUNC_0 (VAR_0);
      VAR_1 += VAR_4;
    }
  }
  return VAR_3;
}
