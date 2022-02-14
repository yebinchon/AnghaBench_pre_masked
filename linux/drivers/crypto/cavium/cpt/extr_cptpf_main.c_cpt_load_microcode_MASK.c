
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct microcode {scalar_t__ code_size; int core_mask; scalar_t__ phys_base; scalar_t__ is_ae; int code; } ;
struct device {int dummy; } ;
struct cpt_device {int reg_base; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct cpt_device *VAR_3, struct microcode *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 u32 VAR_8 = 0;
 struct device *VAR_9 = &VAR_3->pdev->dev;

 if (!VAR_4 || !VAR_4->code) {
  FUNC_2(VAR_9, "Either the mcode is null or data is NULL\n");
  return -VAR_2;
 }

 if (VAR_4->code_size == 0) {
  FUNC_2(VAR_9, "microcode size is 0\n");
  return -VAR_2;
 }




 if (VAR_4->is_ae) {
  VAR_6 = VAR_0;
  VAR_8 = VAR_1;
 } else {
  VAR_6 = 0;
  VAR_8 = VAR_0;
 }


 for (; VAR_6 < VAR_8 ; VAR_6++, VAR_7++) {
  if (VAR_4->core_mask & (1 << VAR_7)) {
   FUNC_1(VAR_3->reg_base,
     FUNC_0(0, VAR_6),
     (u64)VAR_4->phys_base);
  }
 }
 return VAR_5;
}
