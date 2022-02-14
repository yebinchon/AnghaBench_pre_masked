
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int subnet_prefix; int interface_id; } ;
union ib_gid {TYPE_2__ global; int raw; } ;
typedef int u8 ;
struct qedr_dev {TYPE_1__* ndev; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int dev_addr; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 struct qedr_dev* FUNC_2 (struct ib_device*) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct ib_device *VAR_1, u8 VAR_2,
        int VAR_3, union ib_gid *VAR_4)
{
 struct qedr_dev *VAR_5 = FUNC_2(VAR_1);

 FUNC_3(VAR_4->raw, 0, sizeof(VAR_4->raw));
 FUNC_1(VAR_4->raw, VAR_5->ndev->dev_addr);

 FUNC_0(VAR_5, VAR_0, "QUERY sgid[%d]=%llx:%llx\n", VAR_3,
   VAR_4->global.interface_id, VAR_4->global.subnet_prefix);

 return 0;
}
