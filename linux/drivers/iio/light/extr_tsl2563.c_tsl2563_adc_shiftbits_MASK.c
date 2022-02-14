
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;





 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(u8 VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2 & VAR_1) {
 case 129:
  VAR_3 += 5;
  break;
 case 130:
  VAR_3 += 2;
  break;
 case 128:

  break;
 }

 if (!(VAR_2 & VAR_0))
  VAR_3 += 4;

 return VAR_3;
}
