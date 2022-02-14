
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macio_chip {scalar_t__ type; int flags; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int board_flags; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int FUNC_3 (unsigned long) ;
 struct macio_chip* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int) ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int) ;

__attribute__((used)) static long
FUNC_6(struct device_node *VAR_9, long VAR_10, long VAR_11)
{
 unsigned long VAR_12;
 struct macio_chip *VAR_13;


 if ((VAR_8.board_flags & VAR_3) == 0)
  return -VAR_0;
 VAR_13 = &VAR_4[0];
 if (VAR_13->type != VAR_6 && VAR_13->type != VAR_7 &&
     VAR_13->type != VAR_5)
  return -VAR_0;
 if (!(VAR_13->flags & VAR_2))
  return -VAR_0;

 FUNC_0(VAR_12);
 if (VAR_11) {
  FUNC_2(VAR_1 , 0);
  FUNC_1(VAR_1);
  FUNC_5(10);
 } else {
  FUNC_2(VAR_1 , 4);
  FUNC_1(VAR_1); FUNC_5(10);
 }
 FUNC_3(VAR_12);
 FUNC_4(1);

 return 0;
}
