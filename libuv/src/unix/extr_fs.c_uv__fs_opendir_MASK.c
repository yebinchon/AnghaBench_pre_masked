
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ptr; int path; } ;
typedef TYPE_1__ uv_fs_t ;
struct TYPE_7__ {int * dir; } ;
typedef TYPE_2__ uv_dir_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(uv_fs_t* VAR_0) {
  uv_dir_t* VAR_1;

  VAR_1 = FUNC_2(sizeof(*VAR_1));
  if (VAR_1 == ((void*)0))
    goto error;

  VAR_1->dir = FUNC_0(VAR_0->path);
  if (VAR_1->dir == ((void*)0))
    goto error;

  VAR_0->ptr = VAR_1;
  return 0;

error:
  FUNC_1(VAR_1);
  VAR_0->ptr = ((void*)0);
  return -1;
}
