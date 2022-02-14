
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct forth_stack {int top; int * x; } ;
struct TYPE_3__ {int length; int value; } ;
typedef TYPE_1__ ImageAttribute ;
typedef int Image ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct forth_stack*,int,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (struct forth_stack*,int **,char*) ;
 int FUNC_7 (struct forth_stack*,char**,char*) ;

__attribute__((used)) static void *FUNC_8 (void **VAR_2, struct forth_stack *VAR_3) {
  char *VAR_4;
  Image *VAR_5;
  int VAR_6 = VAR_3->top;

  if (!FUNC_7 (VAR_3, &VAR_4, "getattr: 2nd isn't str")) {
    VAR_3->top = VAR_6;
    return VAR_0;
  }

  if (!FUNC_6 (VAR_3, &VAR_5, "getattr: 1st isn't image")) {
    VAR_3->top = VAR_6;
    return VAR_0;
  }

  FUNC_2 (VAR_3, VAR_3->top + 1, VAR_6);

  const ImageAttribute *VAR_7 = FUNC_0 (VAR_5, VAR_4);
  if (VAR_7 == ((void*)0)) {
    VAR_3->top++;
    FUNC_5 (&VAR_3->x[VAR_3->top], "NULL", 0);
  } else {
    char *VAR_8 = FUNC_3 (VAR_7->length+1); FUNC_1 (VAR_8);
    FUNC_4 (VAR_8, VAR_7->value, VAR_7->length);
    VAR_8[VAR_7->length] = 0;
    VAR_3->top++;
    FUNC_5 (&VAR_3->x[VAR_3->top], VAR_8, 0);
  }

  VAR_1;
}
