
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_1__* sdp_attr_p ;
typedef int int32_t ;
struct TYPE_3__ {int vlen; scalar_t__ attr; int * value; } ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;



 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_2 ;

__attribute__((used)) static int32_t
FUNC_3(sdp_attr_p VAR_3)
{
 uint8_t *VAR_4 = VAR_3->value;
 uint8_t *VAR_5 = VAR_3->value + VAR_3->vlen;
 int32_t VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_5 - VAR_4 < 15)
  return (-1);

 if (VAR_3->attr == VAR_0) {
  FUNC_2(VAR_6, VAR_4);
  switch (VAR_6) {
  case 131:
   FUNC_2(VAR_7, VAR_4);
   break;

  case 133:
   FUNC_0(VAR_7, VAR_4);
   break;

  case 132:
   FUNC_1(VAR_7, VAR_4);
   break;

  default:
   return (-1);
  }
  if (VAR_4 + VAR_7 > VAR_5)
   return (-1);
 }

 FUNC_2(VAR_6, VAR_4);
 switch (VAR_6) {
 case 131:
  FUNC_2(VAR_7, VAR_4);
  break;

 case 133:
  FUNC_0(VAR_7, VAR_4);
  break;

 case 132:
  FUNC_1(VAR_7, VAR_4);
  break;

 default:
  return (-1);
 }
 if (VAR_4 + VAR_7 > VAR_5)
  return (-1);


 FUNC_2(VAR_6, VAR_4);
 switch (VAR_6) {
 case 131:
  FUNC_2(VAR_7, VAR_4);
  break;

 case 133:
  FUNC_0(VAR_7, VAR_4);
  break;

 case 132:
  FUNC_1(VAR_7, VAR_4);
  break;

 default:
  return (-1);
 }
 if (VAR_4 + VAR_7 > VAR_5)
  return (-1);


 if (VAR_4 + 3 > VAR_5)
  return (-1);
 FUNC_2(VAR_6, VAR_4);
 switch (VAR_6) {
 case 129:
  FUNC_0(VAR_8, VAR_4);
  if (VAR_8 != VAR_2)
   return (-1);
  break;

 case 128:
 case 130:
 default:
  return (-1);
 }


 if (VAR_4 + 3 > VAR_5)
  return (-1);
 FUNC_2(VAR_6, VAR_4);
 if (VAR_6 != VAR_1)
  return (-1);
 FUNC_0(VAR_9, VAR_4);

 return (VAR_9);
}
