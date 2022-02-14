
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

uint64_t
FUNC_0(void)
{

 return ((uint64_t)VAR_1.tv_sec * VAR_0 +
     VAR_1.tv_nsec);
}
