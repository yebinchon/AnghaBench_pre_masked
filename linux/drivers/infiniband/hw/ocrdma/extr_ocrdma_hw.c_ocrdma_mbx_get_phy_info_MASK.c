
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cmd; } ;
struct ocrdma_mqe {TYPE_1__ u; } ;
struct ocrdma_mbx_hdr {int dummy; } ;
struct ocrdma_get_phy_info_rsp {int ityp_ptyp; int fspeed_aspeed; } ;
struct TYPE_4__ {int phy_type; int interface_type; int auto_speeds_supported; int fixed_speeds_supported; } ;
struct ocrdma_dev {TYPE_2__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ocrdma_mqe*) ;
 struct ocrdma_mqe* FUNC_1 (int ,int) ;
 int FUNC_2 (struct ocrdma_mbx_hdr*,int ,int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_9)
{
 int VAR_10 = -VAR_0;
 struct ocrdma_mqe *VAR_11;
 struct ocrdma_get_phy_info_rsp *VAR_12;

 VAR_11 = FUNC_1(VAR_2, sizeof(*VAR_11));
 if (!VAR_11)
  return VAR_10;

 FUNC_2((struct ocrdma_mbx_hdr *)&VAR_11->u.cmd[0],
   VAR_2, VAR_8,
   sizeof(*VAR_11));

 VAR_10 = FUNC_3(VAR_9, (struct ocrdma_mqe *)VAR_11);
 if (VAR_10)
  goto mbx_err;

 VAR_12 = (struct ocrdma_get_phy_info_rsp *)VAR_11;
 VAR_9->phy.phy_type =
   (VAR_12->ityp_ptyp & VAR_7);
 VAR_9->phy.interface_type =
   (VAR_12->ityp_ptyp & VAR_5)
    >> VAR_6;
 VAR_9->phy.auto_speeds_supported =
   (VAR_12->fspeed_aspeed & VAR_1);
 VAR_9->phy.fixed_speeds_supported =
   (VAR_12->fspeed_aspeed & VAR_3)
    >> VAR_4;
mbx_err:
 FUNC_0(VAR_11);
 return VAR_10;
}
