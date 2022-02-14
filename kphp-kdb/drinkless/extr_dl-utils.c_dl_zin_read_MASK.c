
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int left; int ptr; } ;
typedef TYPE_1__ dl_zin ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,int,size_t) ;

int FUNC_2 (dl_zin *VAR_0, void *VAR_1, int VAR_2) {
  int VAR_3 = VAR_2;
  while (VAR_2) {
    int VAR_4 = VAR_2;
    if (VAR_4 > VAR_0->left) {
      VAR_4 = VAR_0->left;
    }
    FUNC_1 (VAR_1, VAR_0->ptr, (size_t)VAR_4);
    VAR_0->ptr += VAR_4;
    VAR_0->left -= VAR_4;

    if ((VAR_2 -= VAR_4) && !FUNC_0 (VAR_0)) {
      return VAR_3 - VAR_2;
    }
    VAR_1 += VAR_4;
  }
  return VAR_3;
}
