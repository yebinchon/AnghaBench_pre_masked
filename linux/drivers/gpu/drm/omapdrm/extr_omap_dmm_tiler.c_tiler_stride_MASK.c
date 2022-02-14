
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef enum tiler_fmt { ____Placeholder_tiler_fmt } tiler_fmt ;
struct TYPE_2__ {int x_shft; int y_shft; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int) ;

u32 FUNC_2(enum tiler_fmt VAR_4, u32 VAR_5)
{
 FUNC_0(!FUNC_1(VAR_4));

 if (VAR_5 & VAR_2)
  return 1 << (VAR_0 + VAR_3[VAR_4].x_shft);
 else
  return 1 << (VAR_1 + VAR_3[VAR_4].y_shft);
}
