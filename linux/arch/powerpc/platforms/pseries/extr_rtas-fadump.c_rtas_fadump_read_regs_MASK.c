
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_fadump_reg_entry {int reg_value; int reg_id; } ;
struct pt_regs {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (struct pt_regs*,int ,int) ;
 int FUNC_3 (struct pt_regs*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct rtas_fadump_reg_entry*
FUNC_4(struct rtas_fadump_reg_entry *VAR_0,
        struct pt_regs *VAR_1)
{
 FUNC_2(VAR_1, 0, sizeof(struct pt_regs));

 while (FUNC_0(VAR_0->reg_id) != FUNC_1("CPUEND")) {
  FUNC_3(VAR_1, FUNC_0(VAR_0->reg_id),
           FUNC_0(VAR_0->reg_value));
  VAR_0++;
 }
 VAR_0++;
 return VAR_0;
}
