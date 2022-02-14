
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neponset_drvdata {TYPE_1__** gpio; } ;
struct TYPE_2__ {int (* set_multiple ) (TYPE_1__*,unsigned long*,unsigned long*) ;} ;


 int FUNC_0 (int,char*) ;
 struct neponset_drvdata* VAR_0 ;
 int FUNC_1 (TYPE_1__*,unsigned long*,unsigned long*) ;

void FUNC_2(unsigned int VAR_1, unsigned int VAR_2)
{
 struct neponset_drvdata *VAR_3 = VAR_0;
 unsigned long VAR_4 = VAR_1, VAR_5 = VAR_2;

 if (VAR_0)
  VAR_3->gpio[0]->set_multiple(VAR_3->gpio[0], &VAR_4, &VAR_5);
 else
  FUNC_0(1, "nep unset\n");
}
