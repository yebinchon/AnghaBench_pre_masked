
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; TYPE_1__* loop; int * cb; int mode; int path; } ;
typedef TYPE_2__ uv_fs_t ;
typedef int ssize_t ;
struct TYPE_4__ {int cloexec_lock; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(uv_fs_t* VAR_1) {



  int VAR_2;

  if (VAR_1->cb != ((void*)0))
    FUNC_4(&VAR_1->loop->cloexec_lock);

  VAR_2 = FUNC_1(VAR_1->path, VAR_1->flags, VAR_1->mode);




  if (VAR_2 >= 0 && FUNC_2(VAR_2, 1) != 0) {
    VAR_2 = FUNC_3(VAR_2);
    if (VAR_2 != 0)
      FUNC_0();
    VAR_2 = -1;
  }

  if (VAR_1->cb != ((void*)0))
    FUNC_5(&VAR_1->loop->cloexec_lock);

  return VAR_2;

}
