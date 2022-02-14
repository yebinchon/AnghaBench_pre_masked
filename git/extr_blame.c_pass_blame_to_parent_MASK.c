
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct blame_scoreboard {int xdl_opts; int num_get_patch; int num_read_blob; TYPE_1__* revs; } ;
struct blame_origin {TYPE_3__* commit; int suspects; } ;
struct blame_entry {int dummy; } ;
struct blame_chunk_cb_data {int ignore_diffs; struct blame_entry** dstq; scalar_t__ offset; int * srcq; struct blame_origin* target; struct blame_origin* parent; } ;
typedef int mmfile_t ;
struct TYPE_5__ {int oid; } ;
struct TYPE_6__ {TYPE_2__ object; } ;
struct TYPE_4__ {int diffopt; } ;


 int VAR_0 ;
 int FUNC_0 (struct blame_entry***,int **,int ,scalar_t__,int ,int ,struct blame_origin*,struct blame_origin*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,struct blame_chunk_cb_data*,int ) ;
 int FUNC_3 (int *,struct blame_origin*,int *,int *,int) ;
 int VAR_3 ;
 struct blame_entry* FUNC_4 (struct blame_entry*,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct blame_scoreboard*,struct blame_origin*,struct blame_entry*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct blame_scoreboard *VAR_5,
     struct blame_origin *VAR_6,
     struct blame_origin *VAR_7, int VAR_8)
{
 mmfile_t VAR_9, VAR_10;
 struct blame_chunk_cb_data VAR_11;
 struct blame_entry *VAR_12 = ((void*)0);

 if (!VAR_6->suspects)
  return;

 VAR_11.parent = VAR_7;
 VAR_11.target = VAR_6;
 VAR_11.offset = 0;
 VAR_11.ignore_diffs = VAR_8;
 VAR_11.dstq = &VAR_12; VAR_11.srcq = &VAR_6->suspects;

 FUNC_3(&VAR_5->revs->diffopt, VAR_7, &VAR_9,
    &VAR_5->num_read_blob, VAR_8);
 FUNC_3(&VAR_5->revs->diffopt, VAR_6, &VAR_10,
    &VAR_5->num_read_blob, VAR_8);
 VAR_5->num_get_patch++;

 if (FUNC_2(&VAR_9, &VAR_10, VAR_1, &VAR_11, VAR_5->xdl_opts))
  FUNC_1("unable to generate diff (%s -> %s)",
      FUNC_5(&VAR_7->commit->object.oid),
      FUNC_5(&VAR_6->commit->object.oid));

 FUNC_0(&VAR_11.dstq, &VAR_11.srcq, VAR_0, VAR_11.offset, VAR_0, 0,
      VAR_7, VAR_6, 0);
 *VAR_11.dstq = ((void*)0);
 if (VAR_8)
  VAR_12 = FUNC_4(VAR_12, VAR_3,
       VAR_4,
       VAR_2);
 FUNC_6(VAR_5, VAR_7, VAR_12);

 return;
}
