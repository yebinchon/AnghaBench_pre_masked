
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pt_regs {int dummy; } ;
struct hdat_fadump_reg_entry {int reg_num; int reg_type; int reg_val; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pt_regs*,int ,int) ;
 int FUNC_3 (struct pt_regs*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(char *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2,
      bool VAR_3,
      struct pt_regs *VAR_4)
{
 struct hdat_fadump_reg_entry *VAR_5;
 u64 VAR_6;
 int VAR_7;

 FUNC_2(VAR_4, 0, sizeof(struct pt_regs));

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++, VAR_0 += VAR_2) {
  VAR_5 = (struct hdat_fadump_reg_entry *)VAR_0;
  VAR_6 = (VAR_3 ? FUNC_1(VAR_5->reg_val) :
         VAR_5->reg_val);
  FUNC_3(VAR_4,
           FUNC_0(VAR_5->reg_type),
           FUNC_0(VAR_5->reg_num),
           VAR_6);
 }
}
