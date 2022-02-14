
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u32 ;
struct ipu_vdi {int lock; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ipu_vdi*,int ) ;
 int FUNC_1 (struct ipu_vdi*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ipu_vdi *VAR_4, v4l2_std_id VAR_5, u32 VAR_6)
{
 bool VAR_7 = 0;
 unsigned long VAR_8;
 u32 VAR_9;

 switch (VAR_6) {
 case 131:
 case 129:
 case 128:
  VAR_7 = 1;
  break;
 case 132:
 case 130:
 case 133:
  VAR_7 = 0;
  break;
 default:
  VAR_7 = (VAR_5 & VAR_0) ? 1 : 0;
  break;
 }

 FUNC_2(&VAR_4->lock, VAR_8);

 VAR_9 = FUNC_0(VAR_4, VAR_1);
 if (VAR_7)
  VAR_9 &= ~(VAR_3 | VAR_2);
 else
  VAR_9 |= VAR_3 | VAR_2;
 FUNC_1(VAR_4, VAR_9, VAR_1);

 FUNC_3(&VAR_4->lock, VAR_8);
}
