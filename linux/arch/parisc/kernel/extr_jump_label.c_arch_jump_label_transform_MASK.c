
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jump_entry {int dummy; } ;
typedef enum jump_label_type { ____Placeholder_jump_label_type } jump_label_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct jump_entry*) ;
 scalar_t__ FUNC_2 (struct jump_entry*) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (int) ;

void FUNC_5(struct jump_entry *VAR_2,
          enum jump_label_type VAR_3)
{
 void *VAR_4 = (void *)FUNC_1(VAR_2);
 u32 VAR_5;

 if (VAR_3 == VAR_1) {
  void *VAR_6 = (void *)FUNC_2(VAR_2);
  int VAR_7 = VAR_6 - VAR_4;






  VAR_7 -= 8;
  FUNC_0(VAR_7 > 262143 || VAR_7 < -262144);
  VAR_5 = 0xe8000002 | FUNC_4(VAR_7 >> 2);
 } else {
  VAR_5 = VAR_0;
 }

 FUNC_3(VAR_4, VAR_5);
}
