
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ipuv3_channel {scalar_t__ num; struct ipu_soc* ipu; } ;
struct ipu_soc {scalar_t__ ipu_type; int lock; } ;
struct TYPE_3__ {scalar_t__ chnum; int shift; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct ipu_soc*,int ) ;
 int FUNC_2 (struct ipu_soc*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ipuv3_channel *VAR_3, int VAR_4)
{
 struct ipu_soc *VAR_5 = VAR_3->ipu;
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;
 int VAR_9;

 switch (VAR_4) {
 case 0:
 case 1:
  VAR_7 = 0x00;
  break;
 case 2:
  VAR_7 = 0x01;
  break;
 case 4:
  VAR_7 = 0x02;
  break;
 case 8:
  VAR_7 = 0x03;
  break;
 default:
  return -VAR_0;
 }






 if (VAR_7 && VAR_5->ipu_type != VAR_1)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++) {
  if (VAR_3->num == VAR_2[VAR_9].chnum)
   break;
 }
 if (VAR_9 >= FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_3(&VAR_5->lock, VAR_6);

 VAR_8 = FUNC_1(VAR_5, VAR_2[VAR_9].reg);
 VAR_8 &= ~(0x03 << VAR_2[VAR_9].shift);
 VAR_8 |= (VAR_7 << VAR_2[VAR_9].shift);
 FUNC_2(VAR_5, VAR_8, VAR_2[VAR_9].reg);

 FUNC_4(&VAR_5->lock, VAR_6);

 return 0;
}
