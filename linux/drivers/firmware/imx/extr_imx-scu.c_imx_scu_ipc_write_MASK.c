
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_sc_rpc_msg {int size; int func; int svc; } ;
struct imx_sc_ipc {struct imx_sc_chan* chans; int dev; } ;
struct imx_sc_chan {int ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct imx_sc_ipc *VAR_2, void *VAR_3)
{
 struct imx_sc_rpc_msg *VAR_4 = VAR_3;
 struct imx_sc_chan *VAR_5;
 u32 *VAR_6 = VAR_3;
 int VAR_7;
 int VAR_8;


 if (VAR_4->size > VAR_1)
  return -VAR_0;

 FUNC_0(VAR_2->dev, "RPC SVC %u FUNC %u SIZE %u\n", VAR_4->svc,
  VAR_4->func, VAR_4->size);

 for (VAR_8 = 0; VAR_8 < VAR_4->size; VAR_8++) {
  VAR_5 = &VAR_2->chans[VAR_8 % 4];
  VAR_7 = FUNC_1(VAR_5->ch, &VAR_6[VAR_8]);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return 0;
}
