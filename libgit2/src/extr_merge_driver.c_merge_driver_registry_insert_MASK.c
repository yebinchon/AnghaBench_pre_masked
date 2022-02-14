
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * driver; int name; } ;
typedef TYPE_1__ git_merge_driver_entry ;
typedef int git_merge_driver ;
struct TYPE_7__ {int drivers; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(
 const char *VAR_1, git_merge_driver *VAR_2)
{
 git_merge_driver_entry *VAR_3;

 VAR_3 = FUNC_1(1, sizeof(git_merge_driver_entry) + FUNC_4(VAR_1) + 1);
 FUNC_0(VAR_3);

 FUNC_3(VAR_3->name, VAR_1);
 VAR_3->driver = VAR_2;

 return FUNC_2(
  &VAR_0.drivers, VAR_3, ((void*)0));
}
