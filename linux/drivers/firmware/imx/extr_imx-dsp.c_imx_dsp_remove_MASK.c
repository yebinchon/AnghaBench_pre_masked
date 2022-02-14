
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct imx_dsp_ipc {struct imx_dsp_chan* chans; } ;
struct imx_dsp_chan {int ch; } ;


 int VAR_0 ;
 struct imx_dsp_ipc* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct imx_dsp_chan *VAR_2;
 struct imx_dsp_ipc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(&VAR_1->dev);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = &VAR_3->chans[VAR_4];
  FUNC_1(VAR_2->ch);
 }

 return 0;
}
