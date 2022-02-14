
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef enum dpu_intr_type { ____Placeholder_dpu_intr_type } dpu_intr_type ;
struct TYPE_3__ {int intr_type; scalar_t__ instance_idx; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(enum dpu_intr_type VAR_2,
  u32 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_2 == VAR_1[VAR_4].intr_type &&
   VAR_3 == VAR_1[VAR_4].instance_idx)
   return VAR_4;
 }

 FUNC_1("IRQ lookup fail!! intr_type=%d, instance_idx=%d\n",
   VAR_2, VAR_3);
 return -VAR_0;
}
