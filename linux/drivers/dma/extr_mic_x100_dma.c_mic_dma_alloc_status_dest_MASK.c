
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_dma_chan {int * status_dest; int status_dest_micpa; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (struct mic_dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct mic_dma_chan *VAR_4)
{
 struct device *VAR_5 = &FUNC_4(VAR_4)->dev;

 VAR_4->status_dest = FUNC_3(VAR_3, VAR_2);
 if (!VAR_4->status_dest)
  return -VAR_1;
 VAR_4->status_dest_micpa = FUNC_0(VAR_5, VAR_4->status_dest,
     VAR_3, VAR_0);
 if (FUNC_1(VAR_5, VAR_4->status_dest_micpa)) {
  FUNC_2(VAR_4->status_dest);
  VAR_4->status_dest = ((void*)0);
  return -VAR_1;
 }
 return 0;
}
