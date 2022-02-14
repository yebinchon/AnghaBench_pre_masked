
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct forth_stack {int top; } ;
struct TYPE_6__ {scalar_t__ severity; } ;
typedef int Image ;
typedef TYPE_1__ ExceptionInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 void* VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (int *,int,int,int ,double,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct forth_stack*,int,int) ;
 int FUNC_5 (struct forth_stack*,TYPE_1__*) ;
 int FUNC_6 (struct forth_stack*,int **,char*) ;
 int FUNC_7 (struct forth_stack*,int*,char*) ;
 int FUNC_8 (struct forth_stack*,int *) ;

__attribute__((used)) static void *FUNC_9 (void **VAR_4, struct forth_stack *VAR_5) {
  Image *VAR_6;
  int VAR_7 = VAR_5->top;
  int VAR_8, VAR_9;
  if (!FUNC_7 (VAR_5, &VAR_9, "resize_image 3rd")) {
    VAR_5->top = VAR_7;
    return VAR_0;
  }

  if (!FUNC_7 (VAR_5, &VAR_8, "resize_image 2nd")) {
    VAR_5->top = VAR_7;
    return VAR_0;
  }

  if (!FUNC_6 (VAR_5, &VAR_6, "resize_image 1st")) {
    VAR_5->top = VAR_7;
    return VAR_0;
  }

  ExceptionInfo VAR_10;
  FUNC_2 (&VAR_10);
  Image *VAR_11 = FUNC_3 (VAR_6, VAR_8, VAR_9, VAR_1, 1.0, &VAR_10);
  if (VAR_10.severity != VAR_3) {
    VAR_5->top = VAR_7;
    FUNC_5 (VAR_5, &VAR_10);
    if (VAR_11 != ((void*)0)) {
      FUNC_1 (VAR_11);
    }
    return VAR_0;
  }
  FUNC_0 (&VAR_10);

  FUNC_4 (VAR_5, VAR_5->top + 1, VAR_7);

  FUNC_8 (VAR_5, VAR_11);

  VAR_2;
}
