
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {unsigned short addr; int flags; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned short FUNC_0(struct i2c_client *VAR_4)
{
 unsigned short VAR_5 = VAR_4->addr;


 if (VAR_4->flags & VAR_3)
  VAR_5 |= VAR_1;

 if (VAR_4->flags & VAR_2)
  VAR_5 |= VAR_0;

 return VAR_5;
}
