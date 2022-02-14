
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int power_on; int power_off; } ;
struct imx_sc_pm_domain {scalar_t__ rsrc; int name; TYPE_1__ pd; } ;
struct imx_sc_pd_range {scalar_t__ rsrc; char* name; scalar_t__ start_from; scalar_t__ postfix; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct imx_sc_pm_domain* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct device*,char*,int ,scalar_t__) ;
 int FUNC_2 (struct device*,struct imx_sc_pm_domain*) ;
 struct imx_sc_pm_domain* FUNC_3 (struct device*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (int ,int,char*,char*,...) ;

__attribute__((used)) static struct imx_sc_pm_domain *
FUNC_6(struct device *VAR_5, int VAR_6,
        const struct imx_sc_pd_range *VAR_7)
{
 struct imx_sc_pm_domain *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_5, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->rsrc = VAR_7->rsrc + VAR_6;
 VAR_8->pd.power_off = VAR_3;
 VAR_8->pd.power_on = VAR_4;

 if (VAR_7->postfix)
  FUNC_5(VAR_8->name, sizeof(VAR_8->name),
    "%s%i", VAR_7->name, VAR_7->start_from + VAR_6);
 else
  FUNC_5(VAR_8->name, sizeof(VAR_8->name),
    "%s", VAR_7->name);

 VAR_8->pd.name = VAR_8->name;

 if (VAR_8->rsrc >= VAR_2) {
  FUNC_1(VAR_5, "invalid pd %s rsrc id %d found",
    VAR_8->name, VAR_8->rsrc);

  FUNC_2(VAR_5, VAR_8);
  return ((void*)0);
 }

 VAR_9 = FUNC_4(&VAR_8->pd, ((void*)0), 1);
 if (VAR_9) {
  FUNC_1(VAR_5, "failed to init pd %s rsrc id %d",
    VAR_8->name, VAR_8->rsrc);
  FUNC_2(VAR_5, VAR_8);
  return ((void*)0);
 }

 return VAR_8;
}
