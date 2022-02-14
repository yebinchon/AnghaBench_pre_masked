
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int board_type; } ;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 TYPE_1__* FUNC_1 () ;

int FUNC_2(int VAR_1)
{
 switch (FUNC_1()->board_type) {
 case 130:

  return -1;
 case 143:
 case 141:
 case 129:
 case 133:

  if ((VAR_1 >= 16) && (VAR_1 < 20))
   return VAR_1 - 16;
  else
   return -1;
 case 139:
 case 149:
 case 140:
 case 154:
 case 155:
 case 153:




  if (VAR_1 == 0)
   return 4;
  else if (VAR_1 == 1)
   return 9;
  else
   return -1;
 case 137:

  if ((VAR_1 >= 0) && (VAR_1 < 4))
   return VAR_1;
  else if ((VAR_1 >= 16) && (VAR_1 < 20))
   return VAR_1 - 16 + 4;
  else
   return -1;
 case 150:

  return -1;
 case 148:
 case 147:
 case 142:

  if ((VAR_1 >= VAR_0) &&
      (VAR_1 < (VAR_0 + 2)))
   return VAR_1 - VAR_0;




  if ((VAR_1 >= 0) && (VAR_1 < 4))
   return VAR_1 + 2;
  else
   return -1;
 case 146:
 case 145:
 case 144:

  if (VAR_1 == VAR_0)
   return 0;




  if ((VAR_1 >= 0) && (VAR_1 < 4))
   return VAR_1 + 1;
  else
   return -1;
 case 152:
  if (VAR_1 == 2)
   return 4;
  else
   return -1;
 case 131:

  if ((VAR_1 >= 16) && (VAR_1 < 20))
   return VAR_1 - 16 + 1;
  else
   return -1;
 case 132:
 case 136:
  return -1;
 case 134:
  if (VAR_1 >= 0 && VAR_1 <= 3)
   return (VAR_1 + 0x1f) & 0x1f;
  else
   return -1;
 case 135:
  if (VAR_1 >= 0 && VAR_1 <= 1)
   return VAR_1 + 1;
  else
   return -1;
 case 156:




  return -1;

 case 151:
  if (VAR_1 >= 0 && VAR_1 <= 3)
   return VAR_1;
  else if (VAR_1 >= 16 && VAR_1 <= 19)
   return VAR_1 - 16 + 4;
  else
   return -1;
 case 128:
  if (VAR_1 >= 0 && VAR_1 <= 2)
   return 7 - VAR_1;
  else
   return -1;
 case 138:
  if (VAR_1 == VAR_0)
   return 1;
  else
   return -1;

 }


 FUNC_0
     ("cvmx_helper_board_get_mii_address: Unknown board type %d\n",
      FUNC_1()->board_type);
 return -1;
}
