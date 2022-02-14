
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jump_entry {int target; scalar_t__ code; } ;
typedef enum jump_label_type { ____Placeholder_jump_label_type } jump_label_type ;


 int VAR_0 ;
 int FUNC_0 (void*,unsigned int) ;
 unsigned int FUNC_1 (scalar_t__,int ) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (void*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct jump_entry *VAR_1,
     enum jump_label_type VAR_2,
     bool VAR_3)
{
 void *VAR_4 = (void *)VAR_1->code;
 unsigned int VAR_5;

 if (VAR_2 == VAR_0)
  VAR_5 = FUNC_1(VAR_1->code, VAR_1->target);
 else
  VAR_5 = FUNC_2();

 if (VAR_3)
  FUNC_0(VAR_4, VAR_5);
 else
  FUNC_3(VAR_4, VAR_5);
}
