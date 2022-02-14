
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int entry; } ;
struct device {TYPE_2__ power; TYPE_1__* bus; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,char*,int ) ;

void FUNC_3(struct device *VAR_1)
{
 FUNC_2("Moving %s:%s to end of list\n",
   VAR_1->bus ? VAR_1->bus->name : "No Bus", FUNC_0(VAR_1));
 FUNC_1(&VAR_1->power.entry, &VAR_0);
}
