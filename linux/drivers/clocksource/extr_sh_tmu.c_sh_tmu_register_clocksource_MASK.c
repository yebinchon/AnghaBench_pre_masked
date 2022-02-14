
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clocksource {char const* name; int rating; int flags; int mask; int resume; int suspend; int disable; int enable; int read; } ;
struct sh_tmu_channel {TYPE_2__* tmu; int index; struct clocksource cs; } ;
struct TYPE_4__ {int rate; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct clocksource*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct sh_tmu_channel *VAR_6,
           const char *VAR_7)
{
 struct clocksource *VAR_8 = &VAR_6->cs;

 VAR_8->name = VAR_7;
 VAR_8->rating = 200;
 VAR_8->read = VAR_3;
 VAR_8->enable = VAR_2;
 VAR_8->disable = VAR_1;
 VAR_8->suspend = VAR_5;
 VAR_8->resume = VAR_4;
 VAR_8->mask = FUNC_0(32);
 VAR_8->flags = VAR_0;

 FUNC_2(&VAR_6->tmu->pdev->dev, "ch%u: used as clock source\n",
   VAR_6->index);

 FUNC_1(VAR_8, VAR_6->tmu->rate);
 return 0;
}
