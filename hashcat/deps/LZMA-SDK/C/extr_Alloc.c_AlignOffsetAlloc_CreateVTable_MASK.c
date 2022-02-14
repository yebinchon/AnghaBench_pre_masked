
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Free; int Alloc; } ;
struct TYPE_5__ {TYPE_1__ vt; } ;
typedef TYPE_2__ CAlignOffsetAlloc ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(CAlignOffsetAlloc *VAR_2)
{
  VAR_2->vt.Alloc = VAR_0;
  VAR_2->vt.Free = VAR_1;
}
