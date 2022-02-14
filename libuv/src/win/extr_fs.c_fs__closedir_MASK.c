
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ptr; } ;
typedef TYPE_1__ uv_fs_t ;
struct TYPE_7__ {int dir_handle; } ;
typedef TYPE_2__ uv_dir_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(uv_fs_t* VAR_0) {
  uv_dir_t* VAR_1;

  VAR_1 = VAR_0->ptr;
  FUNC_0(VAR_1->dir_handle);
  FUNC_2(VAR_0->ptr);
  FUNC_1(VAR_0, 0);
}
