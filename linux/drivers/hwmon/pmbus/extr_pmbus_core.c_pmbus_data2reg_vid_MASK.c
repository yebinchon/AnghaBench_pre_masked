
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pmbus_sensor {int dummy; } ;
struct pmbus_data {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 long FUNC_1 (long,int,int) ;

__attribute__((used)) static u16 FUNC_2(struct pmbus_data *VAR_0,
         struct pmbus_sensor *VAR_1, long VAR_2)
{
 VAR_2 = FUNC_1(VAR_2, 500, 1600);

 return 2 + FUNC_0((1600 - VAR_2) * 100, 625);
}
