
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_verity {TYPE_1__* fec; } ;
struct TYPE_2__ {scalar_t__ dev; } ;



bool FUNC_0(struct dm_verity *VAR_0)
{
 return VAR_0->fec && VAR_0->fec->dev;
}
