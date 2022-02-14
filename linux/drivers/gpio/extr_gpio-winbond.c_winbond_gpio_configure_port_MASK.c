
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winbond_gpio_port_conflict {scalar_t__ dev; int * name; scalar_t__ warnonly; int testbit; int testreg; } ;
struct winbond_gpio_info {scalar_t__ dev; int outputppbit; int outputreg; int enablebit; int enablereg; struct winbond_gpio_port_conflict conflict; } ;
struct TYPE_2__ {int ppgpios; int odgpios; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,unsigned int,char*) ;
 int FUNC_2 (char*,unsigned int,int *) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 struct winbond_gpio_info* VAR_2 ;
 int FUNC_5 (unsigned long,int ,int ) ;
 int FUNC_6 (unsigned long,int ,int ) ;
 scalar_t__ FUNC_7 (unsigned long,int ,int ) ;
 int FUNC_8 (unsigned long,scalar_t__) ;

__attribute__((used)) static bool FUNC_9(unsigned long VAR_3, unsigned int VAR_4)
{
 const struct winbond_gpio_info *VAR_5 = &VAR_2[VAR_4];
 const struct winbond_gpio_port_conflict *VAR_6 = &VAR_5->conflict;


 if (VAR_6->name != ((void*)0)) {
  if (VAR_6->dev != VAR_0)
   FUNC_8(VAR_3, VAR_6->dev);

  if (FUNC_7(VAR_3, VAR_6->testreg,
       VAR_6->testbit)) {
   if (VAR_6->warnonly)
    FUNC_2("enabled GPIO%u share pins with active %s\n",
     VAR_4 + 1, VAR_6->name);
   else {
    FUNC_2("disabling GPIO%u as %s is enabled\n",
     VAR_4 + 1, VAR_6->name);
    return 0;
   }
  }
 }


 if (VAR_4 == 0)
  FUNC_3(VAR_3);
 else if (VAR_4 == 1)
  FUNC_4(VAR_3);

 FUNC_8(VAR_3, VAR_5->dev);

 FUNC_6(VAR_3, VAR_5->enablereg, VAR_5->enablebit);

 if (VAR_1.ppgpios & FUNC_0(VAR_4))
  FUNC_6(VAR_3, VAR_5->outputreg,
         VAR_5->outputppbit);
 else if (VAR_1.odgpios & FUNC_0(VAR_4))
  FUNC_5(VAR_3, VAR_5->outputreg,
           VAR_5->outputppbit);
 else
  FUNC_1("GPIO%u pins are %s\n", VAR_4 + 1,
     FUNC_7(VAR_3, VAR_5->outputreg,
      VAR_5->outputppbit) ?
     "push-pull" :
     "open drain");

 return 1;
}
