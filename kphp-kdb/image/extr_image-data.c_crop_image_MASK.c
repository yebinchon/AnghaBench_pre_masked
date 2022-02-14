
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct forth_stack {int top; } ;
struct TYPE_3__ {int x; int y; int width; int height; } ;
typedef TYPE_1__ RectangleInfo ;
typedef int Image ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct forth_stack*,int,int) ;
 int * FUNC_1 (struct forth_stack*,int *,TYPE_1__*) ;
 int FUNC_2 (struct forth_stack*,int **,char*) ;
 int FUNC_3 (struct forth_stack*,int*,char*) ;
 int FUNC_4 (struct forth_stack*,int *) ;

__attribute__((used)) static void *FUNC_5 (void **VAR_2, struct forth_stack *VAR_3) {
  int VAR_4 = VAR_3->top;
  int VAR_5, VAR_6, VAR_7, VAR_8;
  Image *VAR_9;

  if (!FUNC_3 (VAR_3, &VAR_8, "crop_image 5th")) {
    VAR_3->top = VAR_4;
    return VAR_0;
  }

  if (!FUNC_3 (VAR_3, &VAR_7, "crop_image 4th")) {
    VAR_3->top = VAR_4;
    return VAR_0;
  }

  if (!FUNC_3 (VAR_3, &VAR_6, "crop_image 3rd")) {
    VAR_3->top = VAR_4;
    return VAR_0;
  }

  if (!FUNC_3 (VAR_3, &VAR_5, "crop_image 2nd")) {
    VAR_3->top = VAR_4;
    return VAR_0;
  }

  if (!FUNC_2 (VAR_3, &VAR_9, "crop_image 1st")) {
    VAR_3->top = VAR_4;
    return VAR_0;
  }
  RectangleInfo VAR_10;
  VAR_10.x = VAR_5;
  VAR_10.y = VAR_6;
  VAR_10.width = VAR_7;
  VAR_10.height = VAR_8;
  Image *VAR_11 = FUNC_1 (VAR_3, VAR_9, &VAR_10);
  if (VAR_11 == ((void*)0)) {
    VAR_3->top = VAR_4;
    return VAR_0;
  }

  FUNC_0 (VAR_3, VAR_3->top + 1, VAR_4);

  FUNC_4 (VAR_3, VAR_11);

  VAR_1;

}
