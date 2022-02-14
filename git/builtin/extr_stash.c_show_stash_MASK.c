
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stash_info {int w_commit; int b_commit; } ;
struct TYPE_6__ {int recursive; } ;
struct TYPE_7__ {TYPE_1__ flags; int output_format; } ;
struct rev_info {TYPE_2__ diffopt; } ;
struct option {int dummy; } ;
struct argv_array {int argc; int argv; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct option FUNC_0 () ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (struct argv_array*,char const*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *,char*,TYPE_2__*) ;
 int FUNC_6 (struct stash_info*) ;
 int FUNC_7 (struct stash_info*,int,int ) ;
 int FUNC_8 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 () ;
 int FUNC_10 (struct rev_info*,char const*) ;
 int FUNC_11 (struct rev_info*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int,int ,struct rev_info*,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (int ,struct option*) ;

__attribute__((used)) static int FUNC_15(int VAR_8, const char **VAR_9, const char *VAR_10)
{
 int VAR_11;
 int VAR_12 = 0;
 struct stash_info VAR_13;
 struct rev_info VAR_14;
 struct argv_array VAR_15 = VAR_0;
 struct argv_array VAR_16 = VAR_0;
 struct option VAR_17[] = {
  FUNC_0()
 };

 FUNC_9();
 FUNC_8(VAR_3, ((void*)0));
 FUNC_10(&VAR_14, VAR_10);

 FUNC_2(&VAR_16, VAR_9[0]);
 for (VAR_11 = 1; VAR_11 < VAR_8; VAR_11++) {
  if (VAR_9[VAR_11][0] != '-')
   FUNC_2(&VAR_15, VAR_9[VAR_11]);
  else
   FUNC_2(&VAR_16, VAR_9[VAR_11]);
 }

 VAR_12 = FUNC_7(&VAR_13, VAR_15.argc, VAR_15.argv);
 FUNC_1(&VAR_15);
 if (VAR_12)
  return -1;





 if (VAR_16.argc == 1) {
  FUNC_8(VAR_4, ((void*)0));
  if (VAR_7)
   VAR_14.diffopt.output_format = VAR_1;

  if (VAR_6)
   VAR_14.diffopt.output_format |= VAR_2;

  if (!VAR_7 && !VAR_6) {
   FUNC_6(&VAR_13);
   return 0;
  }
 }

 VAR_8 = FUNC_13(VAR_16.argc, VAR_16.argv, &VAR_14, ((void*)0));
 if (VAR_8 > 1) {
  FUNC_6(&VAR_13);
  FUNC_14(VAR_5, VAR_17);
 }
 if (!VAR_14.diffopt.output_format) {
  VAR_14.diffopt.output_format = VAR_2;
  FUNC_4(&VAR_14.diffopt);
 }

 VAR_14.diffopt.flags.recursive = 1;
 FUNC_12(&VAR_14.diffopt);
 FUNC_5(&VAR_13.b_commit, &VAR_13.w_commit, "", &VAR_14.diffopt);
 FUNC_11(&VAR_14);

 FUNC_6(&VAR_13);
 return FUNC_3(&VAR_14.diffopt, 0);
}
