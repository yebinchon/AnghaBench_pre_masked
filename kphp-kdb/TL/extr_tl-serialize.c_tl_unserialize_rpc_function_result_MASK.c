
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_scheme_object {int dummy; } ;
struct tl_compiler {int dummy; } ;
struct tl_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tl_compiler*) ;
 int FUNC_1 (struct tl_compiler*,int*,int,int,char*,struct tl_scheme_object**) ;
 int FUNC_2 (struct tl_scheme_object*) ;
 int FUNC_3 (struct tl_buffer*,struct tl_scheme_object*) ;
 int FUNC_4 (struct tl_buffer*,struct tl_scheme_object*,int ) ;

int FUNC_5 (struct tl_compiler *VAR_1, struct tl_buffer *VAR_2, int *VAR_3, int VAR_4, char *VAR_5, int VAR_6) {
  struct tl_scheme_object *VAR_7 = ((void*)0);
  FUNC_0 (VAR_1);
  int VAR_8 = FUNC_1 (VAR_1, VAR_3, VAR_4, 1 << VAR_0, VAR_5, &VAR_7);
  if (VAR_8 >= 0 && VAR_7 != ((void*)0)) {
    if (VAR_6) {
      FUNC_4 (VAR_2, VAR_7, 0);
    } else {
      FUNC_3 (VAR_2, VAR_7);
    }
    FUNC_2 (VAR_7);
  }
  return VAR_8;
}
