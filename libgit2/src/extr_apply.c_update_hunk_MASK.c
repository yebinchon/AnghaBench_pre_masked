
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * contents; } ;
struct TYPE_9__ {TYPE_5__ lines; } ;
typedef TYPE_1__ patch_image ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*,size_t) ;
 int FUNC_2 (TYPE_5__*,size_t,size_t) ;
 size_t FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,size_t,size_t) ;

__attribute__((used)) static int FUNC_5(
 patch_image *VAR_0,
 size_t VAR_1,
 patch_image *VAR_2,
 patch_image *VAR_3)
{
 size_t VAR_4 = FUNC_3(&VAR_3->lines);
 size_t VAR_5 = FUNC_3(&VAR_2->lines);
 size_t VAR_6;
 int VAR_7 = 0;

 if (VAR_4 > VAR_5)
  VAR_7 = FUNC_2(
   &VAR_0->lines, VAR_1, (VAR_4 - VAR_5));
 else if (VAR_5 > VAR_4)
  VAR_7 = FUNC_4(
   &VAR_0->lines, VAR_1, (VAR_5 - VAR_4));

 if (VAR_7) {
  FUNC_0();
  return -1;
 }

 for (VAR_6 = 0; VAR_6 < FUNC_3(&VAR_3->lines); VAR_6++) {
  VAR_0->lines.contents[VAR_1 + VAR_6] =
   FUNC_1(&VAR_3->lines, VAR_6);
 }

 return 0;
}
