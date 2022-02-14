
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int result; TYPE_3__* ptr; } ;
typedef TYPE_1__ uv_fs_t ;
struct TYPE_6__ {int * name; } ;
typedef TYPE_2__ uv_dirent_t ;
struct TYPE_7__ {TYPE_2__* dirents; } ;
typedef TYPE_3__ uv_dir_t ;


 int FUNC_0 (char*) ;

void FUNC_1(uv_fs_t* VAR_0) {
  uv_dir_t* VAR_1;
  uv_dirent_t* VAR_2;
  int VAR_3;

  if (VAR_0->ptr == ((void*)0))
    return;

  VAR_1 = VAR_0->ptr;
  VAR_2 = VAR_1->dirents;
  VAR_0->ptr = ((void*)0);

  if (VAR_2 == ((void*)0))
    return;

  for (VAR_3 = 0; VAR_3 < VAR_0->result; ++VAR_3) {
    FUNC_0((char*) VAR_2[VAR_3].name);
    VAR_2[VAR_3].name = ((void*)0);
  }
}
