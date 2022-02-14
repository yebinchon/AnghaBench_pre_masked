
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fs_type; scalar_t__ result; int path; } ;
typedef TYPE_1__ uv_fs_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(uv_fs_t* VAR_3) {
  FUNC_0(VAR_3->fs_type == VAR_0);
  if (VAR_3->result < 0) {
    FUNC_1(VAR_2, "async open error: %d\n", (int) VAR_3->result);
    FUNC_0(0);
  }
  VAR_1++;
  FUNC_0(VAR_3->path);
  FUNC_2(VAR_3);
}
