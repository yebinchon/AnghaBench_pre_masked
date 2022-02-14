
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_2, u8 VAR_3)
{
 u8 *VAR_4 = VAR_2 + VAR_1/2 - 1;
 u8 *VAR_5 = VAR_2 + VAR_1 - 1;

 do {
  (*VAR_5) += VAR_3;
  if (*VAR_5 > VAR_3)
   break;
  VAR_5--;
  VAR_3 = 1;
 } while (VAR_5 != VAR_4);

 if (VAR_5 == VAR_4) {
  FUNC_0("unable to fetch mac address\n");
  return -VAR_0;
 }
 return 0;
}
