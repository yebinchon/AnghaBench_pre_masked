
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cur; } ;
struct TYPE_3__ {int buffer; } ;
struct nouveau_channel {TYPE_2__ dma; TYPE_1__ push; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(struct nouveau_channel *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->push.buffer, VAR_0->dma.cur++, VAR_1);
}
