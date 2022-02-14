
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct strbuf {int dummy; } ;
struct TYPE_2__ {int suppress_diff_headers; int dual_color_diffed_diffs; int suppress_hunk_header_line_count; } ;
struct diff_options {struct strbuf* output_prefix_data; int output_prefix; TYPE_1__ flags; scalar_t__ output_format; } ;
typedef int opts ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 struct string_list VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct diff_options*) ;
 int FUNC_2 (struct diff_options*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (struct string_list*,struct string_list*) ;
 int FUNC_5 (struct string_list*,struct string_list*,int) ;
 int FUNC_6 (struct diff_options*,struct diff_options*,int) ;
 int FUNC_7 (struct string_list*,struct string_list*,struct diff_options*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (char const*,struct string_list*) ;
 int FUNC_9 (struct strbuf*,char*) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct string_list*,int) ;

int FUNC_12(const char *VAR_4, const char *VAR_5,
      int VAR_6, int VAR_7,
      struct diff_options *VAR_8)
{
 int VAR_9 = 0;

 struct string_list VAR_10 = VAR_2;
 struct string_list VAR_11 = VAR_2;

 if (FUNC_8(VAR_4, &VAR_10))
  VAR_9 = FUNC_3(FUNC_0("could not parse log for '%s'"), VAR_4);
 if (!VAR_9 && FUNC_8(VAR_5, &VAR_11))
  VAR_9 = FUNC_3(FUNC_0("could not parse log for '%s'"), VAR_5);

 if (!VAR_9) {
  struct diff_options VAR_12;
  struct strbuf VAR_13 = VAR_1;

  if (VAR_8)
   FUNC_6(&VAR_12, VAR_8, sizeof(VAR_12));
  else
   FUNC_1(&VAR_12);

  if (!VAR_12.output_format)
   VAR_12.output_format = VAR_0;
  VAR_12.flags.suppress_diff_headers = 1;
  VAR_12.flags.dual_color_diffed_diffs = VAR_7;
  VAR_12.flags.suppress_hunk_header_line_count = 1;
  VAR_12.output_prefix = VAR_3;
  FUNC_9(&VAR_13, "    ");
  VAR_12.output_prefix_data = &VAR_13;
  FUNC_2(&VAR_12);

  FUNC_4(&VAR_10, &VAR_11);
  FUNC_5(&VAR_10, &VAR_11, VAR_6);
  FUNC_7(&VAR_10, &VAR_11, &VAR_12);

  FUNC_10(&VAR_13);
 }

 FUNC_11(&VAR_10, 1);
 FUNC_11(&VAR_11, 1);

 return VAR_9;
}
