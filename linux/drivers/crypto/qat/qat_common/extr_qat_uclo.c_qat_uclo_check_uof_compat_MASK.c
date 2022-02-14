
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* obj_hdr; } ;
struct icp_qat_uclo_objhandle {unsigned int prod_type; int prod_rev; TYPE_2__ encap_uof_obj; } ;
struct TYPE_3__ {unsigned int ac_dev_type; unsigned int max_cpu_ver; unsigned int min_cpu_ver; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_1(struct icp_qat_uclo_objhandle *VAR_1)
{
 unsigned int VAR_2, VAR_3 = VAR_1->prod_type;

 if (!(VAR_3 & VAR_1->encap_uof_obj.obj_hdr->ac_dev_type)) {
  FUNC_0("QAT: UOF type 0x%x doesn't match with platform 0x%x\n",
         VAR_1->encap_uof_obj.obj_hdr->ac_dev_type,
         VAR_3);
  return -VAR_0;
 }
 VAR_2 = VAR_1->prod_rev & 0xff;
 if ((VAR_1->encap_uof_obj.obj_hdr->max_cpu_ver < VAR_2) ||
     (VAR_1->encap_uof_obj.obj_hdr->min_cpu_ver > VAR_2)) {
  FUNC_0("QAT: UOF majVer 0x%x out of range\n", VAR_2);
  return -VAR_0;
 }
 return 0;
}
