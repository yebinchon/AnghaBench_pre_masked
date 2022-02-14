
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* write ) (int ,int ) ;} ;
struct drv_cmd {int val; int reg; TYPE_1__ func; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct drv_cmd *VAR_1 = VAR_0;

 VAR_1->func.write(VAR_1->reg, VAR_1->val);
}
