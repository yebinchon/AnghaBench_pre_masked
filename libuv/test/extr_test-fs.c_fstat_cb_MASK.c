
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_size; } ;
typedef TYPE_1__ uv_stat_t ;
struct TYPE_6__ {scalar_t__ fs_type; scalar_t__ result; TYPE_1__* ptr; } ;
typedef TYPE_2__ uv_fs_t ;
typedef int test_buf ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(uv_fs_t* VAR_2) {
  uv_stat_t* VAR_3 = VAR_2->ptr;
  FUNC_0(VAR_2->fs_type == VAR_0);
  FUNC_0(VAR_2->result == 0);
  FUNC_0(VAR_3->st_size == sizeof(test_buf));
  FUNC_1(VAR_2);
  VAR_1++;
}
