
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gameport {int dummy; } ;
struct adi_port {TYPE_1__* adi; } ;
struct TYPE_2__ {scalar_t__ length; int dev; } ;


 int FUNC_0 (struct gameport*) ;
 struct adi_port* FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct gameport*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct adi_port*) ;

__attribute__((used)) static void FUNC_5(struct gameport *VAR_0)
{
 int VAR_1;
 struct adi_port *VAR_2 = FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < 2; VAR_1++)
  if (VAR_2->adi[VAR_1].length > 0)
   FUNC_3(VAR_2->adi[VAR_1].dev);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, ((void*)0));
 FUNC_4(VAR_2);
}
