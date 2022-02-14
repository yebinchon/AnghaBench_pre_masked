
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xlr_i2c_private {TYPE_1__* cfg; } ;
struct TYPE_2__ {int status_busy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct xlr_i2c_private *VAR_1, u32 VAR_2)
{
 return (VAR_2 & VAR_0) == VAR_1->cfg->status_busy;
}
