
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int ARM_pc; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (char*,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_4, unsigned int VAR_5, struct pt_regs *VAR_6)
{
 u32 VAR_7, VAR_8;

 VAR_7 = *VAR_0;
 FUNC_0(VAR_2, 2, &VAR_8);
 FUNC_2("PCI: abort_handler addr = %#lx, isr = %#x, "
  "status = %#x\n", VAR_4, VAR_7, VAR_8);


 *VAR_0 = VAR_1;
 VAR_8 |= VAR_3;
 FUNC_1(VAR_2, 2, VAR_8);





 if (VAR_5 & (1 << 10))
  VAR_6->ARM_pc += 4;

 return 0;
}
