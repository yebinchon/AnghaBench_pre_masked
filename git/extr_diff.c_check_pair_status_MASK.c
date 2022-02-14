
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_filepair {int status; } ;



 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct diff_filepair *VAR_0)
{
 switch (VAR_0->status) {
 case 128:
  return 0;
 case 0:
  FUNC_0("internal error in diff-resolve-rename-copy");
 default:
  return 1;
 }
}
