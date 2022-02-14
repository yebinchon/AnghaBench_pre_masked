
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_vdi {int lock; } ;
typedef enum ipu_motion_sel { ____Placeholder_ipu_motion_sel } ipu_motion_sel ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipu_vdi*,int ) ;
 int FUNC_1 (struct ipu_vdi*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ipu_vdi *VAR_5, enum ipu_motion_sel VAR_6)
{
 unsigned long VAR_7;
 u32 VAR_8;

 FUNC_2(&VAR_5->lock, VAR_7);

 VAR_8 = FUNC_0(VAR_5, VAR_0);

 VAR_8 &= ~VAR_3;

 switch (VAR_6) {
 case 128:
  VAR_8 |= VAR_4;
  break;
 case 129:
  VAR_8 |= VAR_1;
  break;
 default:
  VAR_8 |= VAR_2;
  break;
 }

 FUNC_1(VAR_5, VAR_8, VAR_0);

 FUNC_3(&VAR_5->lock, VAR_7);
}
