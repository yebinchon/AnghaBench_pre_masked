
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lineno; int synch_lineno; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

void
FUNC_1(void)
{
 FUNC_0(VAR_0, "#line %d \"%d\"\n",
     VAR_2[VAR_1].lineno, VAR_2[VAR_1].name);
 VAR_2[VAR_1].synch_lineno = VAR_2[VAR_1].lineno;
}
