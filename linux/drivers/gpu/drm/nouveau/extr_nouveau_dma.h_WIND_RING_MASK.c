
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int put; int cur; } ;
struct nouveau_channel {TYPE_1__ dma; } ;



__attribute__((used)) static inline void
FUNC_0(struct nouveau_channel *VAR_0)
{
 VAR_0->dma.cur = VAR_0->dma.put;
}
