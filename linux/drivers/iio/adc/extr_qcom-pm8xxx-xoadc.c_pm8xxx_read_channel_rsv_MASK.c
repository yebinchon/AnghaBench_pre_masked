
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pm8xxx_xoadc {int lock; int map; int dev; int complete; TYPE_1__* variant; } ;
struct pm8xxx_chan_info {int amux_ip_rsv; unsigned int decimation; TYPE_2__* hwchan; int name; } ;
struct TYPE_4__ {unsigned int amux_channel; unsigned int pre_scale_mux; } ;
struct TYPE_3__ {scalar_t__ broken_ratiometric; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int ,char*,int ,unsigned int,unsigned int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct pm8xxx_xoadc *VAR_27,
       const struct pm8xxx_chan_info *VAR_28,
       u8 VAR_29, u16 *VAR_30,
       bool VAR_31)
{
 int VAR_32;
 unsigned int VAR_33;
 u8 VAR_34, VAR_35;
 u8 VAR_36, VAR_37;

 FUNC_0(VAR_27->dev, "read channel \"%s\", amux %d, prescale/mux: %d, rsv %d\n",
  VAR_28->name, VAR_28->hwchan->amux_channel, VAR_28->hwchan->pre_scale_mux, VAR_29);

 FUNC_2(&VAR_27->lock);


 VAR_33 = VAR_28->hwchan->amux_channel << VAR_1;
 VAR_33 |= VAR_28->hwchan->pre_scale_mux << VAR_0;
 VAR_32 = FUNC_6(VAR_27->map, VAR_2, VAR_33);
 if (VAR_32)
  goto unlock;


 VAR_34 = (VAR_20 | VAR_15 |
     VAR_16 | VAR_19);
 if (VAR_27->variant->broken_ratiometric && !VAR_31) {
  if (VAR_28->hwchan->amux_channel == VAR_25)
   VAR_35 = VAR_17;
  else
   VAR_35 = VAR_18;
 } else {
  if (VAR_29 == 0xff)
   VAR_35 = (VAR_28->amux_ip_rsv << VAR_23) |
    VAR_21;
  else
   VAR_35 = (VAR_29 << VAR_23) |
    VAR_21;
 }

 VAR_32 = FUNC_5(VAR_27->map,
     VAR_14,
     ~VAR_34,
     VAR_35);
 if (VAR_32)
  goto unlock;

 VAR_32 = FUNC_6(VAR_27->map, VAR_3,
      VAR_4);
 if (VAR_32)
  goto unlock;


 VAR_32 = FUNC_6(VAR_27->map, VAR_11,
      VAR_12 |
      VAR_13 |
      VAR_28->decimation << VAR_22);
 if (VAR_32)
  goto unlock;

 VAR_32 = FUNC_6(VAR_27->map, VAR_3,
      VAR_5);
 if (VAR_32)
  goto unlock;


 VAR_32 = FUNC_6(VAR_27->map, VAR_6,
      VAR_7);
 if (VAR_32)
  goto unlock;
 VAR_32 = FUNC_6(VAR_27->map, VAR_6,
      VAR_7);
 if (VAR_32)
  goto unlock;



 FUNC_7(&VAR_27->complete);
 VAR_32 = FUNC_6(VAR_27->map, VAR_6,
      VAR_7 |
      VAR_8);
 if (VAR_32)
  goto unlock;


 VAR_32 = FUNC_8(&VAR_27->complete,
       VAR_26);
 if (!VAR_32) {
  FUNC_1(VAR_27->dev, "conversion timed out\n");
  VAR_32 = -VAR_24;
  goto unlock;
 }

 VAR_32 = FUNC_4(VAR_27->map, VAR_9, &VAR_33);
 if (VAR_32)
  goto unlock;
 VAR_36 = VAR_33;
 VAR_32 = FUNC_4(VAR_27->map, VAR_10, &VAR_33);
 if (VAR_32)
  goto unlock;
 VAR_37 = VAR_33;
 *VAR_30 = (VAR_37 << 8) | VAR_36;


 VAR_32 = FUNC_6(VAR_27->map, VAR_6, 0);
 if (VAR_32)
  goto unlock;
 VAR_32 = FUNC_6(VAR_27->map, VAR_6, 0);
 if (VAR_32)
  goto unlock;

unlock:
 FUNC_3(&VAR_27->lock);
 return VAR_32;
}
