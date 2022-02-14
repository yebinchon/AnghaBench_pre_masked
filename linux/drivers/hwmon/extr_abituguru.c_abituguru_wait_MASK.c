
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct abituguru_data {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct abituguru_data *VAR_4, u8 VAR_5)
{
 int VAR_6 = VAR_1;

 while (FUNC_0(VAR_4->addr + VAR_0) != VAR_5) {
  VAR_6--;
  if (VAR_6 == 0)
   return -VAR_3;




  if (VAR_6 <= VAR_2)
   FUNC_1(0);
 }
 return 0;
}
