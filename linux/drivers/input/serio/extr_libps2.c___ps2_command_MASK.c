
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct ps2dev {int flags; unsigned int cmdcnt; unsigned int* cmdbuf; int nak; TYPE_1__* serio; int wait; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,unsigned int*,int ,int,unsigned int,unsigned int*) ;
 int FUNC_2 (unsigned int*,unsigned int*,unsigned int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (struct ps2dev*,unsigned int,unsigned int) ;
 int FUNC_5 (struct ps2dev*,unsigned int,int,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 unsigned int FUNC_8 (int ,int,unsigned int) ;

int FUNC_9(struct ps2dev *VAR_9, u8 *VAR_10, unsigned int VAR_11)
{
 unsigned int VAR_12;
 unsigned int VAR_13 = (VAR_11 >> 12) & 0xf;
 unsigned int VAR_14 = (VAR_11 >> 8) & 0xf;
 int VAR_15;
 int VAR_16;
 u8 VAR_17[16];

 if (VAR_14 > sizeof(VAR_9->cmdbuf)) {
  FUNC_0(1);
  return -VAR_1;
 }

 if (VAR_13 && !VAR_10) {
  FUNC_0(1);
  return -VAR_1;
 }

 FUNC_2(VAR_17, VAR_10, VAR_13);

 FUNC_7(VAR_9->serio);

 VAR_9->flags = VAR_11 == VAR_3 ? VAR_8 : 0;
 VAR_9->cmdcnt = VAR_14;
 if (VAR_14 && VAR_10)
  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
   VAR_9->cmdbuf[(VAR_14 - 1) - VAR_16] = VAR_10[VAR_16];


 VAR_9->flags |= VAR_5;






 VAR_12 = VAR_11 == VAR_4 ? 1000 : 200;

 VAR_15 = FUNC_5(VAR_9, VAR_11 & 0xff, VAR_12, 2);
 if (VAR_15)
  goto out_reset_flags;


 VAR_9->flags &= ~VAR_5;

 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  VAR_15 = FUNC_5(VAR_9, VAR_10[VAR_16], 200, 2);
  if (VAR_15)
   goto out_reset_flags;
 }

 FUNC_6(VAR_9->serio);




 VAR_12 = FUNC_3(VAR_11 == VAR_4 ? 4000 : 500);

 VAR_12 = FUNC_8(VAR_9->wait,
         !(VAR_9->flags & VAR_7), VAR_12);

 if (VAR_9->cmdcnt && !(VAR_9->flags & VAR_7)) {

  VAR_12 = FUNC_4(VAR_9, VAR_11, VAR_12);
  FUNC_8(VAR_9->wait,
       !(VAR_9->flags & VAR_6), VAR_12);
 }

 FUNC_7(VAR_9->serio);

 if (VAR_10)
  for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
   VAR_10[VAR_16] = VAR_9->cmdbuf[(VAR_14 - 1) - VAR_16];

 if (VAR_9->cmdcnt &&
     (VAR_11 != VAR_4 || VAR_9->cmdcnt != 1)) {
  VAR_15 = -VAR_2;
  goto out_reset_flags;
 }

 VAR_15 = 0;

 out_reset_flags:
 VAR_9->flags = 0;
 FUNC_6(VAR_9->serio);

 FUNC_1(&VAR_9->serio->dev,
  "%02x [%*ph] - %x/%08lx [%*ph]\n",
  VAR_11 & 0xff, VAR_13, VAR_17,
  VAR_9->nak, VAR_9->flags,
  VAR_14, VAR_10 ?: VAR_17);





 return VAR_15 != -VAR_0 ? VAR_15 : -VAR_2;
}
