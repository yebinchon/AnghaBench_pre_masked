
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int cbm_idx_mult; unsigned int cbm_idx_offset; } ;
struct rdt_resource {TYPE_1__ cache; } ;



__attribute__((used)) static unsigned int FUNC_0(struct rdt_resource *VAR_0, unsigned int VAR_1)
{
 return VAR_1 * VAR_0->cache.cbm_idx_mult + VAR_0->cache.cbm_idx_offset;
}
