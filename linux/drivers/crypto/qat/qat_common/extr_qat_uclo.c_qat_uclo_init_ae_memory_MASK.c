
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_initmem {int region; } ;
struct icp_qat_fw_loader_handle {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct icp_qat_fw_loader_handle*,struct icp_qat_uof_initmem*) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,struct icp_qat_uof_initmem*) ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle *VAR_1,
       struct icp_qat_uof_initmem *VAR_2)
{
 switch (VAR_2->region) {
 case 129:
  if (FUNC_1(VAR_1, VAR_2))
   return -VAR_0;
  break;
 case 128:
  if (FUNC_2(VAR_1, VAR_2))
   return -VAR_0;
  break;
 default:
  FUNC_0("QAT: initmem region error. region type=0x%x\n",
         VAR_2->region);
  return -VAR_0;
 }
 return 0;
}
