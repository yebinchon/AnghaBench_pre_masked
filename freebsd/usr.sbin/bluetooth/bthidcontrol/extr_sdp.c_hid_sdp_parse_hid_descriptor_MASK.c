
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_1__* sdp_attr_p ;
typedef int int32_t ;
struct TYPE_3__ {int vlen; int * value; } ;
 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_1 ;

__attribute__((used)) static int32_t
FUNC_3(sdp_attr_p VAR_2)
{
 uint8_t *VAR_3 = VAR_2->value;
 uint8_t *VAR_4 = VAR_2->value + VAR_2->vlen;
 int32_t VAR_5, VAR_6, VAR_7;

 if (VAR_4 - VAR_3 < 9)
  return (-1);

 FUNC_2(VAR_5, VAR_3);
 switch (VAR_5) {
 case 131:
  FUNC_2(VAR_6, VAR_3);
  break;

 case 133:
  FUNC_0(VAR_6, VAR_3);
  break;

 case 132:
  FUNC_1(VAR_6, VAR_3);
  break;

 default:
  return (-1);
 }
 if (VAR_3 + VAR_6 > VAR_4)
  return (-1);

 while (VAR_3 < VAR_4) {

  FUNC_2(VAR_5, VAR_3);
  switch (VAR_5) {
  case 131:
   if (VAR_3 + 1 > VAR_4)
    return (-1);
   FUNC_2(VAR_6, VAR_3);
   break;

  case 133:
   if (VAR_3 + 2 > VAR_4)
    return (-1);
   FUNC_0(VAR_6, VAR_3);
   break;

  case 132:
   if (VAR_3 + 4 > VAR_4)
    return (-1);
   FUNC_1(VAR_6, VAR_3);
   break;

  default:
   return (-1);
  }


  if (VAR_3 + 1 > VAR_4)
   return (-1);
  FUNC_2(VAR_5, VAR_3);
  if (VAR_5 != VAR_0 || VAR_3 + 1 > VAR_4)
   return (-1);
  FUNC_2(VAR_7, VAR_3);


  if (VAR_3 + 1 > VAR_4)
   return (-1);
  FUNC_2(VAR_5, VAR_3);
  switch (VAR_5) {
  case 128:
   if (VAR_3 + 1 > VAR_4)
    return (-1);
   FUNC_2(VAR_6, VAR_3);
   break;

  case 130:
   if (VAR_3 + 2 > VAR_4)
    return (-1);
   FUNC_0(VAR_6, VAR_3);
   break;

  case 129:
   if (VAR_3 + 4 > VAR_4)
    return (-1);
   FUNC_1(VAR_6, VAR_3);
   break;

  default:
   return (-1);
  }
  if (VAR_3 + VAR_6 > VAR_4)
   return (-1);

  if (VAR_7 == VAR_1 && VAR_6 > 0) {
   VAR_2->value = VAR_3;
   VAR_2->vlen = VAR_6;

   return (0);
  }

  VAR_3 += VAR_6;
 }

 return (-1);
}
