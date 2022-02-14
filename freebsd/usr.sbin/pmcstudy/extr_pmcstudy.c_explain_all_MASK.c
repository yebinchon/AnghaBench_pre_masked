
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* cputype; int number; TYPE_1__* ents; int (* explain ) (char*) ;} ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_1;
 FUNC_0("For CPU's of type %s the following expressions are available:\n",VAR_0.cputype);
 FUNC_0("-------------------------------------------------------------\n");
 for(VAR_1=0; VAR_1<VAR_0.number; VAR_1++){
  FUNC_0("For -e %s ", VAR_0.ents[VAR_1].name);
  (*VAR_0.explain)(VAR_0.ents[VAR_1].name);
  FUNC_0("----------------------------\n");
 }
}
