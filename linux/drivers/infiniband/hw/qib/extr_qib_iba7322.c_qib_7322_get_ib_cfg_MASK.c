
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {int link_width_enabled; int link_width_active; int link_speed_enabled; int link_speed_active; int vls_operational; TYPE_1__* cpspec; } ;
struct TYPE_2__ {int ibcctrl_a; int ibcctrl_b; } ;


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
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_16 ;
 int FUNC_4 (struct qib_pportdata*,int ) ;

__attribute__((used)) static int FUNC_5(struct qib_pportdata *VAR_17, int VAR_18)
{

 int VAR_19, VAR_20 = 0;
 u64 VAR_21;

 switch (VAR_18) {

 case 137:
  VAR_20 = VAR_17->link_width_enabled;
  goto done;

 case 138:
  VAR_20 = VAR_17->link_width_active;
  goto done;

 case 130:
  VAR_20 = VAR_17->link_speed_enabled;
  goto done;

 case 131:
  VAR_20 = VAR_17->link_speed_active;
  goto done;

 case 132:
  VAR_19 = FUNC_1(VAR_4, VAR_9);
  VAR_21 = FUNC_3(VAR_4, VAR_9);
  break;

 case 139:
  VAR_19 = FUNC_1(VAR_4, VAR_6);
  VAR_21 = FUNC_3(VAR_4, VAR_6);
  break;

 case 140:
  VAR_20 = FUNC_4(VAR_17, VAR_16) &
   FUNC_2(VAR_5, VAR_11);
  goto done;

 case 136:
  VAR_20 = VAR_17->vls_operational;
  goto done;

 case 129:
  VAR_20 = 16;
  goto done;

 case 128:
  VAR_20 = 16;
  goto done;

 case 135:
  VAR_20 = FUNC_0(VAR_17->cpspec->ibcctrl_a, VAR_3,
    VAR_12);
  goto done;

 case 134:
  VAR_20 = FUNC_0(VAR_17->cpspec->ibcctrl_a, VAR_3,
    VAR_13);
  goto done;

 case 141:

  VAR_20 = (VAR_17->cpspec->ibcctrl_a &
         FUNC_2(VAR_3, VAR_10)) ?
   VAR_8 : VAR_7;
  goto done;

 case 142:
  VAR_19 = VAR_1;
  VAR_21 = VAR_2;
  break;

 case 133:




  if (VAR_17->link_speed_active == VAR_15)
   VAR_20 = 3;
  else if (VAR_17->link_speed_active == VAR_14)
   VAR_20 = 1;
  else
   VAR_20 = 0;
  goto done;

 default:
  VAR_20 = -VAR_0;
  goto done;
 }
 VAR_20 = (int)((VAR_17->cpspec->ibcctrl_b >> VAR_19) & VAR_21);
done:
 return VAR_20;
}
