
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int nr_regs; scalar_t__ mask; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1.nr_regs; VAR_3++)
  FUNC_0(VAR_2[VAR_3],
      VAR_0,
      VAR_1.mask + VAR_3 * 4);
}
