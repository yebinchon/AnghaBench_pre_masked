
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* base; } ;
struct TYPE_4__ {TYPE_1__ lm; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_1(uint32_t VAR_1)
{
 switch (VAR_1) {
  case 0: return (VAR_0->lm.base[0]);
  case 1: return (VAR_0->lm.base[1]);
  case 2: return (VAR_0->lm.base[2]);
  case 3: return (VAR_0->lm.base[3]);
  case 4: return (VAR_0->lm.base[4]);
  case 5: return (VAR_0->lm.base[5]);
  default: return FUNC_0(VAR_1);
 }
}
