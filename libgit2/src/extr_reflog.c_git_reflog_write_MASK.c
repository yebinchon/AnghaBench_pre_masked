
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* db; } ;
typedef TYPE_1__ git_reflog ;
struct TYPE_7__ {TYPE_3__* backend; } ;
typedef TYPE_2__ git_refdb ;
struct TYPE_8__ {int (* reflog_write ) (TYPE_3__*,TYPE_1__*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*) ;

int FUNC_2(git_reflog *VAR_0)
{
 git_refdb *VAR_1;

 FUNC_0(VAR_0 && VAR_0->db);

 VAR_1 = VAR_0->db;
 return VAR_1->backend->reflog_write(VAR_1->backend, VAR_0);
}
