
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipu_ic_priv {int lock; } ;
struct ipu_ic_colorspace {int dummy; } ;
struct ipu_ic_csc {int out_cs; struct ipu_ic_colorspace in_cs; } ;
struct ipu_ic {scalar_t__ task; int graphics; TYPE_1__* bit; int out_cs; struct ipu_ic_colorspace g_in_cs; struct ipu_ic_priv* priv; } ;
struct TYPE_2__ {int ic_conf_csc1_en; int ic_cmb_galpha_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ipu_ic_csc*) ;
 int FUNC_1 (struct ipu_ic*,struct ipu_ic_csc*,int) ;
 int FUNC_2 (struct ipu_ic_csc*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct ipu_ic*,int ) ;
 int FUNC_4 (struct ipu_ic*,int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct ipu_ic *VAR_10,
         const struct ipu_ic_colorspace *VAR_11,
         bool VAR_12, u32 VAR_13,
         bool VAR_14, u32 VAR_15)
{
 struct ipu_ic_priv *VAR_16 = VAR_10->priv;
 struct ipu_ic_csc VAR_17;
 unsigned long VAR_18;
 u32 VAR_19, VAR_20;
 int VAR_21 = 0;

 if (VAR_10->task == VAR_6)
  return -VAR_0;

 FUNC_5(&VAR_16->lock, VAR_18);

 VAR_20 = FUNC_3(VAR_10, VAR_3);

 if (!(VAR_20 & VAR_10->bit->ic_conf_csc1_en)) {
  struct ipu_ic_csc VAR_22;

  VAR_21 = FUNC_2(&VAR_22,
          VAR_9,
          VAR_8,
          VAR_7,
          VAR_9,
          VAR_8,
          VAR_7);
  if (VAR_21)
   goto unlock;


  VAR_21 = FUNC_1(VAR_10, &VAR_22, 0);
  if (VAR_21)
   goto unlock;
 }

 VAR_10->g_in_cs = *VAR_11;
 VAR_17 = VAR_10->g_in_cs;
 VAR_17 = VAR_10->out_cs;

 VAR_21 = FUNC_0(&VAR_17);
 if (VAR_21)
  goto unlock;

 VAR_21 = FUNC_1(VAR_10, &VAR_17, 1);
 if (VAR_21)
  goto unlock;

 if (VAR_12) {
  VAR_20 |= VAR_4;
  VAR_19 = FUNC_3(VAR_10, VAR_1);
  VAR_19 &= ~(0xff << VAR_10->bit->ic_cmb_galpha_bit);
  VAR_19 |= (VAR_13 << VAR_10->bit->ic_cmb_galpha_bit);
  FUNC_4(VAR_10, VAR_19, VAR_1);
 } else
  VAR_20 &= ~VAR_4;

 if (VAR_14) {
  VAR_20 |= VAR_5;
  FUNC_4(VAR_10, VAR_15, VAR_2);
 } else
  VAR_20 &= ~VAR_5;

 FUNC_4(VAR_10, VAR_20, VAR_3);

 VAR_10->graphics = 1;
unlock:
 FUNC_6(&VAR_16->lock, VAR_18);
 return VAR_21;
}
