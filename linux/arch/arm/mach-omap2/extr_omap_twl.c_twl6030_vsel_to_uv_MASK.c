
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int ) ;

__attribute__((used)) static unsigned long FUNC_1(const u8 VAR_4)
{
 if (!VAR_2) {
  FUNC_0(VAR_1, &VAR_3,
    VAR_0);
  VAR_2 = 1;
 }

 if (!VAR_4)
  return 0;







 if (VAR_4 == 0x3A)
  return 1350000;

 if (VAR_3 & 0x8)
  return ((((VAR_4 - 1) * 1266) + 70900)) * 10;
 else
  return ((((VAR_4 - 1) * 1266) + 60770)) * 10;
}
