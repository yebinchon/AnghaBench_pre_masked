
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct timeval {int member_0; int member_1; } ;
struct TYPE_3__ {char* uz_warning; char* uz_name; int uz_ratecheck; } ;


 int FUNC_0 (char*,char*,char*) ;
 scalar_t__ FUNC_1 (int *,struct timeval const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(uma_zone_t VAR_1)
{
 static const struct timeval VAR_2 = { 300, 0 };

 if (!VAR_0 || VAR_1->uz_warning == ((void*)0))
  return;

 if (FUNC_1(&VAR_1->uz_ratecheck, &VAR_2))
  FUNC_0("[zone: %s] %s\n", VAR_1->uz_name, VAR_1->uz_warning);
}
