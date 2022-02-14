
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct jump_entry {int target; scalar_t__ code; } ;
typedef enum jump_label_type { ____Placeholder_jump_label_type } jump_label_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct jump_entry *VAR_2,
          enum jump_label_type VAR_3)
{
 u32 *VAR_4 = (u32 *)(unsigned long)VAR_2->code;

 if (VAR_3 == VAR_0)
  FUNC_0(VAR_4, VAR_2->target, 0);
 else
  FUNC_1(VAR_4, VAR_1);
}
