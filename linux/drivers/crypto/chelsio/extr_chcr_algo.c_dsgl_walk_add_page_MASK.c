
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsgl_walk {int nents; TYPE_1__* to; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int * addr; int * len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static inline void FUNC_2(struct dsgl_walk *VAR_0,
     size_t VAR_1,
     dma_addr_t VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  return;
 VAR_3 = VAR_0->nents;
 VAR_0->to->len[VAR_3 % 8] = FUNC_1(VAR_1);
 VAR_0->to->addr[VAR_3 % 8] = FUNC_0(VAR_2);
 VAR_3++;
 if ((VAR_3 % 8) == 0)
  VAR_0->to++;
 VAR_0->nents = VAR_3;
}
