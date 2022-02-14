
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_dpm_list; int entry; scalar_t__ is_prepared; } ;
struct device {TYPE_1__ power; struct device* parent; TYPE_2__* bus; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,int ) ;

void FUNC_8(struct device *VAR_2)
{

 if (FUNC_3(VAR_2))
  return;

 FUNC_7("Adding info for %s:%s\n",
   VAR_2->bus ? VAR_2->bus->name : "No Bus", FUNC_0(VAR_2));
 FUNC_2(VAR_2);
 FUNC_5(&VAR_1);
 if (VAR_2->parent && VAR_2->parent->power.is_prepared)
  FUNC_1(VAR_2, "parent %s should not be sleeping\n",
   FUNC_0(VAR_2->parent));
 FUNC_4(&VAR_2->power.entry, &VAR_0);
 VAR_2->power.in_dpm_list = 1;
 FUNC_6(&VAR_1);
}
