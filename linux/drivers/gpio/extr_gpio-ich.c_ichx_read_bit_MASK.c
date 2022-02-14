
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* outlvl_cache; int lock; TYPE_1__* desc; int gpio_base; } ;
struct TYPE_3__ {scalar_t__ use_outlvl_cache; int ** regs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(int VAR_2, unsigned VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;
 int VAR_6 = VAR_3 / 32;
 int VAR_7 = VAR_3 & 0x1f;

 FUNC_2(&VAR_1.lock, VAR_4);

 VAR_5 = FUNC_1(VAR_1.desc->regs[VAR_2][VAR_6],
    VAR_1.gpio_base);

 if (VAR_2 == VAR_0 && VAR_1.desc->use_outlvl_cache)
  VAR_5 = VAR_1.outlvl_cache[VAR_6] | VAR_5;

 FUNC_3(&VAR_1.lock, VAR_4);

 return !!(VAR_5 & FUNC_0(VAR_7));
}
