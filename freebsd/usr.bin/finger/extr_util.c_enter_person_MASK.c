
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct passwd {TYPE_1__** pw_name; } ;
struct TYPE_19__ {int (* get ) (TYPE_4__*,TYPE_2__*,TYPE_2__*,int ) ;int (* put ) (TYPE_4__*,TYPE_2__*,TYPE_2__*,int ) ;} ;
struct TYPE_18__ {int size; TYPE_1__** data; } ;
struct TYPE_17__ {int * whead; } ;
typedef TYPE_1__ PERSON ;
typedef TYPE_2__ DBT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_4__* FUNC_0 (int *,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,int) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_1__*,struct passwd*) ;

PERSON *
FUNC_8(struct passwd *VAR_4)
{
 DBT VAR_5, VAR_6;
 PERSON *VAR_7;

 if (VAR_2 == ((void*)0) &&
     (VAR_2 = FUNC_0(((void*)0), VAR_1, 0, VAR_0, ((void*)0))) == ((void*)0))
  FUNC_1(1, ((void*)0));

 VAR_6.data = VAR_4->pw_name;
 VAR_6.size = FUNC_4(VAR_4->pw_name);

 switch ((*VAR_2->get)(VAR_2, &VAR_6, &VAR_5, 0)) {
 case 0:
  FUNC_2(&VAR_7, VAR_5.data, sizeof VAR_7);
  return (VAR_7);
 default:
 case -1:
  FUNC_1(1, "db get");

 case 1:
  ++VAR_3;
  VAR_7 = FUNC_3();
  FUNC_7(VAR_7, VAR_4);
  VAR_7->whead = ((void*)0);

  VAR_5.size = sizeof(PERSON *);
  VAR_5.data = &VAR_7;
  if ((*VAR_2->put)(VAR_2, &VAR_6, &VAR_5, 0))
   FUNC_1(1, "db put");
  return (VAR_7);
 }
}
