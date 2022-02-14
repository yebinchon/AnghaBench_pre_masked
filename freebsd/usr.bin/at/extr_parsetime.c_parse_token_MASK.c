
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int plural; int name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_4)
{
    size_t VAR_5;

    for (VAR_5=0; VAR_5<(sizeof VAR_1/sizeof VAR_1[0]); VAR_5++)
 if (FUNC_0(VAR_1[VAR_5].name, VAR_4) == 0) {
     VAR_3 = VAR_1[VAR_5].plural;
     return VAR_2 = VAR_1[VAR_5].value;
 }


    return VAR_0;
}
