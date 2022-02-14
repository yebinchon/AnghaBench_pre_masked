
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dentry {int dummy; } ;
struct debugfs_regset32 {size_t nregs; scalar_t__ base; struct debugfs_reg32* regs; } ;
struct debugfs_reg32 {int dummy; } ;
struct bcm2835_cprman {scalar_t__ regs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,struct dentry*,struct debugfs_regset32*) ;
 struct debugfs_regset32* FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct bcm2835_cprman *VAR_2, u32 VAR_3,
      struct debugfs_reg32 *VAR_4, size_t VAR_5,
      struct dentry *VAR_6)
{
 struct debugfs_regset32 *VAR_7;

 VAR_7 = FUNC_1(VAR_2->dev, sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return;

 VAR_7->regs = VAR_4;
 VAR_7->nregs = VAR_5;
 VAR_7->base = VAR_2->regs + VAR_3;

 FUNC_0("regdump", VAR_1, VAR_6, VAR_7);
}
