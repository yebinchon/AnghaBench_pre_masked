
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct status_file_info {char const* expected; unsigned int status; int count; scalar_t__ ambiguous; int wildmatch_flags; int member_0; } ;
struct TYPE_7__ {int count; char const** strings; } ;
struct TYPE_8__ {int flags; TYPE_1__ pathspec; int show; } ;
typedef TYPE_2__ git_status_options ;
typedef int git_repository ;
struct TYPE_9__ {scalar_t__ ignore_case; } ;
typedef TYPE_3__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int FUNC_1 (char const*) ;
 char const* FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (TYPE_3__**,int *) ;
 int FUNC_5 (int *,TYPE_2__*,int ,struct status_file_info*) ;

int FUNC_6(
 unsigned int *VAR_13,
 git_repository *VAR_14,
 const char *VAR_15)
{
 int VAR_16;
 git_status_options VAR_17 = VAR_3;
 struct status_file_info VAR_18 = {0};
 git_index *VAR_19;

 FUNC_0(VAR_13 && VAR_14 && VAR_15);

 if ((VAR_16 = FUNC_4(&VAR_19, VAR_14)) < 0)
  return VAR_16;

 if ((VAR_18.expected = FUNC_2(VAR_15)) == ((void*)0))
  return -1;
 if (VAR_19->ignore_case)
  VAR_18.wildmatch_flags = VAR_11;

 VAR_17.show = VAR_10;
 VAR_17.flags = VAR_5 |
  VAR_8 |
  VAR_7 |
  VAR_9 |
  VAR_6 |
  VAR_4;
 VAR_17.pathspec.count = 1;
 VAR_17.pathspec.strings = &VAR_18.expected;

 VAR_16 = FUNC_5(VAR_14, &VAR_17, VAR_12, &VAR_18);

 if (VAR_16 < 0 && VAR_18.ambiguous) {
  FUNC_3(VAR_2,
   "ambiguous path '%s' given to git_status_file", VAR_18.expected);
  VAR_16 = VAR_0;
 }

 if (!VAR_16 && !VAR_18.count) {
  FUNC_3(VAR_2,
   "attempt to get status of nonexistent file '%s'", VAR_15);
  VAR_16 = VAR_1;
 }

 *VAR_13 = VAR_18.status;

 FUNC_1(VAR_18.expected);

 return VAR_16;
}
