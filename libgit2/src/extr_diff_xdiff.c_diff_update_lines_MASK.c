
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int new_lineno; int old_lineno; } ;
typedef TYPE_1__ git_xdiff_info ;
struct TYPE_6__ {char const* content; size_t content_len; int origin; int old_lineno; int new_lineno; scalar_t__ num_lines; } ;
typedef TYPE_2__ git_diff_line ;
 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(
 git_xdiff_info *VAR_1,
 git_diff_line *VAR_2,
 const char *VAR_3,
 size_t VAR_4)
{
 const char *VAR_5 = VAR_3, *VAR_6 = VAR_3 + VAR_4;

 for (VAR_2->num_lines = 0; VAR_5 < VAR_6; ++VAR_5)
  if (*VAR_5 == '\n')
   ++VAR_2->num_lines;

 VAR_2->content = VAR_3;
 VAR_2->content_len = VAR_4;


 switch (VAR_2->origin) {
 case 133:
 case 128:
  VAR_2->old_lineno = -1;
  VAR_2->new_lineno = VAR_1->new_lineno;
  VAR_1->new_lineno += (int)VAR_2->num_lines;
  break;
 case 129:
 case 132:
  VAR_2->old_lineno = VAR_1->old_lineno;
  VAR_2->new_lineno = -1;
  VAR_1->old_lineno += (int)VAR_2->num_lines;
  break;
 case 131:
 case 130:
  VAR_2->old_lineno = VAR_1->old_lineno;
  VAR_2->new_lineno = VAR_1->new_lineno;
  VAR_1->old_lineno += (int)VAR_2->num_lines;
  VAR_1->new_lineno += (int)VAR_2->num_lines;
  break;
 default:
  FUNC_0(VAR_0, "unknown diff line origin %02x",
   (unsigned int)VAR_2->origin);
  return -1;
 }

 return 0;
}
