
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 unsigned long FUNC_0 (scalar_t__,scalar_t__) ;
 unsigned long FUNC_1 (int,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(u16 VAR_0, u16 VAR_1)
{
 unsigned long VAR_2, VAR_3;

 if (VAR_0 == 0)
  return 0;


 VAR_2 = FUNC_0(VAR_1 * 100, VAR_1 + VAR_0);

 if (VAR_2 < 45)
  VAR_3 = FUNC_1(1774, VAR_0, -1105, VAR_1);
 else if (VAR_2 >= 45 && VAR_2 < 64)
  VAR_3 = FUNC_1(3772, VAR_0, 1336, VAR_1);
 else if (VAR_2 >= 64 && VAR_2 < 85)
  VAR_3 = FUNC_1(1690, VAR_0, 169, VAR_1);
 else
  VAR_3 = 0;

 return VAR_3 / 1000;
}
