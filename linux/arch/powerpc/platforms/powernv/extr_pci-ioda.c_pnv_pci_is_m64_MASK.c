
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_2__ {scalar_t__ m64_base; scalar_t__ m64_size; } ;
struct pnv_phb {TYPE_1__ ioda; } ;



__attribute__((used)) static inline bool FUNC_0(struct pnv_phb *VAR_0, struct resource *VAR_1)
{







 return (VAR_1->start >= VAR_0->ioda.m64_base &&
  VAR_1->start < (VAR_0->ioda.m64_base + VAR_0->ioda.m64_size));
}
