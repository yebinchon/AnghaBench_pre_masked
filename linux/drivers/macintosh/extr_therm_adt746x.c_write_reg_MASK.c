
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct thermostat {int clt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_1(struct thermostat* VAR_1, int VAR_2, u8 VAR_3)
{
 u8 VAR_4[2];
 int VAR_5;

 VAR_4[0] = VAR_2;
 VAR_4[1] = VAR_3;
 VAR_5 = FUNC_0(VAR_1->clt, (const char *)VAR_4, 2);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_5 != 2)
  return -VAR_0;
 return 0;
}
