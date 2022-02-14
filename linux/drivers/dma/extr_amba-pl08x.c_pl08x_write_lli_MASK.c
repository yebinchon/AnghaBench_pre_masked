
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pl08x_phy_chan {int reg_config; scalar_t__ base; scalar_t__ reg_control; scalar_t__ ftdmac020; scalar_t__ reg_lli; scalar_t__ reg_dst; scalar_t__ reg_src; int id; } ;
struct pl08x_driver_data {TYPE_3__* vd; TYPE_2__* pd; TYPE_1__* adev; } ;
struct TYPE_6__ {scalar_t__ pl080s; } ;
struct TYPE_5__ {int memcpy_burst_size; scalar_t__ memcpy_prot_cache; scalar_t__ memcpy_prot_buff; } ;
struct TYPE_4__ {int dev; } ;


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
 scalar_t__ VAR_11 ;
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
 scalar_t__ VAR_24 ;
 size_t VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 int FUNC_0 (int *,char*,int ,int const,int const,int const,int const,int const,...) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int const,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pl08x_driver_data *VAR_38,
  struct pl08x_phy_chan *VAR_39, const u32 *VAR_40, u32 VAR_41)
{
 if (VAR_38->vd->pl080s)
  FUNC_0(&VAR_38->adev->dev,
   "WRITE channel %d: csrc=0x%08x, cdst=0x%08x, "
   "clli=0x%08x, cctl=0x%08x, cctl2=0x%08x, ccfg=0x%08x\n",
   VAR_39->id, VAR_40[VAR_37], VAR_40[VAR_35],
   VAR_40[VAR_36], VAR_40[VAR_34],
   VAR_40[VAR_25], VAR_41);
 else
  FUNC_0(&VAR_38->adev->dev,
   "WRITE channel %d: csrc=0x%08x, cdst=0x%08x, "
   "clli=0x%08x, cctl=0x%08x, ccfg=0x%08x\n",
   VAR_39->id, VAR_40[VAR_37], VAR_40[VAR_35],
   VAR_40[VAR_36], VAR_40[VAR_34], VAR_41);

 FUNC_2(VAR_40[VAR_37], VAR_39->reg_src);
 FUNC_2(VAR_40[VAR_35], VAR_39->reg_dst);
 FUNC_2(VAR_40[VAR_36], VAR_39->reg_lli);







 if (VAR_39->ftdmac020) {
  u32 VAR_42 = VAR_40[VAR_34];
  u32 VAR_43 = 0;


  FUNC_2(VAR_42 & VAR_23,
          VAR_39->base + VAR_11);
  if (VAR_42 & VAR_22)
   VAR_43 |= VAR_10;
  VAR_43 |= ((VAR_42 & VAR_20) >>
   (VAR_21 -
    VAR_9));
  VAR_43 |= ((VAR_42 & VAR_15) >>
   (VAR_16 -
    VAR_2));
  VAR_43 |= ((VAR_42 & VAR_17) >>
   (VAR_18 -
    VAR_6));
  VAR_43 |= ((VAR_42 & VAR_12) >>
   (VAR_13 -
    VAR_0));
  if (VAR_42 & VAR_19)
   VAR_43 |= VAR_7;
  if (VAR_42 & VAR_14)
   VAR_43 |= VAR_1;
  switch (VAR_38->pd->memcpy_burst_size) {
  default:
  case 135:
   VAR_43 |= VAR_26 <<
    VAR_8;
   break;
  case 130:
   VAR_43 |= VAR_31 <<
    VAR_8;
   break;
  case 128:
   VAR_43 |= VAR_33 <<
    VAR_8;
   break;
  case 133:
   VAR_43 |= VAR_28 <<
    VAR_8;
   break;
  case 131:
   VAR_43 |= VAR_30 <<
    VAR_8;
   break;
  case 129:
   VAR_43 |= VAR_32 <<
    VAR_8;
   break;
  case 134:
   VAR_43 |= VAR_27 <<
    VAR_8;
   break;
  case 132:
   VAR_43 |= VAR_29 <<
    VAR_8;
   break;
  }


  if (VAR_38->pd->memcpy_prot_buff)
   VAR_43 |= VAR_4;
  if (VAR_38->pd->memcpy_prot_cache)
   VAR_43 |= VAR_5;

  VAR_43 |= VAR_3;

  FUNC_2(VAR_43, VAR_39->reg_control);
 } else {

  FUNC_2(VAR_40[VAR_34], VAR_39->reg_control);
 }


 if (VAR_38->vd->pl080s)
  FUNC_2(VAR_40[VAR_25],
    VAR_39->base + VAR_24);

 FUNC_1(VAR_41, VAR_39->reg_config);
}
