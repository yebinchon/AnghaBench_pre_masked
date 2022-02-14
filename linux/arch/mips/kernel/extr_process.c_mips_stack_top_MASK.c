
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* abi; } ;
struct TYPE_8__ {int flags; TYPE_3__ thread; } ;
struct TYPE_6__ {TYPE_1__* vdso; } ;
struct TYPE_5__ {int size; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_7 ;

unsigned long FUNC_2(void)
{
 unsigned long VAR_8 = VAR_3 & VAR_0;


 VAR_8 -= VAR_1;


 VAR_8 -= FUNC_0(VAR_6->thread.abi->vdso->size);
 VAR_8 -= VAR_1;
 VAR_8 -= FUNC_1() ? VAR_1 : 0;


 if (VAR_5)
  VAR_8 -= VAR_7 + 1;


 if (VAR_6->flags & VAR_2)
  VAR_8 -= VAR_4;

 return VAR_8;
}
