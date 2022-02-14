
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int name; } ;
struct gdsc {int flags; TYPE_1__ pd; scalar_t__ gds_hw_ctrl; int gdscr; int regmap; } ;
typedef enum gdsc_status { ____Placeholder_gdsc_status } gdsc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ,char*) ;
 int FUNC_1 (struct gdsc*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct gdsc *VAR_5, enum gdsc_status VAR_6)
{
 int VAR_7;
 u32 VAR_8 = (VAR_6 == VAR_1) ? 0 : VAR_2;

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_5->gdscr, VAR_2, VAR_8);
 if (VAR_7)
  return VAR_7;


 if ((VAR_5->flags & VAR_4) && VAR_6 == VAR_0) {





  FUNC_3(VAR_3);
  return 0;
 }

 if (VAR_5->gds_hw_ctrl) {
  FUNC_3(1);
 }

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 FUNC_0(VAR_7, "%s status stuck at 'o%s'", VAR_5->pd.name, VAR_6 ? "ff" : "n");
 return VAR_7;
}
