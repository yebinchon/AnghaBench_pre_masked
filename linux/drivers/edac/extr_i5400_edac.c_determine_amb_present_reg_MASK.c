
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i5400_pvt {int b0_ambpresent1; int b0_ambpresent0; int b1_ambpresent1; int b1_ambpresent0; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct i5400_pvt *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_2 < VAR_0) {
  if (VAR_2 & 0x1)
   VAR_3 = VAR_1->b0_ambpresent1;
  else
   VAR_3 = VAR_1->b0_ambpresent0;
 } else {
  if (VAR_2 & 0x1)
   VAR_3 = VAR_1->b1_ambpresent1;
  else
   VAR_3 = VAR_1->b1_ambpresent0;
 }

 return VAR_3;
}
