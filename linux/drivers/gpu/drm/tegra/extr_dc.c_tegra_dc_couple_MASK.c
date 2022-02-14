
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tegra_dc {int pipe; TYPE_2__* dev; TYPE_1__* soc; } ;
struct device_link {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int driver; } ;
struct TYPE_5__ {scalar_t__ coupled_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct device*) ;
 struct device_link* FUNC_3 (TYPE_2__*,struct device*,int) ;
 struct device* FUNC_4 (int ,int *,int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct tegra_dc *VAR_5)
{





 if (VAR_5->soc->coupled_pm && VAR_5->pipe == 1) {
  u32 VAR_6 = VAR_1 | VAR_0;
  struct device_link *VAR_7;
  struct device *VAR_8;

  VAR_8 = FUNC_4(VAR_5->dev->driver, ((void*)0), ((void*)0),
          VAR_4);
  if (!VAR_8)
   return -VAR_3;

  VAR_7 = FUNC_3(VAR_5->dev, VAR_8, VAR_6);
  if (!VAR_7) {
   FUNC_1(VAR_5->dev, "failed to link controllers\n");
   return -VAR_2;
  }

  FUNC_0(VAR_5->dev, "coupled to %s\n", FUNC_2(VAR_8));
 }

 return 0;
}
