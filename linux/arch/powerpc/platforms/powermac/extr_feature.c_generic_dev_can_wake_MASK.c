
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_2__ {int board_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static long
FUNC_0(struct device_node *VAR_3, long VAR_4, long VAR_5)
{




 if (VAR_2.board_flags & VAR_1)
  VAR_2.board_flags |= VAR_0;
 return 0;
}
