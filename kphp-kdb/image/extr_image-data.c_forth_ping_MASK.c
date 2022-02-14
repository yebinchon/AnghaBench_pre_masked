
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct forth_stack {int top; } ;
struct TYPE_5__ {int filename; } ;
typedef TYPE_1__ ImageInfo ;
typedef int Image ;
typedef int ExceptionInfo ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 void* VAR_0 ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (TYPE_1__*,int *) ;
 void* FUNC_6 (struct forth_stack*,char*,...) ;
 int FUNC_7 (struct forth_stack*,int,int) ;
 int FUNC_8 (struct forth_stack*,char**,char*) ;
 int FUNC_9 (struct forth_stack*,int *) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void *FUNC_12 (void **VAR_3, struct forth_stack *VAR_4) {
  char *VAR_5;
  int VAR_6 = VAR_4->top;
  if (!FUNC_8 (VAR_4, &VAR_5, "ping: 1st isn't str")) {
    VAR_4->top = VAR_6;
    return VAR_0;
  }
  if (FUNC_11 (VAR_5) > VAR_1-1) {
    return FUNC_6 (VAR_4, "ping: filename too long");
  }
  ExceptionInfo VAR_7;
  FUNC_4 (&VAR_7);
  ImageInfo *VAR_8 = FUNC_1 (((void*)0));
  FUNC_10 (VAR_8->filename, VAR_5);
  Image *VAR_9 = FUNC_5 (VAR_8, &VAR_7);
  FUNC_3 (VAR_8);
  if (VAR_9 == ((void*)0)) {
    VAR_4->top = VAR_6;
    FUNC_0 (&VAR_7);
    FUNC_2 (&VAR_7);
    return FUNC_6 (VAR_4, "ping: PingImage (%s) throws exception", VAR_5);
  }

  FUNC_7 (VAR_4, VAR_4->top + 1, VAR_6);

  FUNC_9 (VAR_4, VAR_9);

  VAR_2;
}
