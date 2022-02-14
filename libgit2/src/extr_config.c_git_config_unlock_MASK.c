
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* unlock ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ git_config_backend ;
struct TYPE_9__ {int backends; } ;
typedef TYPE_2__ git_config ;
struct TYPE_10__ {TYPE_1__* backend; } ;
typedef TYPE_3__ backend_internal ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_3__* FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

int FUNC_4(git_config *VAR_1, int VAR_2)
{
 git_config_backend *VAR_3;
 backend_internal *VAR_4;

 FUNC_0(VAR_1);

 VAR_4 = FUNC_2(&VAR_1->backends, 0);
 if (!VAR_4 || !VAR_4->backend) {
  FUNC_1(VAR_0, "cannot lock; the config has no backends");
  return -1;
 }

 VAR_3 = VAR_4->backend;

 return VAR_3->unlock(VAR_3, VAR_2);
}
