
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocrdma_fw_conf_rsp {int fn_mode; int max_eq; int base_eqid; } ;
struct ocrdma_dev {int max_eq; int base_eqid; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ocrdma_dev *VAR_2,
       struct ocrdma_fw_conf_rsp *VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_3->fn_mode & VAR_1;
 if (VAR_4 != VAR_1)
  return -VAR_0;
 VAR_2->base_eqid = VAR_3->base_eqid;
 VAR_2->max_eq = VAR_3->max_eq;
 return 0;
}
