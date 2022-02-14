
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_3__ {size_t pkey_tbl_len; } ;
struct rxe_port {size_t* pkey_tbl; TYPE_1__ attr; } ;
struct rxe_dev {struct rxe_port port; } ;
struct TYPE_4__ {int parent; } ;
struct ib_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t) ;
 struct rxe_dev* FUNC_1 (struct ib_device*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_1,
     u8 VAR_2, u16 VAR_3, u16 *VAR_4)
{
 struct rxe_dev *VAR_5 = FUNC_1(VAR_1);
 struct rxe_port *VAR_6;

 VAR_6 = &VAR_5->port;

 if (FUNC_2(VAR_3 >= VAR_6->attr.pkey_tbl_len)) {
  FUNC_0(VAR_1->dev.parent, "invalid index = %d\n",
    VAR_3);
  goto err1;
 }

 *VAR_4 = VAR_6->pkey_tbl[VAR_3];
 return 0;

err1:
 return -VAR_0;
}
