
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int nr_regs; scalar_t__ mask; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2.nr_regs; VAR_4++) {
  VAR_5 = VAR_2.mask + VAR_4 * 4;

  VAR_3[VAR_4] =
   FUNC_0(VAR_0,
      VAR_5);
  FUNC_1(0, VAR_0, VAR_5);
 }


 FUNC_0(VAR_0,
    VAR_1);
}
