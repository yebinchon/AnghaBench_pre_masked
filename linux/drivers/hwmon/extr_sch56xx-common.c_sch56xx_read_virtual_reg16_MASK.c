
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

int FUNC_1(u16 VAR_0, u16 VAR_1)
{
 int VAR_2, VAR_3;


 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = FUNC_0(VAR_0, VAR_1 + 1);
 if (VAR_3 < 0)
  return VAR_3;

 return VAR_2 | (VAR_3 << 8);
}
