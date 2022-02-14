
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int range; int res; scalar_t__ processed; int bufBase; int buf; scalar_t__ cacheSize; scalar_t__ low; scalar_t__ cache; } ;
typedef TYPE_1__ CRangeEnc ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(CRangeEnc *VAR_1)
{

  VAR_1->range = 0xFFFFFFFF;
  VAR_1->cache = 0;
  VAR_1->low = 0;
  VAR_1->cacheSize = 0;

  VAR_1->buf = VAR_1->bufBase;

  VAR_1->processed = 0;
  VAR_1->res = VAR_0;
}
