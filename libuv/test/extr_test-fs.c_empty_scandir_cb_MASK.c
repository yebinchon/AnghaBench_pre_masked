
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fs_type; scalar_t__ result; int * ptr; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uv_dirent_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3(uv_fs_t* VAR_4) {
  uv_dirent_t VAR_5;

  FUNC_0(VAR_4 == &VAR_3);
  FUNC_0(VAR_4->fs_type == VAR_1);
  FUNC_0(VAR_4->result == 0);
  FUNC_0(VAR_4->ptr == ((void*)0));
  FUNC_0(VAR_0 == FUNC_2(VAR_4, &VAR_5));
  FUNC_1(VAR_4);
  VAR_2++;
}
