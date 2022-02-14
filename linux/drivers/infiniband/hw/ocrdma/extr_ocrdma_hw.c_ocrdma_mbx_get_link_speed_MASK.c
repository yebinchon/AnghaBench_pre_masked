
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * cmd; } ;
struct ocrdma_mqe {TYPE_1__ u; } ;
struct ocrdma_mbx_hdr {int rsvd_version; } ;
struct ocrdma_get_link_speed_rsp {int pflt_pps_ld_pnum; int res_lnk_st; } ;
struct ocrdma_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ocrdma_mqe*) ;
 struct ocrdma_mqe* FUNC_1 (int ,int) ;
 int FUNC_2 (struct ocrdma_mbx_hdr*,int ,int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

int FUNC_4(struct ocrdma_dev *VAR_6, u8 *VAR_7,
         u8 *VAR_8)
{
 int VAR_9 = -VAR_0;
 struct ocrdma_get_link_speed_rsp *VAR_10;
 struct ocrdma_mqe *VAR_11;

 VAR_11 = FUNC_1(VAR_1,
      sizeof(*VAR_11));
 if (!VAR_11)
  return VAR_9;
 FUNC_2((struct ocrdma_mbx_hdr *)&VAR_11->u.cmd[0],
   VAR_1,
   VAR_5, sizeof(*VAR_11));

 ((struct ocrdma_mbx_hdr *)VAR_11->u.cmd)->rsvd_version = 0x1;

 VAR_9 = FUNC_3(VAR_6, (struct ocrdma_mqe *)VAR_11);
 if (VAR_9)
  goto mbx_err;

 VAR_10 = (struct ocrdma_get_link_speed_rsp *)VAR_11;
 if (VAR_7)
  *VAR_7 = (VAR_10->pflt_pps_ld_pnum & VAR_3)
         >> VAR_4;
 if (VAR_8)
  *VAR_8 = (VAR_10->res_lnk_st & VAR_2);

mbx_err:
 FUNC_0(VAR_11);
 return VAR_9;
}
