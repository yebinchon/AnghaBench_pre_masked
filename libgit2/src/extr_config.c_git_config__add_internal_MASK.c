
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_config_level_t ;
struct TYPE_10__ {int backends; } ;
typedef TYPE_2__ git_config ;
struct TYPE_11__ {TYPE_1__* backend; } ;
typedef TYPE_3__ backend_internal ;
struct TYPE_9__ {TYPE_2__* cfg; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_3__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(
 git_config *VAR_1,
 backend_internal *VAR_2,
 git_config_level_t VAR_3,
 int VAR_4)
{
 int VAR_5;


 if (VAR_4)
  FUNC_3(VAR_1, VAR_3);

 if ((VAR_5 = FUNC_1(&VAR_1->backends,
   VAR_2, &VAR_0)) < 0)
  return VAR_5;

 FUNC_2(&VAR_1->backends);
 VAR_2->backend->cfg = VAR_1;

 FUNC_0(VAR_2);

 return 0;
}
