
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipuv3_channel {int num; } ;
struct ipu_soc {int dev; } ;
struct ipu_ic_priv {int lock; struct ipu_soc* ipu; } ;
struct ipu_ic {int rotation; struct ipu_ic_priv* priv; } ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ipu_ic*,int ) ;
 int FUNC_3 (struct ipu_ic*,int,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct ipu_ic *VAR_33, struct ipuv3_channel *VAR_34,
     u32 VAR_35, u32 VAR_36, int VAR_37,
     enum ipu_rotate_mode VAR_38)
{
 struct ipu_ic_priv *VAR_39 = VAR_33->priv;
 struct ipu_soc *VAR_40 = VAR_39->ipu;
 u32 VAR_41, VAR_42, VAR_43;
 u32 VAR_44 = FUNC_0(VAR_38) >> 5;
 bool VAR_45 = 0;
 unsigned long VAR_46;
 int VAR_47 = 0;

 if ((VAR_37 != 8) && (VAR_37 != 16)) {
  FUNC_1(VAR_40->dev, "Illegal burst length for IC\n");
  return -VAR_0;
 }

 VAR_35--;
 VAR_36--;

 if (VAR_44 & 0x2)
  VAR_45 = 1;

 FUNC_5(&VAR_39->lock, VAR_46);

 VAR_41 = FUNC_2(VAR_33, VAR_1);
 VAR_42 = FUNC_2(VAR_33, VAR_19);
 VAR_43 = FUNC_2(VAR_33, VAR_26);

 switch (VAR_34->num) {
 case 136:
  if (VAR_37 == 16)
   VAR_41 |= VAR_4;
  else
   VAR_41 &= ~VAR_4;

  if (VAR_45)
   VAR_41 |= VAR_10;
  else
   VAR_41 &= ~VAR_10;

  VAR_42 &= ~VAR_20;
  VAR_42 |= VAR_36 << VAR_21;

  VAR_43 &= ~VAR_27;
  VAR_43 |= VAR_35 << VAR_28;
  break;
 case 133:
  if (VAR_37 == 16)
   VAR_41 |= VAR_7;
  else
   VAR_41 &= ~VAR_7;
  break;
 case 130:
  VAR_41 &= ~VAR_11;
  VAR_41 |= VAR_44 << VAR_12;
  break;
 case 132:
  if (VAR_37 == 16)
   VAR_41 |= VAR_8;
  else
   VAR_41 &= ~VAR_8;
  break;
 case 135:
  if (VAR_37 == 16)
   VAR_41 |= VAR_2;
  else
   VAR_41 &= ~VAR_2;

  if (VAR_45)
   VAR_41 |= VAR_13;
  else
   VAR_41 &= ~VAR_13;

  VAR_42 &= ~VAR_22;
  VAR_42 |= VAR_36 << VAR_23;

  VAR_43 &= ~VAR_29;
  VAR_43 |= VAR_35 << VAR_30;
  break;
 case 131:
  VAR_41 &= ~VAR_14;
  VAR_41 |= VAR_44 << VAR_15;
  break;
 case 134:
  if (VAR_37 == 16)
   VAR_41 |= VAR_3;
  else
   VAR_41 &= ~VAR_3;

  if (VAR_45)
   VAR_41 |= VAR_16;
  else
   VAR_41 &= ~VAR_16;

  VAR_42 &= ~VAR_24;
  VAR_42 |= VAR_36 << VAR_25;

  VAR_43 &= ~VAR_31;
  VAR_43 |= VAR_35 << VAR_32;
  break;
 case 129:
  VAR_41 &= ~VAR_17;
  VAR_41 |= VAR_44 << VAR_18;
  break;
 case 137:
  if (VAR_37 == 16)
   VAR_41 |= VAR_5;
  else
   VAR_41 &= ~VAR_5;
  break;
 case 138:
  if (VAR_37 == 16)
   VAR_41 |= VAR_6;
  else
   VAR_41 &= ~VAR_6;
  break;
 case 128:
  if (VAR_37 == 16)
   VAR_41 |= VAR_9;
  else
   VAR_41 &= ~VAR_9;
  break;
 default:
  goto unlock;
 }

 FUNC_3(VAR_33, VAR_41, VAR_1);
 FUNC_3(VAR_33, VAR_42, VAR_19);
 FUNC_3(VAR_33, VAR_43, VAR_26);

 if (FUNC_4(VAR_38))
  VAR_33->rotation = 1;

unlock:
 FUNC_6(&VAR_39->lock, VAR_46);
 return VAR_47;
}
