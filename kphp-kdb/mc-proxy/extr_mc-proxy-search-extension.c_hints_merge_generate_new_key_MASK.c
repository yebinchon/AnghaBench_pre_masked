
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hints_gather_extra {int type; int num; int slice_limit; scalar_t__ need_latin; int uid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,...) ;

int FUNC_2 (char *VAR_0, char *VAR_1, int VAR_2, void *VAR_3) {
  FUNC_0 (VAR_3 != ((void*)0));

  char *VAR_4 = VAR_0;

  struct hints_gather_extra *VAR_5 = (struct hints_gather_extra *)VAR_3;

  VAR_0 += FUNC_1 (VAR_0, "gather_hints%s%d", VAR_5->need_latin ? "_latin" : "", VAR_5->uid);
  if (VAR_5->type != -1) {
    VAR_0 += FUNC_1 (VAR_0, ",%d", VAR_5->type);
  }
  if (VAR_5->num != 0) {
    VAR_0 += FUNC_1 (VAR_0, "*%d", VAR_5->num);
  }
  VAR_0 += FUNC_1 (VAR_0, "#%d", VAR_5->slice_limit);

  while (*VAR_1 != '(') {
    VAR_1++;
  }
  while (*VAR_1 != ')') {
    *VAR_0++ = *VAR_1++;
  }
  *VAR_0++ = ')';

  *VAR_0 = 0;
  return VAR_0 - VAR_4;
}
