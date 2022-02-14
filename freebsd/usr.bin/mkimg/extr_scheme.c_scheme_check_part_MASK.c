
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct part {int * label; int type; int alias; } ;
struct mkimg_alias {int alias; int type; } ;
typedef enum alias { ____Placeholder_alias } alias ;
struct TYPE_2__ {scalar_t__ labellen; struct mkimg_alias* aliases; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

int
FUNC_3(struct part *VAR_3)
{
 struct mkimg_alias *VAR_4;
 enum alias VAR_5;

 FUNC_0(VAR_2 != ((void*)0));


 VAR_5 = FUNC_1(VAR_3->alias);
 if (VAR_5 == VAR_0)
  return (VAR_1);

 VAR_4 = VAR_2->aliases;
 while (VAR_4->alias != VAR_0) {
  if (VAR_5 == VAR_4->alias)
   break;
  VAR_4++;
 }
 if (VAR_4->alias == VAR_0)
  return (VAR_1);
 VAR_3->type = VAR_4->type;


 if (VAR_3->label != ((void*)0)) {
  if (FUNC_2(VAR_3->label) > VAR_2->labellen)
   return (VAR_1);
 }

 return (0);
}
