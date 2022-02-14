
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct passwd {int dummy; } ;
struct TYPE_7__ {scalar_t__ (* get ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;} ;
struct TYPE_6__ {char* data; int size; } ;
typedef int PERSON ;
typedef TYPE_1__ DBT ;


 TYPE_2__* VAR_0 ;
 struct passwd* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct passwd*) ;
 int FUNC_2 (int **,char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;

PERSON *
FUNC_5(char *VAR_1)
{
 struct passwd *VAR_2;

 DBT VAR_3, VAR_4;
 PERSON *VAR_5;

 if (!VAR_0)
  return(((void*)0));

 if ((VAR_2 = FUNC_0(VAR_1)) && FUNC_1(VAR_2))
  return(((void*)0));

 VAR_4.data = VAR_1;
 VAR_4.size = FUNC_3(VAR_1);

 if ((*VAR_0->get)(VAR_0, &VAR_4, &VAR_3, 0))
  return (((void*)0));
 FUNC_2(&VAR_5, VAR_3.data, sizeof VAR_5);
 return (VAR_5);
}
