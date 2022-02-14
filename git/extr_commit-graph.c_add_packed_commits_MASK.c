
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int nr; int * list; int alloc; } ;
struct write_commit_graph_context {TYPE_1__ oids; int r; int progress_done; scalar_t__ progress; } ;
struct packed_git {int dummy; } ;
struct object_info {int* typep; } ;
struct object_id {int dummy; } ;
typedef int off_t ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (int *,int,int ) ;
 struct object_info VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct packed_git*,int ) ;
 int FUNC_5 (struct object_id const*) ;
 int FUNC_6 (int *,struct object_id const*) ;
 scalar_t__ FUNC_7 (int ,struct packed_git*,int ,struct object_info*) ;

__attribute__((used)) static int FUNC_8(const struct object_id *VAR_2,
         struct packed_git *VAR_3,
         uint32_t VAR_4,
         void *VAR_5)
{
 struct write_commit_graph_context *VAR_6 = (struct write_commit_graph_context*)VAR_5;
 enum object_type VAR_7;
 off_t VAR_8 = FUNC_4(VAR_3, VAR_4);
 struct object_info VAR_9 = VAR_0;

 if (VAR_6->progress)
  FUNC_3(VAR_6->progress, ++VAR_6->progress_done);

 VAR_9.typep = &VAR_7;
 if (FUNC_7(VAR_6->r, VAR_3, VAR_8, &VAR_9) < 0)
  FUNC_2(FUNC_1("unable to get type of object %s"), FUNC_5(VAR_2));

 if (VAR_7 != VAR_1)
  return 0;

 FUNC_0(VAR_6->oids.list, VAR_6->oids.nr + 1, VAR_6->oids.alloc);
 FUNC_6(&(VAR_6->oids.list[VAR_6->oids.nr]), VAR_2);
 VAR_6->oids.nr++;

 return 0;
}
