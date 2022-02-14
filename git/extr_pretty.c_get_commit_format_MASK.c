
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int use_terminator; int expand_tabs_in_log_default; int commit_format; } ;
struct cmt_fmt_map {int is_tformat; char const* user_format; int format; int expand_tabs_in_log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 struct cmt_fmt_map* FUNC_1 (char const*) ;
 int FUNC_2 (struct rev_info*,char const*,int) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 scalar_t__ FUNC_4 (char const*,char) ;

void FUNC_5(const char *VAR_2, struct rev_info *VAR_3)
{
 struct cmt_fmt_map *VAR_4;

 VAR_3->use_terminator = 0;
 if (!VAR_2) {
  VAR_3->commit_format = VAR_0;
  return;
 }
 if (FUNC_3(VAR_2, "format:", &VAR_2)) {
  FUNC_2(VAR_3, VAR_2, 0);
  return;
 }

 if (!*VAR_2 || FUNC_3(VAR_2, "tformat:", &VAR_2) || FUNC_4(VAR_2, '%')) {
  FUNC_2(VAR_3, VAR_2, 1);
  return;
 }

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  FUNC_0("invalid --pretty format: %s", VAR_2);

 VAR_3->commit_format = VAR_4->format;
 VAR_3->use_terminator = VAR_4->is_tformat;
 VAR_3->expand_tabs_in_log_default = VAR_4->expand_tabs_in_log;
 if (VAR_4->format == VAR_1) {
  FUNC_2(VAR_3, VAR_4->user_format,
     VAR_4->is_tformat);
 }
}
