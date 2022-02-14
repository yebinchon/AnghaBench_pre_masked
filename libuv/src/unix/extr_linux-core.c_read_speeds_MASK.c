
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int speed; } ;
typedef TYPE_1__ uv_cpu_info_t ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_0, uv_cpu_info_t* VAR_1) {
  unsigned int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    VAR_1[VAR_2].speed = FUNC_0(VAR_2) / 1000;
}
