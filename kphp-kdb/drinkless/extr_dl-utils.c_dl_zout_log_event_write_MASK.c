
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int left; int ptr; } ;
typedef TYPE_1__ dl_zout ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,void const*,size_t) ;
 int FUNC_2 (int,int,size_t) ;

int FUNC_3 (dl_zout *VAR_0, const void *VAR_1, int VAR_2) {
  int VAR_3 = -VAR_2 & 3;

  while (VAR_2) {
    int VAR_4 = VAR_2;
    if (VAR_0->left < VAR_2) {
      VAR_4 = VAR_0->left;
    }
    FUNC_1 (VAR_0->ptr, VAR_1, (size_t)VAR_4);
    VAR_0->ptr += VAR_4;
    VAR_0->left -= VAR_4;

    if ((VAR_2 -= VAR_4)) {
      FUNC_0 (VAR_0);
      VAR_1 += VAR_4;
    }
  }

  if (VAR_0->left < VAR_3) {
    FUNC_0 (VAR_0);
  }
  FUNC_2 (VAR_0->ptr, VAR_3, (size_t)VAR_3);
  VAR_0->ptr += VAR_3;
  VAR_0->left -= VAR_3;

  return VAR_2;
}
