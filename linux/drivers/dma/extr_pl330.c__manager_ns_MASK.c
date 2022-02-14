
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pl330_thread {TYPE_2__* dmac; } ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ pcfg; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct pl330_thread *VAR_1)
{
 return (VAR_1->dmac->pcfg.mode & VAR_0) ? 1 : 0;
}
