
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jump_entry {int dummy; } ;
typedef enum jump_label_type { ____Placeholder_jump_label_type } jump_label_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (void*,int ) ;
 scalar_t__ FUNC_3 (struct jump_entry*) ;
 int FUNC_4 (struct jump_entry*) ;

void FUNC_5(struct jump_entry *VAR_2,
          enum jump_label_type VAR_3)
{
 void *VAR_4 = (void *)FUNC_3(VAR_2);
 u32 VAR_5;

 if (VAR_3 == VAR_1) {
  VAR_5 = FUNC_0(FUNC_3(VAR_2),
         FUNC_4(VAR_2),
         VAR_0);
 } else {
  VAR_5 = FUNC_1();
 }

 FUNC_2(VAR_4, VAR_5);
}
