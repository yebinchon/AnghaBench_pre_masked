
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t size; } ;
struct TYPE_8__ {struct TYPE_8__* ident_email; struct TYPE_8__* ident_name; struct TYPE_8__* namespace; struct TYPE_8__* workdir; struct TYPE_8__* commondir; struct TYPE_8__* gitdir; struct TYPE_8__* gitlink; TYPE_4__ reserved_names; int * diff_drivers; int objects; } ;
typedef TYPE_1__ git_repository ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_4__) ;
 int FUNC_3 (TYPE_4__,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(git_repository *VAR_0)
{
 size_t VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 FUNC_7(VAR_0);

 FUNC_5(&VAR_0->objects);

 FUNC_6(VAR_0->diff_drivers);
 VAR_0->diff_drivers = ((void*)0);

 for (VAR_1 = 0; VAR_1 < VAR_0->reserved_names.size; VAR_1++)
  FUNC_4(FUNC_3(VAR_0->reserved_names, VAR_1));
 FUNC_2(VAR_0->reserved_names);

 FUNC_0(VAR_0->gitlink);
 FUNC_0(VAR_0->gitdir);
 FUNC_0(VAR_0->commondir);
 FUNC_0(VAR_0->workdir);
 FUNC_0(VAR_0->namespace);
 FUNC_0(VAR_0->ident_name);
 FUNC_0(VAR_0->ident_email);

 FUNC_1(VAR_0, sizeof(*VAR_0));
 FUNC_0(VAR_0);
}
