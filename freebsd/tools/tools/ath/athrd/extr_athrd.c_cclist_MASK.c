
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* isoName; char* name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2()
{
 int VAR_1;

 FUNC_1("\nCountry codes:\n");
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++)
  FUNC_1("%2s %-15.15s%s",
   VAR_0[VAR_1].isoName,
   VAR_0[VAR_1].name,
   ((VAR_1+1)%4) == 0 ? "\n" : " ");
 FUNC_1("\n");
}
