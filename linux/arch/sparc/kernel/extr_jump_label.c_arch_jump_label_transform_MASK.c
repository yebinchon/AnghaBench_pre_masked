
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jump_entry {scalar_t__ code; scalar_t__ target; } ;
typedef int s32 ;
typedef enum jump_label_type { ____Placeholder_jump_label_type } jump_label_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

void FUNC_4(struct jump_entry *VAR_2,
          enum jump_label_type VAR_3)
{
 u32 *VAR_4 = (u32 *) (unsigned long) VAR_2->code;
 u32 VAR_5;

 if (VAR_3 == VAR_0) {
  s32 VAR_6 = (s32)VAR_2->target - (s32)VAR_2->code;
  bool VAR_7 = 0;

  FUNC_0(VAR_6 & 3);





  if (VAR_7) {


   VAR_5 = 0x10680000 | (((u32) VAR_6 >> 2) & 0x7ffff);
  } else {

   FUNC_0(VAR_6 > 0x7fffff);
   FUNC_0(VAR_6 < -0x800000);

   VAR_5 = 0x10800000 | (((u32) VAR_6 >> 2) & 0x3fffff);
  }
 } else {
  VAR_5 = 0x01000000;
 }

 FUNC_2(&VAR_1);
 *VAR_4 = VAR_5;
 FUNC_1(VAR_4);
 FUNC_3(&VAR_1);
}
