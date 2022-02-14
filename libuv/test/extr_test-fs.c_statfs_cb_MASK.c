
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ f_type; scalar_t__ f_bsize; scalar_t__ f_blocks; scalar_t__ f_bfree; scalar_t__ f_bavail; scalar_t__ f_files; scalar_t__ f_ffree; } ;
typedef TYPE_1__ uv_statfs_t ;
struct TYPE_6__ {scalar_t__ fs_type; scalar_t__ result; TYPE_1__* ptr; } ;
typedef TYPE_2__ uv_fs_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(uv_fs_t* VAR_2) {
  uv_statfs_t* VAR_3;

  FUNC_0(VAR_2->fs_type == VAR_0);
  FUNC_0(VAR_2->result == 0);
  FUNC_0(VAR_2->ptr != ((void*)0));
  VAR_3 = VAR_2->ptr;




  FUNC_0(VAR_3->f_type > 0);


  FUNC_0(VAR_3->f_bsize > 0);
  FUNC_0(VAR_3->f_blocks > 0);
  FUNC_0(VAR_3->f_bfree <= VAR_3->f_blocks);
  FUNC_0(VAR_3->f_bavail <= VAR_3->f_bfree);






  FUNC_0(VAR_3->f_ffree <= VAR_3->f_files);

  FUNC_1(VAR_2);
  FUNC_0(VAR_2->ptr == ((void*)0));
  VAR_1++;
}
