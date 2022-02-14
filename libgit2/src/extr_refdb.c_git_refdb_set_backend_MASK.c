
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int unlock; scalar_t__ lock; int reflog_delete; int reflog_rename; int reflog_write; int reflog_read; int free; int ensure_log; int has_log; int del; int rename; int write; int iterator; int lookup; int exists; } ;
typedef TYPE_1__ git_refdb_backend ;
struct TYPE_8__ {TYPE_1__* backend; } ;
typedef TYPE_2__ git_refdb ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(git_refdb *VAR_3, git_refdb_backend *VAR_4)
{
 FUNC_0(VAR_4, VAR_2, "git_refdb_backend");

 if (!VAR_4->exists || !VAR_4->lookup || !VAR_4->iterator ||
     !VAR_4->write || !VAR_4->rename || !VAR_4->del ||
     !VAR_4->has_log || !VAR_4->ensure_log || !VAR_4->free ||
     !VAR_4->reflog_read || !VAR_4->reflog_write ||
     !VAR_4->reflog_rename || !VAR_4->reflog_delete ||
     (VAR_4->lock && !VAR_4->unlock)) {
  FUNC_1(VAR_1, "incomplete refdb backend implementation");
  return VAR_0;
 }

 FUNC_2(VAR_3);
 VAR_3->backend = VAR_4;

 return 0;
}
