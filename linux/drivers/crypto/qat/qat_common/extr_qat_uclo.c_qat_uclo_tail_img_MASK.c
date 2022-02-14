
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icp_qat_suof_img_hdr {int dummy; } ;


 int FUNC_0 (struct icp_qat_suof_img_hdr*,struct icp_qat_suof_img_hdr*,int) ;

__attribute__((used)) static void FUNC_1(struct icp_qat_suof_img_hdr *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2)
{
 struct icp_qat_suof_img_hdr VAR_3;

 if (VAR_1 != VAR_2 - 1) {
  FUNC_0(&VAR_3, &VAR_0[VAR_2 - 1],
         sizeof(*VAR_0));
  FUNC_0(&VAR_0[VAR_2 - 1], &VAR_0[VAR_1],
         sizeof(*VAR_0));
  FUNC_0(&VAR_0[VAR_1], &VAR_3,
         sizeof(*VAR_0));
 }
}
