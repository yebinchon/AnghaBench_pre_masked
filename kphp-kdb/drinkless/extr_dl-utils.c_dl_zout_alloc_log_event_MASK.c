
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int left; void* ptr; } ;
typedef TYPE_1__ dl_zout ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (void*,int,size_t) ;

void *FUNC_3 (dl_zout *VAR_0, int VAR_1, int VAR_2) {
  int VAR_3 = -VAR_2 & 3;
  VAR_2 = (VAR_2 + 3) & -4;

  if (VAR_2 > VAR_0->left) {
    FUNC_1 (VAR_0);
  }

  FUNC_0 (VAR_2 >= 4 && VAR_2 <= VAR_0->left);

  void *VAR_4 = VAR_0->ptr;

  VAR_0->ptr += VAR_2;
  VAR_0->left -= VAR_2;

  *(unsigned int *)VAR_4 = (unsigned int)VAR_1;

  if (VAR_3) {
    FUNC_2 (VAR_0->ptr - VAR_3, VAR_3, (size_t)VAR_3);
  }

  return VAR_4;
}
