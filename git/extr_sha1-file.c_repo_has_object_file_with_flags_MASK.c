
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct TYPE_2__ {int have_repository; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct repository*,struct object_id const*,int *,int) ;
 TYPE_1__* VAR_1 ;

int FUNC_1(struct repository *VAR_2,
        const struct object_id *VAR_3, int VAR_4)
{
 if (!VAR_1->have_repository)
  return 0;
 return FUNC_0(VAR_2, VAR_3, ((void*)0),
     VAR_4 | VAR_0) >= 0;
}
