
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_scheme_object {int dummy; } ;
struct tl_compiler {int dummy; } ;
struct tl_buffer {int dummy; } ;


 int FUNC_0 (struct tl_compiler*) ;
 int FUNC_1 (struct tl_compiler*,int*,int,int,int *,struct tl_scheme_object**) ;
 int FUNC_2 (struct tl_scheme_object*) ;
 int FUNC_3 (struct tl_buffer*,struct tl_scheme_object*) ;

int FUNC_4 (struct tl_compiler *VAR_0, struct tl_buffer *VAR_1, int *VAR_2, int VAR_3, int VAR_4) {
  struct tl_scheme_object *VAR_5 = ((void*)0);
  FUNC_0 (VAR_0);
  int VAR_6 = FUNC_1 (VAR_0, VAR_2, VAR_3, VAR_4, ((void*)0), &VAR_5);
  if (VAR_6 >= 0 && VAR_5 != ((void*)0)) {
    FUNC_3 (VAR_1, VAR_5);
    FUNC_2 (VAR_5);
  }
  return VAR_6;
}
