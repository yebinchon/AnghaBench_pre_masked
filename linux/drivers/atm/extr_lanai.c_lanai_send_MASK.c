
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; int len; } ;
struct TYPE_6__ {struct atm_vcc* atmvcc; } ;
struct lanai_vcc {TYPE_2__ tx; int * vbase; } ;
struct lanai_dev {int dummy; } ;
struct TYPE_7__ {int aal; } ;
struct atm_vcc {int vci; TYPE_3__ qos; TYPE_1__* dev; scalar_t__ dev_data; } ;
struct TYPE_8__ {struct atm_vcc* vcc; } ;
struct TYPE_5__ {scalar_t__ dev_data; } ;




 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 int FUNC_7 (struct lanai_dev*,struct lanai_vcc*,struct sk_buff*) ;
 int FUNC_8 (struct lanai_dev*,struct lanai_vcc*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct atm_vcc *VAR_3, struct sk_buff *VAR_4)
{
 struct lanai_vcc *VAR_5 = (struct lanai_vcc *) VAR_3->dev_data;
 struct lanai_dev *VAR_6 = (struct lanai_dev *) VAR_3->dev->dev_data;
 unsigned long VAR_7;
 if (FUNC_6(VAR_5 == ((void*)0) || VAR_5->vbase == ((void*)0) ||
       VAR_5->tx.atmvcc != VAR_3))
  goto einval;
 FUNC_0(VAR_4)->vcc = VAR_3;
 switch (VAR_3->qos.aal) {
  case 128:
   FUNC_4(&VAR_2, VAR_7);
   FUNC_8(VAR_6, VAR_5, VAR_4);
   FUNC_5(&VAR_2, VAR_7);
   return 0;
  case 129:
   if (FUNC_6(VAR_4->len != VAR_0-1))
    goto einval;

   FUNC_2((u32 *) VAR_4->data);
   FUNC_4(&VAR_2, VAR_7);
   FUNC_7(VAR_6, VAR_5, VAR_4);
   FUNC_5(&VAR_2, VAR_7);
   return 0;
 }
 FUNC_1("lanai_send: bad aal=%d on vci=%d\n", (int) VAR_3->qos.aal,
     VAR_3->vci);
    einval:
 FUNC_3(VAR_3, VAR_4);
 return -VAR_1;
}
