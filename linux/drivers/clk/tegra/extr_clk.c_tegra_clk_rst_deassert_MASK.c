
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reset_controller_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ rst_clr_reg; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_5,
  unsigned long VAR_6)
{
 if (VAR_6 < VAR_3 * 32) {
  FUNC_2(FUNC_0(VAR_6 % 32),
          VAR_1 + VAR_4[VAR_6 / 32].rst_clr_reg);
  return 0;
 } else if (VAR_6 < VAR_3 * 32 + VAR_2) {
  return FUNC_1(VAR_6);
 }

 return -VAR_0;
}
