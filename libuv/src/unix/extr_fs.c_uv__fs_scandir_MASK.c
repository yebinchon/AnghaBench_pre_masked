
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** ptr; scalar_t__ nbufs; int path; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uv__dirent_t ;
typedef int ssize_t ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int ,int ***,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_2(uv_fs_t* VAR_2) {
  uv__dirent_t** VAR_3;
  int VAR_4;

  VAR_3 = ((void*)0);
  VAR_4 = FUNC_1(VAR_2->path, &VAR_3, VAR_0, VAR_1);


  VAR_2->nbufs = 0;

  if (VAR_4 == 0) {



    FUNC_0(VAR_3);
    VAR_3 = ((void*)0);
  } else if (VAR_4 == -1) {
    return VAR_4;
  }

  VAR_2->ptr = VAR_3;

  return VAR_4;
}
