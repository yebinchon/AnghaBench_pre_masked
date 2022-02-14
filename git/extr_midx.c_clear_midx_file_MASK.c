
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct repository {TYPE_2__* objects; } ;
struct TYPE_4__ {int * multi_pack_index; TYPE_1__* odb; } ;
struct TYPE_3__ {int path; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*) ;

void FUNC_7(struct repository *VAR_0)
{
 char *VAR_1 = FUNC_5(VAR_0->objects->odb->path);

 if (VAR_0->objects && VAR_0->objects->multi_pack_index) {
  FUNC_2(VAR_0->objects->multi_pack_index);
  VAR_0->objects->multi_pack_index = ((void*)0);
 }

 if (FUNC_6(VAR_1)) {
  FUNC_0(VAR_1);
  FUNC_3(FUNC_1("failed to clear multi-pack-index at %s"), VAR_1);
 }

 FUNC_4(VAR_1);
}
