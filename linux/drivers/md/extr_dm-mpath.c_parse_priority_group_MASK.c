
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priority_group {unsigned int nr_pgpaths; int pgpaths; int ps; struct multipath* m; } ;
struct pgpath {int list; struct priority_group* pg; } ;
struct multipath {struct dm_target* ti; } ;
struct dm_target {char* error; } ;
struct dm_arg_set {int argc; int argv; } ;
struct dm_arg {int member_0; int member_1; char* member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct priority_group* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct pgpath*) ;
 int FUNC_2 (struct pgpath*) ;
 struct priority_group* FUNC_3 () ;
 int FUNC_4 (struct dm_arg_set*,unsigned int) ;
 int FUNC_5 (struct dm_arg const*,struct dm_arg_set*,unsigned int*,char**) ;
 int FUNC_6 (struct priority_group*,struct dm_target*) ;
 int FUNC_7 (int *,int *) ;
 struct pgpath* FUNC_8 (struct dm_arg_set*,int *,struct dm_target*) ;
 int FUNC_9 (struct dm_arg_set*,struct priority_group*,struct dm_target*) ;

__attribute__((used)) static struct priority_group *FUNC_10(struct dm_arg_set *VAR_2,
         struct multipath *VAR_3)
{
 static const struct dm_arg VAR_4[] = {
  {1, 1024, "invalid number of paths"},
  {0, 1024, "invalid number of selector args"}
 };

 int VAR_5;
 unsigned VAR_6, VAR_7, VAR_8;
 struct priority_group *VAR_9;
 struct dm_target *VAR_10 = VAR_3->ti;

 if (VAR_2->argc < 2) {
  VAR_2->argc = 0;
  VAR_10->error = "not enough priority group arguments";
  return FUNC_0(-VAR_0);
 }

 VAR_9 = FUNC_3();
 if (!VAR_9) {
  VAR_10->error = "couldn't allocate priority group";
  return FUNC_0(-VAR_1);
 }
 VAR_9->m = VAR_3;

 VAR_5 = FUNC_9(VAR_2, VAR_9, VAR_10);
 if (VAR_5)
  goto bad;




 VAR_5 = FUNC_5(VAR_4, VAR_2, &VAR_9->nr_pgpaths, &VAR_10->error);
 if (VAR_5)
  goto bad;

 VAR_5 = FUNC_5(VAR_4 + 1, VAR_2, &VAR_7, &VAR_10->error);
 if (VAR_5)
  goto bad;

 VAR_8 = 1 + VAR_7;
 for (VAR_6 = 0; VAR_6 < VAR_9->nr_pgpaths; VAR_6++) {
  struct pgpath *VAR_11;
  struct dm_arg_set VAR_12;

  if (VAR_2->argc < VAR_8) {
   VAR_10->error = "not enough path parameters";
   VAR_5 = -VAR_0;
   goto bad;
  }

  VAR_12.argc = VAR_8;
  VAR_12.argv = VAR_2->argv;

  VAR_11 = FUNC_8(&VAR_12, &VAR_9->ps, VAR_10);
  if (FUNC_1(VAR_11)) {
   VAR_5 = FUNC_2(VAR_11);
   goto bad;
  }

  VAR_11->pg = VAR_9;
  FUNC_7(&VAR_11->list, &VAR_9->pgpaths);
  FUNC_4(VAR_2, VAR_8);
 }

 return VAR_9;

 bad:
 FUNC_6(VAR_9, VAR_10);
 return FUNC_0(VAR_5);
}
