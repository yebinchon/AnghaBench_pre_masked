
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__* partitions; } ;
typedef TYPE_1__ pattern_t ;


 scalar_t__ VAR_0 ;

void FUNC_0(const pattern_t* VAR_1, int VAR_2, uint32_t* VAR_3, uint32_t* VAR_4){
  if (VAR_2 == 0){
    *VAR_3 = 0;
  }
  else{
    *VAR_3 = (uint32_t)((uint64_t)VAR_0 * (uint64_t)VAR_1->partitions[VAR_2 - 1] >> 31);
  }
  *VAR_4 = (uint32_t)((uint64_t)VAR_0 * (uint64_t)VAR_1->partitions[VAR_2] >> 31);
}
