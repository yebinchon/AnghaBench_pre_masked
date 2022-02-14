
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time64_t ;
struct TYPE_3__ {int lcv_time; scalar_t__ lcv; } ;
typedef TYPE_1__ hil_mlc ;


 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(hil_mlc *VAR_0, int VAR_1)
{
 time64_t VAR_2 = FUNC_0();

 if (VAR_0->lcv && (VAR_2 - VAR_0->lcv_time) < 5)
  return -1;

 VAR_0->lcv_time = VAR_2;
 VAR_0->lcv = 0;

 return 0;
}
