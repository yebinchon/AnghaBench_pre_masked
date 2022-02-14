
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_7__ {struct object_id oid; } ;
struct tree {TYPE_1__ object; } ;
struct strbuf {int dummy; } ;
struct repository {struct index_state* index; } ;
struct index_state {int cache_nr; TYPE_5__** cache; } ;
struct TYPE_10__ {int exit_with_status; int quick; scalar_t__ has_changes; } ;
struct diff_options {TYPE_4__ flags; } ;
struct TYPE_12__ {int nr; TYPE_3__** queue; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_9__ {TYPE_2__* two; } ;
struct TYPE_8__ {int path; } ;


 int FUNC_0 (struct diff_options*) ;
 TYPE_6__ VAR_0 ;
 int FUNC_1 (struct diff_options*) ;
 int FUNC_2 (struct object_id*,struct diff_options*) ;
 int FUNC_3 (char*,struct object_id*) ;
 int FUNC_4 (struct repository*,struct diff_options*) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*,int ) ;

int FUNC_7(struct repository *VAR_1,
      struct tree *VAR_2,
      struct strbuf *VAR_3)
{
 struct index_state *VAR_4 = VAR_1->index;
 struct object_id VAR_5;
 int VAR_6;

 if (VAR_2)
  VAR_5 = VAR_2->object.oid;
 if (VAR_2 || !FUNC_3("HEAD", &VAR_5)) {
  struct diff_options VAR_7;

  FUNC_4(VAR_1, &VAR_7);
  VAR_7.flags.exit_with_status = 1;
  if (!VAR_3)
   VAR_7.flags.quick = 1;
  FUNC_2(&VAR_5, &VAR_7);
  FUNC_1(&VAR_7);
  for (VAR_6 = 0; VAR_3 && VAR_6 < VAR_0.nr; VAR_6++) {
   if (VAR_6)
    FUNC_5(VAR_3, ' ');
   FUNC_6(VAR_3, VAR_0.queue[VAR_6]->two->path);
  }
  FUNC_0(&VAR_7);
  return VAR_7.flags.has_changes != 0;
 } else {
  for (VAR_6 = 0; VAR_3 && VAR_6 < VAR_4->cache_nr; VAR_6++) {
   if (VAR_6)
    FUNC_5(VAR_3, ' ');
   FUNC_6(VAR_3, VAR_4->cache[VAR_6]->name);
  }
  return !!VAR_4->cache_nr;
 }
}
