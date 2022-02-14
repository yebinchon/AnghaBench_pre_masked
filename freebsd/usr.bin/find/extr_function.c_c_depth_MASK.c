
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int flags; int d_data; } ;
typedef TYPE_1__ PLAN ;
typedef TYPE_2__ OPTION ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (TYPE_2__*,char***) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;

PLAN *
FUNC_4(OPTION *VAR_2, char ***VAR_3)
{
 PLAN *VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_3(VAR_2);

 VAR_5 = **VAR_3;
 if (VAR_5 && !(VAR_4->flags & VAR_0)) {

  if (*VAR_5 == '+' || *VAR_5 == '-')
   VAR_5++;

  if (*VAR_5 == '+' || *VAR_5 == '-')
   VAR_5++;
  if (FUNC_1(*VAR_5))
   VAR_4->flags |= VAR_0;
 }

 if (VAR_4->flags & VAR_0) {
  char *VAR_6;

  VAR_6 = FUNC_2(VAR_2, VAR_3);
  VAR_4->d_data = FUNC_0(VAR_4, VAR_2->name, VAR_6, ((void*)0));
 } else {
  VAR_1 = 1;
 }

 return VAR_4;
}
