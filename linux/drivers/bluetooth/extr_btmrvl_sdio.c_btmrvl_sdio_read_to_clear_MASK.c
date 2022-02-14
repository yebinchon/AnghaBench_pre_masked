
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct btmrvl_sdio_card {TYPE_1__* reg; int func; TYPE_2__* priv; } ;
struct btmrvl_adapter {int * hw_regs; } ;
struct TYPE_4__ {struct btmrvl_adapter* adapter; } ;
struct TYPE_3__ {size_t host_intstatus; } ;


 int FUNC_0 (char*,size_t,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct btmrvl_sdio_card *VAR_1, u8 *VAR_2)
{
 struct btmrvl_adapter *VAR_3 = VAR_1->priv->adapter;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1->func, VAR_3->hw_regs, 0, VAR_0);
 if (VAR_4) {
  FUNC_1("sdio_readsb: read int hw_regs failed: %d", VAR_4);
  return VAR_4;
 }

 *VAR_2 = VAR_3->hw_regs[VAR_1->reg->host_intstatus];
 FUNC_0("hw_regs[%#x]=%#x", VAR_1->reg->host_intstatus, *VAR_2);

 return 0;
}
