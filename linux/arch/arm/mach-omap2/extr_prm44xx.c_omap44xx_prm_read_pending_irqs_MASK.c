
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_regs; scalar_t__ ack; scalar_t__ mask; } ;


 unsigned long FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned long *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0.nr_regs; VAR_2++)
  VAR_1[VAR_2] = FUNC_0(VAR_0.mask +
    VAR_2 * 4, VAR_0.ack + VAR_2 * 4);
}
