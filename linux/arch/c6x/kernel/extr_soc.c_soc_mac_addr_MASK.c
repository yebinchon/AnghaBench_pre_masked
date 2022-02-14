
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__* VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

int FUNC_2(unsigned int VAR_3, u8 *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < 6; VAR_5++) {
  if (VAR_2[VAR_5])
   VAR_7 = 1;
  if (VAR_0[VAR_5])
   VAR_8 = 1;
  if (VAR_4[VAR_5])
   VAR_6 = 1;
 }


 if (VAR_7)
  FUNC_1(VAR_4, VAR_2, 6);
 else if (!VAR_6) {
  if (VAR_8)
   FUNC_1(VAR_4, VAR_0, 6);
  else
   FUNC_0(VAR_4);
 }


 VAR_4[5] += VAR_3 * VAR_1;
 return 1;
}
