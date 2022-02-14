
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_filespec {int mode; int path; } ;
struct combine_diff_path {int mode; int path; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct combine_diff_path *VAR_0,
     const struct diff_filespec *VAR_1)
{
 if (!FUNC_0(VAR_0->mode) && !FUNC_0(VAR_1->mode))
  return FUNC_2(VAR_0->path, VAR_1->path);

 return FUNC_1(VAR_0->path, FUNC_3(VAR_0->path), VAR_0->mode,
     VAR_1->path, FUNC_3(VAR_1->path), VAR_1->mode);
}
