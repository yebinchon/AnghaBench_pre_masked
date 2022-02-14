
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int expected_entry_count; char const** expected_paths; unsigned int const* expected_statuses; int wrong_sorted_path; int wrong_status_flags_count; int entry_count; } ;
typedef TYPE_1__ status_entry_counts ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ git_status_options ;



 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_5 (char*,char const**) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 static const char *VAR_6[] = {
  "empty_standard_repo/d1/pfx-d2/d3/d4/d5/tracked",
  "empty_standard_repo/d1/pfx-d2/d3/d4/d5/untracked",
  "empty_standard_repo/d1/pfx-d2/d3/d4/untracked",
  ((void*)0)
 };

 FUNC_5("empty_standard_repo", VAR_6);
 FUNC_2(
  "empty_standard_repo/.gitignore",
  "/d1/pfx-*\n"
  "!/d1/pfx-d2/\n"
  "/d1/pfx-d2/*\n"
  "!/d1/pfx-d2/d3/\n"
  "/d1/pfx-d2/d3/*\n"
  "!/d1/pfx-d2/d3/d4/\n");
 FUNC_0("d1/pfx-d2/d3/d4/d5/tracked");

 {
  git_status_options VAR_7 = VAR_0;
  status_entry_counts VAR_8;
  static const char *VAR_9[] = {
   ".gitignore",
   "d1/pfx-d2/d3/d4/d5/tracked",
   "d1/pfx-d2/d3/d4/d5/untracked",
   "d1/pfx-d2/d3/d4/untracked",
  };
  static const unsigned int VAR_10[] = {
   128,
   129,
   128,
   128,
  };

  FUNC_6(&VAR_8, 0x0, sizeof(status_entry_counts));
  VAR_8.expected_entry_count = 4;
  VAR_8.expected_paths = VAR_9;
  VAR_8.expected_statuses = VAR_10;
  VAR_7.flags = VAR_1 |
   VAR_2 |
   VAR_3;
  FUNC_3(FUNC_4(
   VAR_5, &VAR_7, VAR_4, &VAR_8));

  FUNC_1(VAR_8.expected_entry_count, VAR_8.entry_count);
  FUNC_1(0, VAR_8.wrong_status_flags_count);
  FUNC_1(0, VAR_8.wrong_sorted_path);
 }

 FUNC_7("d1/pfx-d2/d3/d4/d5/tracked");
 FUNC_7("d1/pfx-d2/d3/d4/d5/untracked");
 FUNC_7("d1/pfx-d2/d3/d4/untracked");
}
