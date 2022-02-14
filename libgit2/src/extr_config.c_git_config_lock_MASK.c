
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_transaction ;
struct TYPE_9__ {int (* lock ) (TYPE_1__*) ;} ;
typedef TYPE_1__ git_config_backend ;
struct TYPE_10__ {int backends; } ;
typedef TYPE_2__ git_config ;
struct TYPE_11__ {TYPE_1__* backend; } ;
typedef TYPE_3__ backend_internal ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int **,TYPE_2__*) ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(git_transaction **VAR_1, git_config *VAR_2)
{
 int VAR_3;
 git_config_backend *VAR_4;
 backend_internal *VAR_5;

 FUNC_0(VAR_2);

 VAR_5 = FUNC_3(&VAR_2->backends, 0);
 if (!VAR_5 || !VAR_5->backend) {
  FUNC_1(VAR_0, "cannot lock; the config has no backends");
  return -1;
 }
 VAR_4 = VAR_5->backend;

 if ((VAR_3 = VAR_4->lock(VAR_4)) < 0)
  return VAR_3;

 return FUNC_2(VAR_1, VAR_2);
}
