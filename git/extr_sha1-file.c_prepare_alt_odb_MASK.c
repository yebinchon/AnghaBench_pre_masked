
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repository {TYPE_2__* objects; } ;
struct TYPE_4__ {int loaded_alternates; TYPE_1__* odb; int alternate_db; } ;
struct TYPE_3__ {int path; } ;


 int VAR_0 ;
 int FUNC_0 (struct repository*,int ,int ,int *,int ) ;
 int FUNC_1 (struct repository*,int ,int ) ;

void FUNC_2(struct repository *VAR_1)
{
 if (VAR_1->objects->loaded_alternates)
  return;

 FUNC_0(VAR_1, VAR_1->objects->alternate_db, VAR_0, ((void*)0), 0);

 FUNC_1(VAR_1, VAR_1->objects->odb->path, 0);
 VAR_1->objects->loaded_alternates = 1;
}
