
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdp5_kms {int dummy; } ;
struct mdp5_ctl {int reg_offset; int ctlm; } ;


 struct mdp5_kms* FUNC_0 (int ) ;
 int FUNC_1 (struct mdp5_kms*,int ) ;

__attribute__((used)) static inline
u32 FUNC_2(struct mdp5_ctl *VAR_0, u32 VAR_1)
{
 struct mdp5_kms *VAR_2 = FUNC_0(VAR_0->ctlm);

 (void)VAR_0->reg_offset;
 return FUNC_1(VAR_2, VAR_1);
}
