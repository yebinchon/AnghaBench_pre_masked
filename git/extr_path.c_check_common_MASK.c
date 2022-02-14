
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct common_dir {int is_common; scalar_t__ is_dir; } ;



__attribute__((used)) static int FUNC_0(const char *VAR_0, void *VAR_1, void *VAR_2)
{
 struct common_dir *VAR_3 = VAR_1;

 if (VAR_3->is_dir && (VAR_0[0] == 0 || VAR_0[0] == '/'))
  return VAR_3->is_common;

 if (!VAR_3->is_dir && VAR_0[0] == 0)
  return VAR_3->is_common;

 return 0;
}
