
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int subnet_prefix; } ;
union ib_gid {int * raw; TYPE_1__ global; } ;
typedef int u8 ;
struct qedr_dev {int* gsi_ll2_mac_address; TYPE_3__* ndev; int cdev; TYPE_2__* ops; union ib_gid* sgid_tbl; } ;
typedef int guid ;
struct TYPE_6__ {int dev_addr; } ;
struct TYPE_5__ {int (* ll2_set_mac_filter ) (int ,int*,int ) ;} ;


 int FUNC_0 (struct qedr_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int *,int*,int) ;
 int FUNC_4 (struct qedr_dev*,int ,int ) ;
 int FUNC_5 (int ,int*,int ) ;

__attribute__((used)) static void FUNC_6(struct qedr_dev *VAR_2)
{
 union ib_gid *VAR_3 = &VAR_2->sgid_tbl[0];
 u8 VAR_4[8], VAR_5[6];
 int VAR_6;


 FUNC_2(&VAR_5[0], VAR_2->ndev->dev_addr);
 VAR_4[0] = VAR_5[0] ^ 2;
 VAR_4[1] = VAR_5[1];
 VAR_4[2] = VAR_5[2];
 VAR_4[3] = 0xff;
 VAR_4[4] = 0xfe;
 VAR_4[5] = VAR_5[3];
 VAR_4[6] = VAR_5[4];
 VAR_4[7] = VAR_5[5];
 VAR_3->global.subnet_prefix = FUNC_1(0xfe80000000000000LL);
 FUNC_3(&VAR_3->raw[8], VAR_4, sizeof(VAR_4));


 VAR_6 = VAR_2->ops->ll2_set_mac_filter(VAR_2->cdev,
       VAR_2->gsi_ll2_mac_address,
       VAR_2->ndev->dev_addr);

 FUNC_2(VAR_2->gsi_ll2_mac_address, VAR_2->ndev->dev_addr);

 FUNC_4(VAR_2, VAR_1, VAR_0);

 if (VAR_6)
  FUNC_0(VAR_2, "Error updating mac filter\n");
}
