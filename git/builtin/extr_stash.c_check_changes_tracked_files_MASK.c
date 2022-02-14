
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int quick; int ignore_submodules; } ;
struct TYPE_5__ {TYPE_1__ flags; } ;
struct rev_info {int prune_data; TYPE_2__ diffopt; int pending; scalar_t__ abbrev; } ;
struct pathspec {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (struct rev_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pathspec const*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (char*,struct object_id*) ;
 int FUNC_6 (struct rev_info*,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct rev_info*,int ) ;
 int FUNC_10 (struct rev_info*,int) ;

__attribute__((used)) static int FUNC_11(const struct pathspec *VAR_0)
{
 int VAR_1;
 struct rev_info VAR_2;
 struct object_id VAR_3;
 int VAR_4 = 0;


 if (FUNC_5("HEAD", &VAR_3))
  return -1;

 if (FUNC_8() < 0)
  return -1;

 FUNC_6(&VAR_2, ((void*)0));
 FUNC_2(&VAR_2.prune_data, VAR_0);

 VAR_2.diffopt.flags.quick = 1;
 VAR_2.diffopt.flags.ignore_submodules = 1;
 VAR_2.abbrev = 0;

 FUNC_0(&VAR_2);
 FUNC_4(&VAR_2.diffopt);

 VAR_1 = FUNC_10(&VAR_2, 1);
 if (FUNC_3(&VAR_2.diffopt, VAR_1)) {
  VAR_4 = 1;
  goto done;
 }

 FUNC_7(&VAR_2.pending);
 VAR_1 = FUNC_9(&VAR_2, 0);
 if (FUNC_3(&VAR_2.diffopt, VAR_1)) {
  VAR_4 = 1;
  goto done;
 }

done:
 FUNC_1(&VAR_2.prune_data);
 return VAR_4;
}
