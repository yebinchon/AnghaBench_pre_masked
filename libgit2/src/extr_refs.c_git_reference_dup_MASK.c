
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int oid; int symbolic; } ;
struct TYPE_9__ {scalar_t__ type; int db; int peel; TYPE_1__ target; int name; } ;
typedef TYPE_2__ git_reference ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_2 (int ,int *,int *) ;
 TYPE_2__* FUNC_3 (int ,int ) ;

int FUNC_4(git_reference **VAR_1, git_reference *VAR_2)
{
 if (VAR_2->type == VAR_0)
  *VAR_1 = FUNC_3(VAR_2->name, VAR_2->target.symbolic);
 else
  *VAR_1 = FUNC_2(VAR_2->name, &VAR_2->target.oid, &VAR_2->peel);

 FUNC_0(*VAR_1);

 (*VAR_1)->db = VAR_2->db;
 FUNC_1((*VAR_1)->db);

 return 0;
}
