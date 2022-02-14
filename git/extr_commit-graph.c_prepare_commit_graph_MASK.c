
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int core_commit_graph; } ;
struct repository {TYPE_2__* objects; TYPE_1__ settings; scalar_t__ commit_graph_disabled; } ;
struct object_directory {int path; struct object_directory* next; } ;
struct TYPE_4__ {int commit_graph_attempted; int commit_graph; struct object_directory* odb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct repository*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct repository*) ;
 int FUNC_4 (struct repository*,int ) ;
 int FUNC_5 (struct repository*) ;

__attribute__((used)) static int FUNC_6(struct repository *VAR_2)
{
 struct object_directory *VAR_3;





 if (VAR_2->commit_graph_disabled)
  return 0;

 if (VAR_2->objects->commit_graph_attempted)
  return !!VAR_2->objects->commit_graph;
 VAR_2->objects->commit_graph_attempted = 1;

 if (FUNC_2(VAR_1, 0))
  FUNC_1("dying as requested by the '%s' variable on commit-graph load!",
      VAR_1);

 FUNC_5(VAR_2);

 if (!FUNC_2(VAR_0, 0) &&
     VAR_2->settings.core_commit_graph != 1)






  return 0;

 if (!FUNC_0(VAR_2))
  return 0;

 FUNC_3(VAR_2);
 for (VAR_3 = VAR_2->objects->odb;
      !VAR_2->objects->commit_graph && VAR_3;
      VAR_3 = VAR_3->next)
  FUNC_4(VAR_2, VAR_3->path);
 return !!VAR_2->objects->commit_graph;
}
