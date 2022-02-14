
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_config_backend ;
struct TYPE_3__ {int cfg; int entries; } ;
typedef TYPE_1__ config_memory_backend ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(git_config_backend *VAR_0)
{
 config_memory_backend *VAR_1 = (config_memory_backend *)VAR_0;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_2(VAR_1->entries);
 FUNC_1(&VAR_1->cfg);
 FUNC_0(VAR_1);
}
