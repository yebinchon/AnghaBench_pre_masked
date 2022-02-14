
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct forth_stack {int top; } ;
typedef int Image ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct forth_stack*,int,int) ;
 int * FUNC_1 (struct forth_stack*,char*) ;
 int FUNC_2 (struct forth_stack*,char**,char*) ;
 int FUNC_3 (struct forth_stack*,int *) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void *FUNC_5 (void **VAR_2, struct forth_stack *VAR_3) {
  FUNC_4 (3, "load_image\n");
  char *VAR_4;
  int VAR_5 = VAR_3->top;
  if (!FUNC_2 (VAR_3, &VAR_4, "read_image 1st")) {
    VAR_3->top = VAR_5;
    return VAR_0;
  }
  Image *VAR_6 = FUNC_1 (VAR_3, VAR_4);

  if (VAR_6 == ((void*)0)) {
    VAR_3->top = VAR_5;
    return VAR_0;
  }

  FUNC_0 (VAR_3, VAR_3->top + 1, VAR_5);

  FUNC_3 (VAR_3, VAR_6);

  VAR_1;
}
