
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc18xx_dmamux_data {int lock; } ;
struct lpc18xx_dmamux {int busy; } ;
struct device {int dummy; } ;


 struct lpc18xx_dmamux_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct lpc18xx_dmamux_data *VAR_2 = FUNC_0(VAR_0);
 struct lpc18xx_dmamux *VAR_3 = VAR_1;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->lock, VAR_4);
 VAR_3->busy = 0;
 FUNC_2(&VAR_2->lock, VAR_4);
}
