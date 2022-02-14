
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct diff_flags {int ignore_untracked_in_submodules; scalar_t__ dirty_submodules; int ignore_dirty_submodules; scalar_t__ ignore_submodules; int override_submodule_config; } ;
struct diff_options {struct diff_flags flags; TYPE_1__* repo; } ;
struct cache_entry {int name; int ce_mode; } ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct cache_entry const*,struct stat*,unsigned int) ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct diff_options*,int ) ;

__attribute__((used)) static int FUNC_4(struct diff_options *VAR_0,
         const struct cache_entry *VAR_1,
         struct stat *VAR_2, unsigned VAR_3,
         unsigned *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_0->repo->index, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_1->ce_mode)) {
  struct diff_flags VAR_6 = VAR_0->flags;
  if (!VAR_0->flags.override_submodule_config)
   FUNC_3(VAR_0, VAR_1->name);
  if (VAR_0->flags.ignore_submodules)
   VAR_5 = 0;
  else if (!VAR_0->flags.ignore_dirty_submodules &&
    (!VAR_5 || VAR_0->flags.dirty_submodules))
   *VAR_4 = FUNC_2(VAR_1->name,
         VAR_0->flags.ignore_untracked_in_submodules);
  VAR_0->flags = VAR_6;
 }
 return VAR_5;
}
