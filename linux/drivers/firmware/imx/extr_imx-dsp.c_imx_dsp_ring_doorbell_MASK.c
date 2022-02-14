
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_dsp_ipc {struct imx_dsp_chan* chans; } ;
struct imx_dsp_chan {int ch; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

int FUNC_1(struct imx_dsp_ipc *VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 struct imx_dsp_chan *VAR_5;

 if (VAR_3 >= VAR_0)
  return -VAR_1;

 VAR_5 = &VAR_2->chans[VAR_3];
 VAR_4 = FUNC_0(VAR_5->ch, ((void*)0));
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
