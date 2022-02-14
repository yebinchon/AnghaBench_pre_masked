
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pack_objects_args {scalar_t__ quiet; scalar_t__ local; scalar_t__ no_reuse_object; scalar_t__ no_reuse_delta; scalar_t__ max_pack_size; scalar_t__ threads; scalar_t__ depth; scalar_t__ window_memory; scalar_t__ window; } ;
struct child_process {int git_cmd; int out; int args; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct child_process *VAR_2,
     const struct pack_objects_args *VAR_3)
{
 FUNC_0(&VAR_2->args, "pack-objects");
 if (VAR_3->window)
  FUNC_1(&VAR_2->args, "--window=%s", VAR_3->window);
 if (VAR_3->window_memory)
  FUNC_1(&VAR_2->args, "--window-memory=%s", VAR_3->window_memory);
 if (VAR_3->depth)
  FUNC_1(&VAR_2->args, "--depth=%s", VAR_3->depth);
 if (VAR_3->threads)
  FUNC_1(&VAR_2->args, "--threads=%s", VAR_3->threads);
 if (VAR_3->max_pack_size)
  FUNC_1(&VAR_2->args, "--max-pack-size=%s", VAR_3->max_pack_size);
 if (VAR_3->no_reuse_delta)
  FUNC_1(&VAR_2->args, "--no-reuse-delta");
 if (VAR_3->no_reuse_object)
  FUNC_1(&VAR_2->args, "--no-reuse-object");
 if (VAR_3->local)
  FUNC_0(&VAR_2->args, "--local");
 if (VAR_3->quiet)
  FUNC_0(&VAR_2->args, "--quiet");
 if (VAR_0)
  FUNC_0(&VAR_2->args, "--delta-base-offset");
 FUNC_0(&VAR_2->args, VAR_1);
 VAR_2->git_cmd = 1;
 VAR_2->out = -1;
}
