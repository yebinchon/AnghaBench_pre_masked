
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv7xx_pl {int flags; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u8 FUNC_0(struct radeon_device *VAR_3,
         struct rv7xx_pl *VAR_4)
{
 return (VAR_4->flags & VAR_0) ?
  VAR_1 : VAR_2;
}
