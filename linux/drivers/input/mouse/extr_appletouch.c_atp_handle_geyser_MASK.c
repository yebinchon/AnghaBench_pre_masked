
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atp {TYPE_1__* intf; int * info; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct atp*) ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct atp *VAR_2)
{
 if (VAR_2->info != &VAR_1) {

  if (FUNC_0(VAR_2))
   return -VAR_0;

  FUNC_1(&VAR_2->intf->dev, "Geyser mode initialized.\n");
 }

 return 0;
}
