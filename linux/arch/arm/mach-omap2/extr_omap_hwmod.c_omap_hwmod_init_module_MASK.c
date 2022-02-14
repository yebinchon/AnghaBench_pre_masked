
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ti_sysc_module_data {TYPE_4__* cfg; scalar_t__ name; } ;
struct ti_sysc_cookie {int clkdm; struct omap_hwmod* data; } ;
struct sysc_regbits {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ omap4; } ;
struct omap_hwmod {int flags; TYPE_3__* class; TYPE_2__ prcm; int hwmod_key; int _state; scalar_t__ name; } ;
struct device {int dummy; } ;
typedef int s32 ;
struct TYPE_8__ {int quirks; } ;
struct TYPE_7__ {scalar_t__ name; } ;


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
 struct omap_hwmod* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct omap_hwmod*) ;
 int FUNC_2 (struct omap_hwmod*) ;
 void* FUNC_3 (int,int ) ;
 int VAR_19 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*,struct omap_hwmod*,struct ti_sysc_module_data const*,struct sysc_regbits*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct device*,struct omap_hwmod*,struct ti_sysc_module_data const*,struct sysc_regbits*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct device*,struct ti_sysc_module_data const*,int *) ;
 int FUNC_10 (struct device*,struct ti_sysc_module_data const*,int *,int *,int *) ;
 int FUNC_11 (struct device*,struct ti_sysc_module_data const*,struct sysc_regbits**) ;
 int FUNC_12 (struct device*,struct omap_hwmod*,struct ti_sysc_module_data const*) ;
 int FUNC_13 (struct device*,struct ti_sysc_module_data const*,int *) ;

int FUNC_14(struct device *VAR_20,
      const struct ti_sysc_module_data *VAR_21,
      struct ti_sysc_cookie *VAR_22)
{
 struct omap_hwmod *VAR_23;
 struct sysc_regbits *VAR_24;
 s32 VAR_25, VAR_26, VAR_27;
 u32 VAR_28, VAR_29;
 int VAR_30;

 if (!VAR_20 || !VAR_21 || !VAR_21->name || !VAR_22)
  return -VAR_0;

 VAR_23 = FUNC_0(VAR_21->name);
 if (!VAR_23) {
  VAR_23 = FUNC_3(sizeof(*VAR_23), VAR_2);
  if (!VAR_23)
   return -VAR_1;

  VAR_23->name = VAR_21->name;
  VAR_23->_state = VAR_18;
  FUNC_4(&VAR_23->hwmod_key);


  VAR_23->prcm.omap4.flags = VAR_6;

  VAR_23->class = FUNC_3(sizeof(*VAR_23->class), VAR_2);
  if (!VAR_23->class) {
   FUNC_2(VAR_23);
   return -VAR_1;
  }

  FUNC_12(VAR_20, VAR_23, VAR_21);

  VAR_23->class->name = VAR_21->name;
  FUNC_5(&VAR_19);
  VAR_30 = FUNC_1(VAR_23);
  FUNC_6(&VAR_19);
 }

 VAR_22->data = VAR_23;

 VAR_30 = FUNC_11(VAR_20, VAR_21, &VAR_24);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_10(VAR_20, VAR_21, &VAR_25,
      &VAR_26, &VAR_27);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_13(VAR_20, VAR_21, &VAR_28);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_9(VAR_20, VAR_21, &VAR_29);
 if (VAR_30)
  return VAR_30;

 if (VAR_21->cfg->quirks & VAR_11)
  VAR_23->flags |= VAR_5;
 if (VAR_21->cfg->quirks & VAR_12)
  VAR_23->flags |= VAR_3;
 if (VAR_21->cfg->quirks & VAR_13)
  VAR_23->flags |= VAR_4;
 if (VAR_21->cfg->quirks & VAR_17)
  VAR_23->flags |= VAR_7;
 if (VAR_21->cfg->quirks & VAR_15)
  VAR_23->flags |= VAR_9;
 if (VAR_21->cfg->quirks & VAR_16)
  VAR_23->flags |= VAR_10;
 if (VAR_21->cfg->quirks & VAR_14)
  VAR_23->flags |= VAR_8;

 VAR_30 = FUNC_8(VAR_20, VAR_23, VAR_21, VAR_24,
     VAR_25, VAR_26, VAR_27,
     VAR_28, VAR_29);
 if (!VAR_30)
  return VAR_30;

 return FUNC_7(VAR_20, VAR_23, VAR_21, VAR_24,
       VAR_22->clkdm, VAR_25,
       VAR_26, VAR_27,
       VAR_28, VAR_29);
}
