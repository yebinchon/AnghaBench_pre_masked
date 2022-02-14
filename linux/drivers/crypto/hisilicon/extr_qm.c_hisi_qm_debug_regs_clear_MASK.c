
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm_dfx_registers {scalar_t__ reg_offset; } ;
struct hisi_qm {scalar_t__ io_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct qm_dfx_registers* VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct hisi_qm *VAR_5)
{
 struct qm_dfx_registers *VAR_6;
 int VAR_7;


 FUNC_1(0x0, VAR_5->io_base + VAR_3);
 FUNC_1(0x0, VAR_5->io_base + VAR_2);





 FUNC_1(0x1, VAR_5->io_base + VAR_1);

 VAR_6 = VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_0(VAR_5->io_base + VAR_6->reg_offset);
  VAR_6++;
 }

 FUNC_1(0x0, VAR_5->io_base + VAR_1);
}
