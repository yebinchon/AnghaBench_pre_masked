
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct forth_stack {int dummy; } ;
struct TYPE_6__ {scalar_t__ severity; } ;
typedef int RectangleInfo ;
typedef int Image ;
typedef TYPE_1__ ExceptionInfo ;


 int * FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct forth_stack*,TYPE_1__*) ;

__attribute__((used)) static Image *FUNC_5 (struct forth_stack *VAR_1, Image *VAR_2, RectangleInfo *VAR_3) {
  ExceptionInfo VAR_4;
  FUNC_3 (&VAR_4);
  Image *VAR_5 = FUNC_0 (VAR_2, VAR_3, &VAR_4);
  if (VAR_4.severity != VAR_0) {
    FUNC_4 (VAR_1, &VAR_4);
    if (VAR_5 != ((void*)0)) {
      FUNC_2 (VAR_5);
    }
    return 0;
  }
  FUNC_1 (&VAR_4);
  return VAR_5;
}
