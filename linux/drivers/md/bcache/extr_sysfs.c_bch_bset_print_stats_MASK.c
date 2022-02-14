
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_set {int dummy; } ;
struct TYPE_2__ {int failed; int floats; int bytes_unwritten; int bytes_written; int sets_unwritten; int sets_written; } ;
struct bset_stats_op {TYPE_1__ stats; int nodes; int op; } ;
typedef int op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct cache_set*,int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct bset_stats_op*,int ,int) ;
 int FUNC_3 (char*,int ,char*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cache_set *VAR_3, char *VAR_4)
{
 struct bset_stats_op VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_1(&VAR_5.op, -1);

 VAR_6 = FUNC_0(&VAR_5.op, VAR_3, &VAR_1, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_3(VAR_4, VAR_0,
   "btree nodes:		%zu\n"
   "written sets:		%zu\n"
   "unwritten sets:		%zu\n"
   "written key bytes:	%zu\n"
   "unwritten key bytes:	%zu\n"
   "floats:			%zu\n"
   "failed:			%zu\n",
   VAR_5.nodes,
   VAR_5.stats.sets_written, VAR_5.stats.sets_unwritten,
   VAR_5.stats.bytes_written, VAR_5.stats.bytes_unwritten,
   VAR_5.stats.floats, VAR_5.stats.failed);
}
