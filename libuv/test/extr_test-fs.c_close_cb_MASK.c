
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fs_type; scalar_t__ result; } ;
typedef TYPE_1__ uv_fs_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *,char*,int ) ;

__attribute__((used)) static void FUNC_3(uv_fs_t* VAR_6) {
  int VAR_7;
  FUNC_0(VAR_6 == &VAR_2);
  FUNC_0(VAR_6->fs_type == VAR_0);
  FUNC_0(VAR_6->result == 0);
  VAR_1++;
  FUNC_1(VAR_6);
  if (VAR_1 == 3) {
    VAR_7 = FUNC_2(VAR_3, &VAR_5, "test_file2", VAR_4);
    FUNC_0(VAR_7 == 0);
  }
}
