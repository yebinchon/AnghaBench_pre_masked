
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct diff_filepair {scalar_t__ status; TYPE_2__* two; TYPE_1__* one; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_3__ {int mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static char *FUNC_1(const struct diff_filepair *VAR_2, int VAR_3)
{
 if (!VAR_3) {
  if (VAR_2->status == VAR_0) {
   if (FUNC_0(VAR_2->two->mode))
    return "new +l";
   else if ((VAR_2->two->mode & 0777) == 0755)
    return "new +x";
   else
    return "new";
  } else if (VAR_2->status == VAR_1)
   return "gone";
 }
 if (FUNC_0(VAR_2->one->mode) && !FUNC_0(VAR_2->two->mode))
  return "mode -l";
 else if (!FUNC_0(VAR_2->one->mode) && FUNC_0(VAR_2->two->mode))
  return "mode +l";
 else if ((VAR_2->one->mode & 0777) == 0644 &&
   (VAR_2->two->mode & 0777) == 0755)
  return "mode +x";
 else if ((VAR_2->one->mode & 0777) == 0755 &&
   (VAR_2->two->mode & 0777) == 0644)
  return "mode -x";
 return ((void*)0);
}
