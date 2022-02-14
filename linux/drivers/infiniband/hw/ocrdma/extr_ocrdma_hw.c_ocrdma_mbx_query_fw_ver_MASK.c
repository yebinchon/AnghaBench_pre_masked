
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cmd; } ;
struct ocrdma_mqe {TYPE_1__ u; } ;
struct ocrdma_mbx_hdr {int dummy; } ;
struct ocrdma_fw_ver_rsp {int * running_ver; } ;
struct TYPE_4__ {int * fw_ver; } ;
struct ocrdma_dev {TYPE_2__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocrdma_mqe*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 struct ocrdma_mqe* FUNC_3 (int ,int) ;
 int FUNC_4 (struct ocrdma_mbx_hdr*,int ,int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

__attribute__((used)) static int FUNC_7(struct ocrdma_dev *VAR_3)
{
 int VAR_4 = -VAR_0;
 struct ocrdma_mqe *VAR_5;
 struct ocrdma_fw_ver_rsp *VAR_6;

 VAR_5 = FUNC_3(VAR_1, sizeof(*VAR_5));
 if (!VAR_5)
  return -VAR_0;
 FUNC_4((struct ocrdma_mbx_hdr *)&VAR_5->u.cmd[0],
   VAR_1,
   VAR_2, sizeof(*VAR_5));

 VAR_4 = FUNC_6(VAR_3, (struct ocrdma_mqe *)VAR_5);
 if (VAR_4)
  goto mbx_err;
 VAR_6 = (struct ocrdma_fw_ver_rsp *)VAR_5;
 FUNC_2(&VAR_3->attr.fw_ver[0], 0, sizeof(VAR_3->attr.fw_ver));
 FUNC_1(&VAR_3->attr.fw_ver[0], &VAR_6->running_ver[0],
        sizeof(VAR_6->running_ver));
 FUNC_5(VAR_3->attr.fw_ver, sizeof(VAR_6->running_ver));
mbx_err:
 FUNC_0(VAR_5);
 return VAR_4;
}
