
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_printer {int dummy; } ;
struct debugfs_regset32 {int nregs; TYPE_1__* regs; scalar_t__ base; } ;
struct TYPE_2__ {scalar_t__ offset; int name; } ;


 int FUNC_0 (struct drm_printer*,char*,int,int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct drm_printer *VAR_0, struct debugfs_regset32 *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nregs; VAR_3++)
  VAR_2 = FUNC_1(VAR_2, (int)FUNC_3(VAR_1->regs[VAR_3].name));

 for (VAR_3 = 0; VAR_3 < VAR_1->nregs; VAR_3++) {
  FUNC_0(VAR_0, "%*s = 0x%08x\n",
      VAR_2, VAR_1->regs[VAR_3].name,
      FUNC_2(VAR_1->base + VAR_1->regs[VAR_3].offset));
 }
}
