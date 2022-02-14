
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_3__ {int ignore_dirty_submodules; } ;
struct TYPE_4__ {int context; int close_file; int file; TYPE_1__ flags; scalar_t__ use_color; int output_format; } ;
struct rev_info {TYPE_2__ diffopt; } ;
struct child_process {int git_cmd; char const** argv; } ;


 struct child_process VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_5 ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int *,int *) ;
 int FUNC_7 (char*,int,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,struct rev_info*,char const*) ;
 scalar_t__ FUNC_10 (struct child_process*) ;
 scalar_t__ FUNC_11 (struct rev_info*,int ) ;
 int FUNC_12 (int,char const**,struct rev_info*,int *) ;
 scalar_t__ FUNC_13 (char*,struct stat*) ;
 int VAR_6 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int,char*) ;

__attribute__((used)) static int FUNC_16(int VAR_7, const char **VAR_8, const char *VAR_9)
{
 char *VAR_10 = FUNC_5("ADD_EDIT.patch");
 const char *VAR_11[] = { "apply", "--recount", "--cached",
  ((void*)0), ((void*)0) };
 struct child_process VAR_12 = VAR_0;
 struct rev_info VAR_13;
 int VAR_14;
 struct stat VAR_15;

 VAR_11[3] = VAR_10;

 FUNC_4(VAR_5, ((void*)0));

 if (FUNC_8() < 0)
  FUNC_1(FUNC_0("Could not read the index"));

 FUNC_9(VAR_6, &VAR_13, VAR_9);
 VAR_13.diffopt.context = 7;

 VAR_7 = FUNC_12(VAR_7, VAR_8, &VAR_13, ((void*)0));
 VAR_13.diffopt.output_format = VAR_1;
 VAR_13.diffopt.use_color = 0;
 VAR_13.diffopt.flags.ignore_dirty_submodules = 1;
 VAR_14 = FUNC_7(VAR_10, VAR_2 | VAR_4 | VAR_3, 0666);
 if (VAR_14 < 0)
  FUNC_1(FUNC_0("Could not open '%s' for writing."), VAR_10);
 VAR_13.diffopt.file = FUNC_15(VAR_14, "w");
 VAR_13.diffopt.close_file = 1;
 if (FUNC_11(&VAR_13, 0))
  FUNC_1(FUNC_0("Could not write patch"));

 if (FUNC_6(VAR_10, ((void*)0), ((void*)0)))
  FUNC_1(FUNC_0("editing patch failed"));

 if (FUNC_13(VAR_10, &VAR_15))
  FUNC_2(FUNC_0("Could not stat '%s'"), VAR_10);
 if (!VAR_15.st_size)
  FUNC_1(FUNC_0("Empty patch. Aborted."));

 VAR_12.git_cmd = 1;
 VAR_12.argv = VAR_11;
 if (FUNC_10(&VAR_12))
  FUNC_1(FUNC_0("Could not apply '%s'"), VAR_10);

 FUNC_14(VAR_10);
 FUNC_3(VAR_10);
 return 0;
}
