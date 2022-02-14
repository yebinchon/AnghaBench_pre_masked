
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_uof_strtable {scalar_t__ strings; int table_len; } ;
struct icp_qat_uof_objhdr {int dummy; } ;
struct icp_qat_uof_chunkhdr {scalar_t__ offset; } ;
struct icp_qat_uclo_objhdr {scalar_t__ file_buff; } ;


 int FUNC_0 (int *,scalar_t__,int) ;
 struct icp_qat_uof_chunkhdr* FUNC_1 (struct icp_qat_uof_objhdr*,char*,int *) ;

__attribute__((used)) static struct icp_qat_uof_strtable *
FUNC_2(struct icp_qat_uclo_objhdr *VAR_0,
         char *VAR_1, struct icp_qat_uof_strtable *VAR_2)
{
 struct icp_qat_uof_chunkhdr *VAR_3;

 VAR_3 = FUNC_1((struct icp_qat_uof_objhdr *)
     VAR_0->file_buff, VAR_1, ((void*)0));
 if (VAR_3) {
  int VAR_4;

  FUNC_0(&VAR_2->table_len, VAR_0->file_buff +
         VAR_3->offset, sizeof(VAR_2->table_len));
  VAR_4 = (char *)&VAR_2->strings - (char *)VAR_2;
  VAR_2->strings = (uintptr_t)VAR_0->file_buff +
     VAR_3->offset + VAR_4;
  return VAR_2;
 }
 return ((void*)0);
}
