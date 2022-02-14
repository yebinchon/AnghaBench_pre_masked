
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msr_regs_info {int err; int * regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ,struct msr_regs_info*,int) ;

int FUNC_1(unsigned int VAR_2, u32 *VAR_3)
{
 int VAR_4;
 struct msr_regs_info VAR_5;

 VAR_5.regs = VAR_3;
 VAR_5.err = -VAR_0;
 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_5, 1);

 return VAR_4 ? VAR_4 : VAR_5.err;
}
