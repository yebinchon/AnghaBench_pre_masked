
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int git_merge_driver_entry ;
struct TYPE_2__ {int drivers; } ;


 int * FUNC_0 (int *,size_t) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (size_t*,char const*) ;

__attribute__((used)) static git_merge_driver_entry *FUNC_2(
 size_t *VAR_1, const char *VAR_2)
{
 git_merge_driver_entry *VAR_3 = ((void*)0);

 if (!FUNC_1(VAR_1, VAR_2))
  VAR_3 = FUNC_0(&VAR_0.drivers, *VAR_1);

 return VAR_3;
}
