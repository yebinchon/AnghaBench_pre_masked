
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_stack {int top; } ;
typedef int Image ;


 void* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct forth_stack*,char*) ;
 int FUNC_1 (struct forth_stack*,int,int) ;
 int * FUNC_2 (struct forth_stack*,int *,int) ;
 int FUNC_3 (struct forth_stack*,int **,char*) ;
 int FUNC_4 (struct forth_stack*,int*,char*) ;
 int FUNC_5 (struct forth_stack*,int *) ;

__attribute__((used)) static void *FUNC_6 (void **VAR_2, struct forth_stack *VAR_3) {
  Image *VAR_4;
  int VAR_5 = VAR_3->top;
  int VAR_6;

  if (!FUNC_4 (VAR_3, &VAR_6, "rotate_image 2nd")) {
    VAR_3->top = VAR_5;
    return VAR_0;
  }

  if (!FUNC_3 (VAR_3, &VAR_4, "rotate_image 1st")) {
    VAR_3->top = VAR_5;
    return VAR_0;
  }

  VAR_6 %= 4;
  if (VAR_6 < 0) {
    VAR_6 += 4;
  }
  Image *VAR_7 = FUNC_2 (VAR_3, VAR_4, 90 * VAR_6);
  if (VAR_7 == ((void*)0)) {
    VAR_3->top = VAR_5;
    return FUNC_0 (VAR_3, "rotate_image: gm_rotate_image fail");
  }

  FUNC_1 (VAR_3, VAR_3->top + 1, VAR_5);

  FUNC_5 (VAR_3, VAR_7);

  VAR_1;
}
