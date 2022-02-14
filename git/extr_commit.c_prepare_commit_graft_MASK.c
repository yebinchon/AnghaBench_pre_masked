
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repository {TYPE_1__* parsed_objects; } ;
struct TYPE_4__ {int have_repository; } ;
struct TYPE_3__ {int commit_graft_prepared; } ;


 char* FUNC_0 (struct repository*) ;
 int FUNC_1 (struct repository*) ;
 int FUNC_2 (struct repository*,char*) ;
 TYPE_2__* VAR_0 ;

void FUNC_3(struct repository *VAR_1)
{
 char *VAR_2;

 if (VAR_1->parsed_objects->commit_graft_prepared)
  return;
 if (!VAR_0->have_repository)
  return;

 VAR_2 = FUNC_0(VAR_1);
 FUNC_2(VAR_1, VAR_2);

 FUNC_1(VAR_1);
 VAR_1->parsed_objects->commit_graft_prepared = 1;
}
