
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* each_commit_graft_fn ) (int ,void*) ;
struct TYPE_4__ {TYPE_1__* parsed_objects; } ;
struct TYPE_3__ {int grafts_nr; int * grafts; } ;


 TYPE_2__* VAR_0 ;

int FUNC_0(each_commit_graft_fn VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4;
 for (VAR_3 = VAR_4 = 0; VAR_3 < VAR_0->parsed_objects->grafts_nr && !VAR_4; VAR_3++)
  VAR_4 = VAR_1(VAR_0->parsed_objects->grafts[VAR_3], VAR_2);
 return VAR_4;
}
