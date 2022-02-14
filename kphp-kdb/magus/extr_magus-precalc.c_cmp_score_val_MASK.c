
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float val; } ;
typedef TYPE_1__ score ;



int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  float VAR_2 = ((score *)VAR_0)->val - ((score *)VAR_1)->val;
  return VAR_2 > 1e-9 ? -1 : VAR_2 < -1e-9;
}
