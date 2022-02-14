
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int loop; } ;
typedef TYPE_1__ uv_timer_t ;
struct TYPE_7__ {scalar_t__ result; scalar_t__ fs_type; int path; } ;
typedef TYPE_2__ uv_fs_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*,int ,int ,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(uv_timer_t* VAR_3) {
  int VAR_4;
  uv_fs_t VAR_5;


  VAR_4 = FUNC_3(VAR_3->loop, &VAR_5, VAR_2, 0, 0, ((void*)0));
  FUNC_0(VAR_4 == 0);
  FUNC_0(VAR_5.result == 0);
  FUNC_0(VAR_5.fs_type == VAR_0);
  FUNC_0(FUNC_1(VAR_5.path, VAR_2) == 0);
  FUNC_2(&VAR_5);

  VAR_1++;
}
