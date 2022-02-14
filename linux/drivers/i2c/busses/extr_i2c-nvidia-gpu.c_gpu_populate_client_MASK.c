
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gpu_i2c_dev {int ccgx_client; TYPE_1__* gpu_ccgx_ucsi; int adapter; int dev; } ;
struct TYPE_3__ {int addr; int irq; int properties; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct gpu_i2c_dev *VAR_4, int VAR_5)
{
 VAR_4->gpu_ccgx_ucsi = FUNC_0(VAR_4->dev,
        sizeof(*VAR_4->gpu_ccgx_ucsi),
        VAR_2);
 if (!VAR_4->gpu_ccgx_ucsi)
  return -VAR_1;

 FUNC_2(VAR_4->gpu_ccgx_ucsi->type, "ccgx-ucsi",
  sizeof(VAR_4->gpu_ccgx_ucsi->type));
 VAR_4->gpu_ccgx_ucsi->addr = 0x8;
 VAR_4->gpu_ccgx_ucsi->irq = VAR_5;
 VAR_4->gpu_ccgx_ucsi->properties = VAR_3;
 VAR_4->ccgx_client = FUNC_1(&VAR_4->adapter, VAR_4->gpu_ccgx_ucsi);
 if (!VAR_4->ccgx_client)
  return -VAR_0;

 return 0;
}
