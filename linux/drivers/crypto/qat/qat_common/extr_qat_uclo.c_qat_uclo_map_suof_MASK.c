
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icp_qat_suof_img_hdr {int ae_mask; } ;
struct TYPE_2__ {unsigned int num_simgs; struct icp_qat_suof_img_hdr* simg_hdr; } ;
struct icp_qat_suof_handle {TYPE_1__ img_table; } ;
struct icp_qat_suof_filehdr {unsigned int num_chunks; } ;
struct icp_qat_suof_chunk_hdr {int dummy; } ;
struct icp_qat_fw_loader_handle {struct icp_qat_suof_handle* sobj_handle; } ;
typedef int img_header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct icp_qat_suof_img_hdr* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct icp_qat_fw_loader_handle*,struct icp_qat_suof_img_hdr*) ;
 scalar_t__ FUNC_3 (struct icp_qat_suof_filehdr*) ;
 int FUNC_4 (struct icp_qat_suof_handle*,struct icp_qat_suof_img_hdr*,struct icp_qat_suof_chunk_hdr*) ;
 int FUNC_5 (struct icp_qat_fw_loader_handle*,struct icp_qat_suof_filehdr*,int) ;
 int FUNC_6 (struct icp_qat_suof_handle*,struct icp_qat_suof_chunk_hdr*) ;
 int FUNC_7 (struct icp_qat_suof_img_hdr*,int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct icp_qat_fw_loader_handle *VAR_4,
        struct icp_qat_suof_filehdr *VAR_5,
        int VAR_6)
{
 struct icp_qat_suof_handle *VAR_7 = VAR_4->sobj_handle;
 struct icp_qat_suof_chunk_hdr *VAR_8 = ((void*)0);
 struct icp_qat_suof_img_hdr *VAR_9 = ((void*)0);
 int VAR_10 = 0, VAR_11 = VAR_3;
 unsigned int VAR_12 = 0;
 struct icp_qat_suof_img_hdr VAR_13;

 if (!VAR_5 || (VAR_6 == 0)) {
  FUNC_1("QAT: input parameter SUOF pointer/size is NULL\n");
  return -VAR_0;
 }
 if (FUNC_3(VAR_5))
  return -VAR_0;
 VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_6);
 if (VAR_10)
  return VAR_10;
 VAR_8 = (struct icp_qat_suof_chunk_hdr *)
    ((uintptr_t)VAR_5 + sizeof(*VAR_5));

 FUNC_6(VAR_7, VAR_8);
 VAR_7->img_table.num_simgs = VAR_5->num_chunks - 1;

 if (VAR_7->img_table.num_simgs != 0) {
  VAR_9 = FUNC_0(VAR_7->img_table.num_simgs,
           sizeof(VAR_13),
           VAR_2);
  if (!VAR_9)
   return -VAR_1;
  VAR_7->img_table.simg_hdr = VAR_9;
 }

 for (VAR_12 = 0; VAR_12 < VAR_7->img_table.num_simgs; VAR_12++) {
  FUNC_4(VAR_4->sobj_handle, &VAR_9[VAR_12],
      &VAR_8[1 + VAR_12]);
  VAR_10 = FUNC_2(VAR_4,
       &VAR_9[VAR_12]);
  if (VAR_10)
   return VAR_10;
  if ((VAR_9[VAR_12].ae_mask & 0x1) != 0)
   VAR_11 = VAR_12;
 }
 FUNC_7(VAR_9, VAR_11,
     VAR_7->img_table.num_simgs);
 return 0;
}
