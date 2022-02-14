
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clocksource {int rating; int flags; int mask; int resume; void* suspend; void* disable; int enable; int read; int name; } ;
struct em_sti_priv {int rate; TYPE_1__* pdev; struct clocksource cs; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct clocksource*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct em_sti_priv *VAR_5)
{
 struct clocksource *VAR_6 = &VAR_5->cs;

 VAR_6->name = FUNC_3(&VAR_5->pdev->dev);
 VAR_6->rating = 200;
 VAR_6->read = VAR_3;
 VAR_6->enable = VAR_2;
 VAR_6->disable = VAR_1;
 VAR_6->suspend = VAR_1;
 VAR_6->resume = VAR_4;
 VAR_6->mask = FUNC_0(48);
 VAR_6->flags = VAR_0;

 FUNC_2(&VAR_5->pdev->dev, "used as clock source\n");

 FUNC_1(VAR_6, VAR_5->rate);
 return 0;
}
