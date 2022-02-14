
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pkey; } ;
union pvrdma_cmd_resp {TYPE_3__ query_pkey_resp; } ;
struct TYPE_6__ {int cmd; } ;
struct pvrdma_cmd_query_pkey {int index; int port_num; TYPE_1__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_query_pkey query_pkey; } ;
typedef int u8 ;
typedef int u16 ;
struct ib_device {int dummy; } ;
struct TYPE_9__ {TYPE_2__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pvrdma_cmd_query_pkey*,int ,int) ;
 int FUNC_2 (TYPE_4__*,union pvrdma_cmd_req*,union pvrdma_cmd_resp*,int ) ;
 TYPE_4__* FUNC_3 (struct ib_device*) ;

int FUNC_4(struct ib_device *VAR_2, u8 VAR_3, u16 VAR_4,
        u16 *VAR_5)
{
 int VAR_6 = 0;
 union pvrdma_cmd_req VAR_7;
 union pvrdma_cmd_resp VAR_8;
 struct pvrdma_cmd_query_pkey *VAR_9 = &VAR_7.query_pkey;

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->hdr.cmd = VAR_0;
 VAR_9->port_num = VAR_3;
 VAR_9->index = VAR_4;

 VAR_6 = FUNC_2(FUNC_3(VAR_2), &VAR_7, &VAR_8,
         VAR_1);
 if (VAR_6 < 0) {
  FUNC_0(&FUNC_3(VAR_2)->pdev->dev,
    "could not query pkey, error: %d\n", VAR_6);
  return VAR_6;
 }

 *VAR_5 = VAR_8.query_pkey_resp.pkey;

 return 0;
}
