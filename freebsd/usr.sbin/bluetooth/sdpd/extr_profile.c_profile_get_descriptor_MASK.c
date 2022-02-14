
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int profiles ;
struct TYPE_4__ {scalar_t__ uuid; } ;
typedef TYPE_1__ profile_t ;
typedef TYPE_1__* profile_p ;
typedef int int32_t ;



profile_p
FUNC_0(uint16_t VAR_0)
{
   extern profile_t VAR_1;
 extern profile_t VAR_2;
 extern profile_t VAR_3;
 extern profile_t VAR_4;
 extern profile_t VAR_5;
 extern profile_t VAR_6;
 extern profile_t VAR_7;
 extern profile_t VAR_8;
 extern profile_t VAR_9;
 extern profile_t VAR_10;
 extern profile_t VAR_11;
 extern profile_t VAR_12;

 static const profile_p VAR_13[] = {
  &VAR_1,
  &VAR_2,
  &VAR_3,
  &VAR_4,
  &VAR_5,
  &VAR_6,
  &VAR_7,
  &VAR_8,
  &VAR_9,
  &VAR_10,
  &VAR_11,
  &VAR_12
 };

 int32_t VAR_14;

 for (VAR_14 = 0; VAR_14 < sizeof(VAR_13)/sizeof(VAR_13[0]); VAR_14++)
  if (VAR_13[VAR_14]->uuid == VAR_0)
   return (VAR_13[VAR_14]);

 return (((void*)0));
}
