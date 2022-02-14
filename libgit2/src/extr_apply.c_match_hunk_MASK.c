
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lines; } ;
typedef TYPE_1__ patch_image ;
struct TYPE_7__ {scalar_t__ content_len; int content; } ;
typedef TYPE_2__ git_diff_line ;


 TYPE_2__* FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(
 patch_image *VAR_0,
 patch_image *VAR_1,
 size_t VAR_2)
{
 bool VAR_3 = 0;
 size_t VAR_4;


 if (FUNC_1(&VAR_1->lines) + VAR_2 >
  FUNC_1(&VAR_0->lines))
  return 0;

 VAR_3 = 1;


 for (VAR_4 = 0; VAR_4 < FUNC_1(&VAR_1->lines); VAR_4++) {
  git_diff_line *VAR_5 = FUNC_0(&VAR_1->lines, VAR_4);
  git_diff_line *VAR_6 = FUNC_0(&VAR_0->lines, VAR_2 + VAR_4);

  if (VAR_5->content_len != VAR_6->content_len ||
   FUNC_2(VAR_5->content, VAR_6->content, VAR_6->content_len) != 0) {
   VAR_3 = 0;
   break;
  }
 }

 return VAR_3;
}
