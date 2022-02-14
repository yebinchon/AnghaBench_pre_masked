
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum smi_forward_action { ____Placeholder_smi_forward_action } smi_forward_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum smi_forward_action FUNC_0(u8 VAR_3, u8 VAR_4,
         u8 VAR_5,
         bool VAR_6,
         bool VAR_7)
{
 if (!VAR_5) {

  if (VAR_3 && VAR_3 < VAR_4)
   return VAR_0;


  if (VAR_3 == VAR_4)
   return (VAR_6 ?
    VAR_2 : VAR_1);


  if (VAR_3 == VAR_4 + 1)
   return VAR_2;
 } else {

  if (2 <= VAR_3 && VAR_3 <= VAR_4)
   return VAR_0;


  if (VAR_3 == 1)
   return (!VAR_7 ?
    VAR_2 : VAR_1);
 }
 return VAR_1;

}
