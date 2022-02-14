
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef enum smi_action { ____Placeholder_smi_action } smi_action ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static enum smi_action FUNC_0(bool VAR_3, int VAR_4,
      u8 *VAR_5, u8 VAR_6,
      const u8 *VAR_7,
      const u8 *VAR_8,
      u8 VAR_9,
      bool VAR_10,
      bool VAR_11)
{


 if (VAR_6 >= VAR_2)
  return VAR_0;

 if (!VAR_9) {

  if (VAR_6 && *VAR_5 == 0) {
   (*VAR_5)++;
   return (VAR_7[*VAR_5] ==
    VAR_4 ? VAR_1 : VAR_0);
  }


  if (*VAR_5 && *VAR_5 < VAR_6) {
   if (!VAR_3)
    return VAR_0;


   (*VAR_5)++;
   return (VAR_7[*VAR_5] ==
    VAR_4 ? VAR_1 : VAR_0);
  }


  if (*VAR_5 == VAR_6) {

   (*VAR_5)++;
   return (VAR_3 ||
    VAR_10 ?
    VAR_1 : VAR_0);
  }



  return (*VAR_5 == VAR_6 + 1 ? VAR_1 : VAR_0);

 } else {

  if (VAR_6 && *VAR_5 == VAR_6 + 1) {
   (*VAR_5)--;
   return (VAR_8[*VAR_5] ==
    VAR_4 ? VAR_1 : VAR_0);
  }


  if (2 <= *VAR_5 && *VAR_5 <= VAR_6) {
   if (!VAR_3)
    return VAR_0;

   (*VAR_5)--;
   return (VAR_8[*VAR_5] ==
    VAR_4 ? VAR_1 : VAR_0);
  }


  if (*VAR_5 == 1) {
   (*VAR_5)--;

   return (VAR_3 ||
    VAR_11 ?
    VAR_1 : VAR_0);
  }


  if (*VAR_5 == 0)
   return VAR_1;


  return VAR_0;
 }
}
