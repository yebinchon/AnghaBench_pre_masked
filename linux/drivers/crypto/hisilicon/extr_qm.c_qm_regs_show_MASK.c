
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {struct hisi_qm* private; } ;
struct qm_dfx_registers {scalar_t__ reg_name; scalar_t__ reg_offset; } ;
struct hisi_qm {scalar_t__ fun_type; scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 struct qm_dfx_registers* VAR_1 ;
 struct qm_dfx_registers* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_3, void *VAR_4)
{
 struct hisi_qm *VAR_5 = VAR_3->private;
 struct qm_dfx_registers *VAR_6;
 u32 VAR_7;

 if (VAR_5->fun_type == VAR_0)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;

 while (VAR_6->reg_name) {
  VAR_7 = FUNC_0(VAR_5->io_base + VAR_6->reg_offset);
  FUNC_1(VAR_3, "%s= 0x%08x\n", VAR_6->reg_name, VAR_7);
  VAR_6++;
 }

 return 0;
}
