
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3)
{
 volatile uint32_t *VAR_4 = FUNC_0(VAR_0);
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = 0x800000;
 do {
  VAR_7 = VAR_1;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   if (VAR_4[VAR_2 + VAR_5] || (VAR_2 + VAR_5) == VAR_3)
    --VAR_7;
 } while (VAR_7 != 0 && --VAR_6 > 0);

 return VAR_6 != 0;
}
