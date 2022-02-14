
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int paired; } ;
typedef TYPE_1__ git_status_list ;
struct TYPE_8__ {scalar_t__ ignore_case; } ;
typedef TYPE_2__ git_index ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ,int (*) (void const*,void const*)) ;
 int FUNC_3 (void const*,void const*) ;
 int FUNC_4 (void const*,void const*) ;

__attribute__((used)) static git_status_list *FUNC_5(git_index *VAR_0)
{
 git_status_list *VAR_1 = ((void*)0);
 int (*VAR_2)(const void *VAR_3, const void *VAR_4);

 if (!(VAR_1 = FUNC_0(1, sizeof(git_status_list))))
  return ((void*)0);

 VAR_2 = VAR_0->ignore_case ? FUNC_4 : FUNC_3;

 if (FUNC_2(&VAR_1->paired, 0, VAR_2) < 0) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
