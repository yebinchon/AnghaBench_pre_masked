
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_diff_line_cb ;
typedef int git_diff_format_t ;
typedef int git_buf ;
struct TYPE_5__ {int old_lineno; int new_lineno; int num_lines; } ;
struct TYPE_4__ {scalar_t__ id_strlen; TYPE_2__ line; int * buf; void* payload; int print_cb; int format; } ;
typedef TYPE_1__ diff_print_info ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_2(
 diff_print_info *VAR_3,
 git_buf *VAR_4,
 git_repository *VAR_5,
 git_diff_format_t VAR_6,
 git_diff_line_cb VAR_7,
 void *VAR_8)
{
 VAR_3->format = VAR_6;
 VAR_3->print_cb = VAR_7;
 VAR_3->payload = VAR_8;
 VAR_3->buf = VAR_4;

 if (!VAR_3->id_strlen) {
  if (!VAR_5)
   VAR_3->id_strlen = VAR_0;
  else if (FUNC_0(&VAR_3->id_strlen, VAR_5, VAR_1) < 0)
   return -1;
 }

 if (VAR_3->id_strlen > VAR_2)
  VAR_3->id_strlen = VAR_2;

 FUNC_1(&VAR_3->line, 0, sizeof(VAR_3->line));
 VAR_3->line.old_lineno = -1;
 VAR_3->line.new_lineno = -1;
 VAR_3->line.num_lines = 1;

 return 0;
}
