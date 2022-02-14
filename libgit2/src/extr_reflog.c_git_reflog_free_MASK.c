
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_reflog_entry ;
struct TYPE_7__ {size_t length; } ;
struct TYPE_6__ {struct TYPE_6__* ref_name; TYPE_2__ entries; scalar_t__ db; } ;
typedef TYPE_1__ git_reflog ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (TYPE_2__*,size_t) ;

void FUNC_5(git_reflog *VAR_1)
{
 size_t VAR_2;
 git_reflog_entry *VAR_3;

 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->db)
  FUNC_0(VAR_1->db, VAR_0);

 for (VAR_2=0; VAR_2 < VAR_1->entries.length; VAR_2++) {
  VAR_3 = FUNC_4(&VAR_1->entries, VAR_2);

  FUNC_2(VAR_3);
 }

 FUNC_3(&VAR_1->entries);
 FUNC_1(VAR_1->ref_name);
 FUNC_1(VAR_1);
}
