
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr; } ;
struct upload_pack_data {TYPE_1__ shallows; int deepen_relative; int writer; int deepen_not; int deepen_since; int deepen_rev_list; int depth; } ;
struct object_array {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__*,struct object_array*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ,int ,int *,int ,TYPE_1__*,struct object_array*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct upload_pack_data *VAR_2,
         struct object_array *VAR_3)
{

 if (!VAR_2->depth && !VAR_2->deepen_rev_list && !VAR_2->shallows.nr &&
     !FUNC_1(VAR_1))
  return;

 FUNC_3(&VAR_2->writer, "shallow-info\n");

 if (!FUNC_4(&VAR_2->writer, VAR_2->depth,
          VAR_2->deepen_rev_list,
          VAR_2->deepen_since, &VAR_2->deepen_not,
          VAR_2->deepen_relative,
          &VAR_2->shallows, VAR_3) &&
     FUNC_1(VAR_1))
  FUNC_0(&VAR_2->writer, VAR_0, VAR_2->deepen_relative,
         &VAR_2->shallows, VAR_3);

 FUNC_2(1);
}
