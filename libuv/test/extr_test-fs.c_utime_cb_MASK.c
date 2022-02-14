
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ result; scalar_t__ fs_type; TYPE_2__* data; } ;
typedef TYPE_1__ uv_fs_t ;
struct TYPE_7__ {int mtime; int atime; int path; } ;
typedef TYPE_2__ utime_check_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(uv_fs_t* VAR_3) {
  utime_check_t* VAR_4;

  FUNC_0(VAR_3 == &VAR_2);
  FUNC_0(VAR_3->result == 0);
  FUNC_0(VAR_3->fs_type == VAR_0);

  VAR_4 = VAR_3->data;
  FUNC_1(VAR_4->path, VAR_4->atime, VAR_4->mtime);

  FUNC_2(VAR_3);
  VAR_1++;
}
