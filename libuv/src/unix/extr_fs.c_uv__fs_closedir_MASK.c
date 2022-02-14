
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* ptr; } ;
typedef TYPE_1__ uv_fs_t ;
struct TYPE_6__ {int * dir; } ;
typedef TYPE_2__ uv_dir_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(uv_fs_t* VAR_0) {
  uv_dir_t* VAR_1;

  VAR_1 = VAR_0->ptr;

  if (VAR_1->dir != ((void*)0)) {
    FUNC_0(VAR_1->dir);
    VAR_1->dir = ((void*)0);
  }

  FUNC_1(VAR_0->ptr);
  VAR_0->ptr = ((void*)0);
  return 0;
}
