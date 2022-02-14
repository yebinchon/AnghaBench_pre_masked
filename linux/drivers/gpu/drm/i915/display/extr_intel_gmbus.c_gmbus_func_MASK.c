
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int (* functionality ) (struct i2c_adapter*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (struct i2c_adapter*) ;

__attribute__((used)) static u32 FUNC_1(struct i2c_adapter *VAR_5)
{
 return VAR_4.functionality(VAR_5) &
  (VAR_0 | VAR_2 |

  VAR_3 |
  VAR_1);
}
