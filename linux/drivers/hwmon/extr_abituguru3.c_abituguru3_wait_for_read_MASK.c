
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct abituguru3_data {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct abituguru3_data *VAR_4)
{
 u8 VAR_5;
 int VAR_6 = VAR_3;

 while (!((VAR_5 = FUNC_0(VAR_4->addr + VAR_0)) &
   VAR_1)) {
  VAR_6--;
  if (VAR_6 == 0)
   return VAR_5;




  if (VAR_6 == 1)
   FUNC_1(1);
 }
 return VAR_2;
}
