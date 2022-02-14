
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macio_chip {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int board_flags; } ;


 long VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct macio_chip* VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static long FUNC_2(struct device_node *VAR_6, long VAR_7, long VAR_8)
{
 struct macio_chip* VAR_9 = &VAR_4[0];

 if ((VAR_5.board_flags & VAR_3) == 0)
  return -VAR_0;
 if (VAR_8 == 1) {
  FUNC_0(VAR_1, VAR_2);
 } else if (VAR_8 == 0) {
  FUNC_1(VAR_1, VAR_2);
 }

 return 0;
}
