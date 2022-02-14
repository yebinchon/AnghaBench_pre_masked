
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; } ;
typedef TYPE_1__ sm_lookup_data ;
typedef int git_submodule ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(git_submodule *VAR_0, const char *VAR_1, void *VAR_2)
{
 sm_lookup_data *VAR_3 = VAR_2;
 VAR_3->count += 1;
 FUNC_0(FUNC_1(VAR_0), VAR_1);
 return 0;
}
