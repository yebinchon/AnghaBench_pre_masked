
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int in_dpm_list; int entry; int completion; } ;
struct device {TYPE_2__ power; TYPE_1__* bus; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (char*,char*,int ) ;

void FUNC_10(struct device *VAR_1)
{
 if (FUNC_3(VAR_1))
  return;

 FUNC_9("Removing info for %s:%s\n",
   VAR_1->bus ? VAR_1->bus->name : "No Bus", FUNC_1(VAR_1));
 FUNC_0(&VAR_1->power.completion);
 FUNC_6(&VAR_0);
 FUNC_5(&VAR_1->power.entry);
 VAR_1->power.in_dpm_list = 0;
 FUNC_7(&VAR_0);
 FUNC_4(VAR_1);
 FUNC_8(VAR_1);
 FUNC_2(VAR_1);
}
