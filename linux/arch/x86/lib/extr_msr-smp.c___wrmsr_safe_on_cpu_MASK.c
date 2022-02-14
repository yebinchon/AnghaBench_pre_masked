
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h; int l; } ;
struct msr_info {TYPE_1__ reg; int msr_no; int err; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct msr_info *VAR_1 = VAR_0;

 VAR_1->err = FUNC_0(VAR_1->msr_no, VAR_1->reg.l, VAR_1->reg.h);
}
