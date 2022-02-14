
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int node_desc; } ;
struct TYPE_3__ {int sys_image_guid; } ;
struct rxe_dev {TYPE_2__ ib_dev; TYPE_1__ attr; } ;
struct ib_device_modify {int node_desc; int sys_image_guid; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct rxe_dev* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_2,
        int VAR_3, struct ib_device_modify *VAR_4)
{
 struct rxe_dev *VAR_5 = FUNC_2(VAR_2);

 if (VAR_3 & VAR_1)
  VAR_5->attr.sys_image_guid = FUNC_0(VAR_4->sys_image_guid);

 if (VAR_3 & VAR_0) {
  FUNC_1(VAR_5->ib_dev.node_desc,
         VAR_4->node_desc, sizeof(VAR_5->ib_dev.node_desc));
 }

 return 0;
}
