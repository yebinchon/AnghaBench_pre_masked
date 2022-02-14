
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coh901318_params {int dummy; } ;
struct coh901318_chan {size_t id; } ;
struct TYPE_2__ {struct coh901318_params const param; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline const struct coh901318_params *
FUNC_0(struct coh901318_chan *VAR_1)
{
 return &VAR_0[VAR_1->id].param;
}
