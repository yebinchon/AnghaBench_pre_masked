
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_4__ {int * loop; } ;
typedef TYPE_1__ uv_idle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(uv_idle_t* VAR_4) {
  uv_loop_t* VAR_5 = VAR_4->loop;
  FUNC_2(VAR_4);
  FUNC_0(VAR_5, &VAR_1);
  FUNC_1(&VAR_1, VAR_0);
  FUNC_3(VAR_5, &VAR_3);
  FUNC_4(&VAR_3, VAR_2, 0, 0);
}
