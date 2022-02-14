
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fs_type; scalar_t__ result; scalar_t__ data; } ;
typedef TYPE_1__ uv_fs_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(uv_fs_t* VAR_2) {
  FUNC_0(VAR_2->fs_type == VAR_0);
  FUNC_0(VAR_2->result == 0);
  VAR_1++;
  FUNC_2(VAR_2);
  FUNC_1("test_file", *(int*)VAR_2->data);
}
