
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ref_iterator {int dummy; } ;
struct TYPE_6__ {int flags; int * oid; int refname; } ;
struct files_reflog_iterator {struct dir_iterator* dir_iterator; TYPE_3__ base; int oid; int ref_store; } ;
struct TYPE_5__ {int buf; } ;
struct TYPE_4__ {int st_mode; } ;
struct dir_iterator {char* basename; int relative_path; TYPE_2__ path; TYPE_1__ st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dir_iterator*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct ref_iterator*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *,int*) ;

__attribute__((used)) static int FUNC_6(struct ref_iterator *VAR_2)
{
 struct files_reflog_iterator *VAR_3 =
  (struct files_reflog_iterator *)VAR_2;
 struct dir_iterator *VAR_4 = VAR_3->dir_iterator;
 int VAR_5;

 while ((VAR_5 = FUNC_1(VAR_4)) == VAR_1) {
  int VAR_6;

  if (!FUNC_0(VAR_4->st.st_mode))
   continue;
  if (VAR_4->basename[0] == '.')
   continue;
  if (FUNC_2(VAR_4->basename, ".lock"))
   continue;

  if (FUNC_5(VAR_3->ref_store,
           VAR_4->relative_path, 0,
           &VAR_3->oid, &VAR_6)) {
   FUNC_3("bad ref for %s", VAR_4->path.buf);
   continue;
  }

  VAR_3->base.refname = VAR_4->relative_path;
  VAR_3->base.oid = &VAR_3->oid;
  VAR_3->base.flags = VAR_6;
  return VAR_1;
 }

 VAR_3->dir_iterator = ((void*)0);
 if (FUNC_4(VAR_2) == VAR_0)
  VAR_5 = VAR_0;
 return VAR_5;
}
