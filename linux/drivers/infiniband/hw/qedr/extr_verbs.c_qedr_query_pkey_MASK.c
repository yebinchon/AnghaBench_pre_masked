
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(struct ib_device *VAR_3, u8 VAR_4, u16 VAR_5, u16 *VAR_6)
{
 if (VAR_5 >= VAR_2)
  return -VAR_0;

 *VAR_6 = VAR_1;
 return 0;
}
