
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ino_t ;
struct TYPE_11__ {TYPE_2__* odb; } ;
typedef TYPE_1__ git_odb_backend ;
struct TYPE_12__ {int backends; } ;
typedef TYPE_2__ git_odb ;
struct TYPE_13__ {int priority; int is_alternate; TYPE_1__* backend; int disk_inode; } ;
typedef TYPE_3__ backend_internal ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(
 git_odb *VAR_1, git_odb_backend *VAR_2,
 int VAR_3, bool VAR_4, ino_t VAR_5)
{
 backend_internal *VAR_6;

 FUNC_2(VAR_1 && VAR_2);

 FUNC_1(VAR_2, VAR_0, "git_odb_backend");


 FUNC_2(!VAR_2->odb || VAR_2->odb == VAR_1);

 VAR_6 = FUNC_4(sizeof(backend_internal));
 FUNC_0(VAR_6);

 VAR_6->backend = VAR_2;
 VAR_6->priority = VAR_3;
 VAR_6->is_alternate = VAR_4;
 VAR_6->disk_inode = VAR_5;

 if (FUNC_5(&VAR_1->backends, VAR_6) < 0) {
  FUNC_3(VAR_6);
  return -1;
 }

 FUNC_6(&VAR_1->backends);
 VAR_6->backend->odb = VAR_1;
 return 0;
}
