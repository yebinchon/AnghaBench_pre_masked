
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sdma_engine {TYPE_1__* drvdata; } ;
struct TYPE_2__ {scalar_t__ chnenbl0; } ;



__attribute__((used)) static inline u32 FUNC_0(struct sdma_engine *VAR_0, unsigned int VAR_1)
{
 u32 VAR_2 = VAR_0->drvdata->chnenbl0;
 return VAR_2 + VAR_1 * 4;
}
