
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* power_on ) (TYPE_1__*) ;scalar_t__ power_off; int flags; } ;
struct gdsc {scalar_t__ pwrsts; int flags; TYPE_1__ pd; int gdscr; int regmap; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct gdsc*,int ) ;
 int FUNC_1 (struct gdsc*) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct gdsc*) ;
 int FUNC_4 (struct gdsc*,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct gdsc *VAR_15)
{
 u32 VAR_16, VAR_17;
 int VAR_18, VAR_19;






 VAR_16 = VAR_9 | VAR_12 |
        VAR_5 | VAR_3 | VAR_1;
 VAR_17 = VAR_6 | VAR_4 | VAR_2;
 VAR_19 = FUNC_6(VAR_15->regmap, VAR_15->gdscr, VAR_16, VAR_17);
 if (VAR_19)
  return VAR_19;


 if (VAR_15->pwrsts == VAR_10) {
  VAR_19 = FUNC_4(VAR_15, VAR_7);
  if (VAR_19)
   return VAR_19;
 }

 VAR_18 = FUNC_0(VAR_15, VAR_7);
 if (VAR_18 < 0)
  return VAR_18;





 if ((VAR_15->flags & VAR_13) && VAR_18)
  FUNC_2(&VAR_15->pd);


 if (VAR_15->flags & VAR_0) {
  if (!VAR_18)
   FUNC_2(&VAR_15->pd);
  VAR_18 = 1;
  VAR_15->pd.flags |= VAR_8;
 }

 if (VAR_18 || (VAR_15->pwrsts & VAR_11))
  FUNC_3(VAR_15);
 else
  FUNC_1(VAR_15);

 if (!VAR_15->pd.power_off)
  VAR_15->pd.power_off = VAR_14;
 if (!VAR_15->pd.power_on)
  VAR_15->pd.power_on = FUNC_2;
 FUNC_5(&VAR_15->pd, ((void*)0), !VAR_18);

 return 0;
}
