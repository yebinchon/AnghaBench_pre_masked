
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct file {struct dmxdev_filter* private_data; } ;
struct dmxdev_filter {int mutex; int vb2_ctx; int state; struct dmxdev* dev; } ;
struct dmxdev {int mutex; TYPE_1__* demux; } ;
struct dmx_stc {int base; int stc; int num; } ;
struct TYPE_3__ {int (* get_stc ) (TYPE_1__*,int ,int *,int *) ;int (* get_pes_pids ) (TYPE_1__*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dmxdev*,struct dmxdev_filter*,int ) ;
 int FUNC_1 (struct dmxdev*,struct dmxdev_filter*,void*) ;
 int FUNC_2 (struct dmxdev_filter*) ;
 int FUNC_3 (struct dmxdev_filter*) ;
 int FUNC_4 (struct dmxdev*,struct dmxdev_filter*,void*) ;
 int FUNC_5 (struct dmxdev*,struct dmxdev_filter*,int ) ;
 int FUNC_6 (struct dmxdev_filter*,unsigned long) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (int *,void*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,void*) ;
 int FUNC_11 (int *,void*) ;
 int FUNC_12 (int *,void*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*,void*) ;
 int FUNC_17 (TYPE_1__*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_18(struct file *VAR_4,
         unsigned int VAR_5, void *VAR_6)
{
 struct dmxdev_filter *VAR_7 = VAR_4->private_data;
 struct dmxdev *VAR_8 = VAR_7->dev;
 unsigned long VAR_9 = (unsigned long)VAR_6;
 int VAR_10 = 0;

 if (FUNC_14(&VAR_8->mutex))
  return -VAR_3;

 switch (VAR_5) {
 case 129:
  if (FUNC_14(&VAR_7->mutex)) {
   FUNC_15(&VAR_8->mutex);
   return -VAR_3;
  }
  if (VAR_7->state < VAR_0)
   VAR_10 = -VAR_1;
  else
   VAR_10 = FUNC_2(VAR_7);
  FUNC_15(&VAR_7->mutex);
  break;

 case 128:
  if (FUNC_14(&VAR_7->mutex)) {
   FUNC_15(&VAR_8->mutex);
   return -VAR_3;
  }
  VAR_10 = FUNC_3(VAR_7);
  FUNC_15(&VAR_7->mutex);
  break;

 case 131:
  if (FUNC_14(&VAR_7->mutex)) {
   FUNC_15(&VAR_8->mutex);
   return -VAR_3;
  }
  VAR_10 = FUNC_1(VAR_8, VAR_7, VAR_6);
  FUNC_15(&VAR_7->mutex);
  break;

 case 130:
  if (FUNC_14(&VAR_7->mutex)) {
   FUNC_15(&VAR_8->mutex);
   return -VAR_3;
  }
  VAR_10 = FUNC_4(VAR_8, VAR_7, VAR_6);
  FUNC_15(&VAR_7->mutex);
  break;

 case 132:
  if (FUNC_14(&VAR_7->mutex)) {
   FUNC_15(&VAR_8->mutex);
   return -VAR_3;
  }
  VAR_10 = FUNC_6(VAR_7, VAR_9);
  FUNC_15(&VAR_7->mutex);
  break;

 case 138:
  if (!VAR_8->demux->get_pes_pids) {
   VAR_10 = -VAR_1;
   break;
  }
  VAR_8->demux->get_pes_pids(VAR_8->demux, VAR_6);
  break;

 case 137:
  if (!VAR_8->demux->get_stc) {
   VAR_10 = -VAR_1;
   break;
  }
  VAR_10 = VAR_8->demux->get_stc(VAR_8->demux,
          ((struct dmx_stc *)VAR_6)->num,
          &((struct dmx_stc *)VAR_6)->stc,
          &((struct dmx_stc *)VAR_6)->base);
  break;

 case 141:
  if (FUNC_14(&VAR_7->mutex)) {
   VAR_10 = -VAR_3;
   break;
  }
  VAR_10 = FUNC_0(VAR_8, VAR_7, *(u16 *)VAR_6);
  FUNC_15(&VAR_7->mutex);
  break;

 case 134:
  if (FUNC_14(&VAR_7->mutex)) {
   VAR_10 = -VAR_3;
   break;
  }
  VAR_10 = FUNC_5(VAR_8, VAR_7, *(u16 *)VAR_6);
  FUNC_15(&VAR_7->mutex);
  break;
 default:
  VAR_10 = -VAR_2;
  break;
 }
 FUNC_15(&VAR_8->mutex);
 return VAR_10;
}
