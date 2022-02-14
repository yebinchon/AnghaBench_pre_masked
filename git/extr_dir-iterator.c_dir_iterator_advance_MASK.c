
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dirent {int d_name; } ;
struct dir_iterator_level {int dir; int prefix_len; } ;
struct TYPE_6__ {int buf; } ;
struct TYPE_4__ {int st_mode; } ;
struct TYPE_5__ {TYPE_3__ path; TYPE_1__ st; } ;
struct dir_iterator_int {int flags; int levels_nr; TYPE_2__ base; struct dir_iterator_level* levels; } ;
struct dir_iterator {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dir_iterator*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct dir_iterator_int*) ;
 scalar_t__ FUNC_4 (struct dir_iterator_int*,struct dirent*) ;
 scalar_t__ FUNC_5 (struct dir_iterator_int*) ;
 struct dirent* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (char*,int ) ;

int FUNC_9(struct dir_iterator *VAR_5)
{
 struct dir_iterator_int *VAR_6 =
  (struct dir_iterator_int *)VAR_5;

 if (FUNC_0(VAR_6->base.st.st_mode) && FUNC_5(VAR_6)) {
  if (VAR_4 != VAR_1 && VAR_6->flags & VAR_0)
   goto error_out;
  if (VAR_6->levels_nr == 0)
   goto error_out;
 }


 while (1) {
  struct dirent *VAR_7;
  struct dir_iterator_level *VAR_8 =
   &VAR_6->levels[VAR_6->levels_nr - 1];

  FUNC_7(&VAR_6->base.path, VAR_8->prefix_len);
  VAR_4 = 0;
  VAR_7 = FUNC_6(VAR_8->dir);

  if (!VAR_7) {
   if (VAR_4) {
    FUNC_8("error reading directory '%s'",
           VAR_6->base.path.buf);
    if (VAR_6->flags & VAR_0)
     goto error_out;
   } else if (FUNC_3(VAR_6) == 0) {
    return FUNC_1(VAR_5);
   }
   continue;
  }

  if (FUNC_2(VAR_7->d_name))
   continue;

  if (FUNC_4(VAR_6, VAR_7)) {
   if (VAR_4 != VAR_1 && VAR_6->flags & VAR_0)
    goto error_out;
   continue;
  }

  return VAR_3;
 }

error_out:
 FUNC_1(VAR_5);
 return VAR_2;
}
