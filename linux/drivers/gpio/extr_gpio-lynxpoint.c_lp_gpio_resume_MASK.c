
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ngpio; } ;
struct lp_gpio {TYPE_1__ chip; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp_gpio* FUNC_0 (struct device*) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (int,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2)
{
 struct lp_gpio *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3->chip.ngpio; VAR_5++) {
  if (FUNC_1(&VAR_3->chip, VAR_5) != ((void*)0)) {
   VAR_4 = FUNC_3(&VAR_3->chip, VAR_5, VAR_1);
   FUNC_4(FUNC_2(VAR_4) & ~VAR_0, VAR_4);
  }
 }
 return 0;
}
