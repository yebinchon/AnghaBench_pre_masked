
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_22__ {int drivers; } ;
typedef TYPE_1__ git_diff_driver_registry ;
struct TYPE_23__ {int name; int word_pattern; int type; int fn_patterns; int binary_flags; } ;
typedef TYPE_2__ git_diff_driver ;
struct TYPE_24__ {int value; } ;
typedef TYPE_3__ git_config_entry ;
typedef int git_config ;
struct TYPE_25__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__**,size_t*,char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,char*,char const*) ;
 int FUNC_5 (TYPE_4__*,scalar_t__) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_3__**,int *,int ,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int *,int ,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__**,TYPE_1__*,char const*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int ,int ) ;
 scalar_t__ FUNC_15 (int **,int *) ;
 TYPE_1__* FUNC_16 (int *) ;
 TYPE_2__* FUNC_17 (int ,char const*) ;
 int FUNC_18 (int ,int ,TYPE_2__*) ;
 TYPE_2__* VAR_8 ;
 scalar_t__ FUNC_19 (char*) ;

__attribute__((used)) static int FUNC_20(
 git_diff_driver **VAR_9, git_repository *VAR_10, const char *VAR_11)
{
 int VAR_12 = 0;
 git_diff_driver_registry *VAR_13;
 git_diff_driver *VAR_14;
 size_t VAR_15;
 git_config *VAR_16 = ((void*)0);
 git_buf VAR_17 = VAR_3;
 git_config_entry *VAR_18 = ((void*)0);
 bool VAR_19 = 0;

 if ((VAR_13 = FUNC_16(VAR_10)) == ((void*)0))
  return -1;

 if ((VAR_14 = FUNC_17(VAR_13->drivers, VAR_11)) != ((void*)0)) {
  *VAR_9 = VAR_14;
  return 0;
 }

 if ((VAR_12 = FUNC_0(&VAR_14, &VAR_15, VAR_11)) < 0)
  goto done;

 VAR_14->type = VAR_0;


 if (FUNC_15(&VAR_16, VAR_10) < 0) {
  FUNC_13();
  goto done;
 }

 if ((VAR_12 = FUNC_4(&VAR_17, "diff.%s.binary", VAR_11)) < 0)
  goto done;

 switch (FUNC_6(VAR_16, VAR_17.ptr, -1)) {
 case 1:

  *VAR_9 = &VAR_8[VAR_1];
  goto done;
 case 0:


  VAR_14->binary_flags = VAR_4;
  VAR_19 = 1;
  break;
 default:

  break;
 }



 FUNC_5(&VAR_17, VAR_15 + FUNC_19("diff.."));
 if ((VAR_12 = FUNC_2(&VAR_17, "xfuncname")) < 0)
  goto done;

 if ((VAR_12 = FUNC_10(
   VAR_16, VAR_17.ptr, ((void*)0), VAR_7, VAR_14)) < 0) {
  if (VAR_12 != VAR_5)
   goto done;
  FUNC_13();
 }

 FUNC_5(&VAR_17, VAR_15 + FUNC_19("diff.."));
 if ((VAR_12 = FUNC_2(&VAR_17, "funcname")) < 0)
  goto done;

 if ((VAR_12 = FUNC_10(
   VAR_16, VAR_17.ptr, ((void*)0), VAR_6, VAR_14)) < 0) {
  if (VAR_12 != VAR_5)
   goto done;
  FUNC_13();
 }


 if (FUNC_1(VAR_14->fn_patterns) > 0) {
  VAR_14->type = VAR_2;
  VAR_19 = 1;
 }

 FUNC_5(&VAR_17, VAR_15 + FUNC_19("diff.."));
 if ((VAR_12 = FUNC_2(&VAR_17, "wordregex")) < 0)
  goto done;

 if ((VAR_12 = FUNC_7(&VAR_18, VAR_16, VAR_17.ptr, 0)) < 0)
  goto done;
 if (!VAR_18 || !VAR_18->value)
                                                    ;
 else if (!(VAR_12 = FUNC_14(&VAR_14->word_pattern, VAR_18->value, 0)))
  VAR_19 = 1;
 else {

  goto done;
 }






 if (!VAR_19)
  goto done;


 if ((VAR_12 = FUNC_18(VAR_13->drivers, VAR_14->name, VAR_14)) < 0)
  goto done;

 *VAR_9 = VAR_14;

done:
 FUNC_8(VAR_18);
 FUNC_3(&VAR_17);
 FUNC_9(VAR_16);

 if (!*VAR_9) {
  int VAR_20 = FUNC_11(VAR_9, VAR_13, VAR_11);
  if (!VAR_12)
   VAR_12 = VAR_20;
 }

 if (VAR_14 && VAR_14 != *VAR_9)
  FUNC_12(VAR_14);

 return VAR_12;
}
