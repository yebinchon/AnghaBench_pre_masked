
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_fdma_dev {int dev; } ;
struct TYPE_3__ {int chan_id; } ;
struct TYPE_4__ {TYPE_1__ chan; } ;
struct st_fdma_chan {int status; struct st_fdma_dev* fdev; TYPE_2__ vchan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;


 unsigned long VAR_6 ;
 int FUNC_0 (int ,char*,int,unsigned long) ;
 unsigned long FUNC_1 (struct st_fdma_chan*,int ) ;

__attribute__((used)) static void FUNC_2(struct st_fdma_chan *VAR_7,
      unsigned long VAR_8)
{
 unsigned long VAR_9, VAR_10;
 int VAR_11 = VAR_7->vchan.chan.chan_id;
 struct st_fdma_dev *VAR_12 = VAR_7->fdev;

 VAR_9 = FUNC_1(VAR_7, VAR_4);
 VAR_10 = VAR_9 & VAR_3;
 VAR_9 &= VAR_5;

 if (VAR_8 & VAR_6) {
  FUNC_0(VAR_12->dev, "chan:%d, error:%ld\n", VAR_11, VAR_10);
  VAR_7->status = VAR_0;
  return;
 }

 switch (VAR_9) {
 case 129:
  VAR_7->status = VAR_2;
  break;

 case 128:
  VAR_7->status = VAR_1;
  break;
 }
}
