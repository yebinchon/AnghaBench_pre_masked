
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynqmp_ipi_pdata {unsigned long local_id; scalar_t__ method; } ;
struct zynqmp_ipi_mbox {unsigned long remote_id; struct zynqmp_ipi_pdata* pdata; } ;
struct arm_smccc_res {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long,int ,int ,int ,int ,struct arm_smccc_res*) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long,unsigned long,int ,int ,int ,int ,struct arm_smccc_res*) ;

__attribute__((used)) static void FUNC_2(struct zynqmp_ipi_mbox *VAR_1,
          unsigned long VAR_2, unsigned long VAR_3,
          struct arm_smccc_res *VAR_4)
{
 struct zynqmp_ipi_pdata *VAR_5 = VAR_1->pdata;
 unsigned long VAR_6, VAR_7;

 VAR_6 = VAR_5->local_id;
 VAR_7 = VAR_1->remote_id;
 if (VAR_5->method == VAR_0)
  FUNC_1(VAR_2, VAR_6, VAR_7, VAR_3, 0, 0, 0, 0, VAR_4);
 else
  FUNC_0(VAR_2, VAR_6, VAR_7, VAR_3, 0, 0, 0, 0, VAR_4);
}
