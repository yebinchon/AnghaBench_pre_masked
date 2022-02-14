
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_uof_init_regsym {unsigned int value; int init_type; int ctx; scalar_t__ reg_addr; int reg_type; } ;
struct icp_qat_uclo_encapme {unsigned int init_regsym_num; struct icp_qat_uof_init_regsym* init_regsym; TYPE_1__* img_ptr; } ;
struct icp_qat_fw_loader_handle {int dummy; } ;
typedef enum icp_qat_uof_regtype { ____Placeholder_icp_qat_uof_regtype } icp_qat_uof_regtype ;
struct TYPE_2__ {int ae_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;




 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,unsigned int,unsigned char,int,unsigned short,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct icp_qat_fw_loader_handle *VAR_2,
     unsigned int VAR_3,
     struct icp_qat_uclo_encapme *VAR_4)
{
 unsigned int VAR_5;
 unsigned char VAR_6;
 struct icp_qat_uof_init_regsym *VAR_7;

 if (FUNC_0(VAR_4->img_ptr->ae_mode) ==
     VAR_1)
  VAR_6 = 0xff;
 else
  VAR_6 = 0x55;

 for (VAR_5 = 0; VAR_5 < VAR_4->init_regsym_num; VAR_5++) {
  unsigned int VAR_8;

  VAR_7 = &VAR_4->init_regsym[VAR_5];
  VAR_8 = VAR_7->value;
  switch (VAR_7->init_type) {
  case 129:
   FUNC_2(VAR_2, VAR_3, VAR_6,
       (enum icp_qat_uof_regtype)
       VAR_7->reg_type,
       (unsigned short)VAR_7->reg_addr,
       VAR_8);
   break;
  case 128:

   if (!((1 << VAR_7->ctx) & VAR_6)) {
    FUNC_1("QAT: invalid ctx num = 0x%x\n",
           VAR_7->ctx);
    return -VAR_0;
   }
   FUNC_2(VAR_2, VAR_3,
       (unsigned char)
       (1 << VAR_7->ctx),
       (enum icp_qat_uof_regtype)
       VAR_7->reg_type,
       (unsigned short)VAR_7->reg_addr,
       VAR_8);
   break;
  case 131:
   FUNC_1("QAT: INIT_EXPR feature not supported\n");
   return -VAR_0;
  case 130:
   FUNC_1("QAT: INIT_EXPR_ENDIAN_SWAP feature not supported\n");
   return -VAR_0;
  default:
   break;
  }
 }
 return 0;
}
