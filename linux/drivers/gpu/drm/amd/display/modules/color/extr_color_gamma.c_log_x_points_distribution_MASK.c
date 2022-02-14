
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dal_logger {int dummy; } ;
struct TYPE_3__ {int value; } ;
struct TYPE_4__ {TYPE_1__ x; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_1(struct dal_logger *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 != ((void*)0)) {
  FUNC_0("Log X Distribution\n");

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   FUNC_0("%llu\n", VAR_1[VAR_3].x.value);
 }
}
