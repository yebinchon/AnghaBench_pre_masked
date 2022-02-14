
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_filehdr {int maj_ver; int min_ver; scalar_t__ file_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct icp_qat_uof_filehdr *VAR_4)
{
 int VAR_5 = VAR_4->maj_ver & 0xff;
 int VAR_6 = VAR_4->min_ver & 0xff;

 if (VAR_4->file_id != VAR_1) {
  FUNC_0("QAT: Invalid header 0x%x\n", VAR_4->file_id);
  return -VAR_0;
 }
 if (VAR_6 != VAR_3 || VAR_5 != VAR_2) {
  FUNC_0("QAT: bad UOF version, major 0x%x, minor 0x%x\n",
         VAR_5, VAR_6);
  return -VAR_0;
 }
 return 0;
}
