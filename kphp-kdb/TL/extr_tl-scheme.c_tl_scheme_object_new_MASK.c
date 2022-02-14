
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_scheme_object {int type; } ;
typedef enum tl_scheme_object_type { ____Placeholder_tl_scheme_object_type } tl_scheme_object_type ;


 int FUNC_0 (int) ;
 struct tl_scheme_object VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tl_scheme_object* FUNC_1 (int) ;

struct tl_scheme_object *FUNC_2 (enum tl_scheme_object_type VAR_4) {
  if (VAR_4 == VAR_1) {
    return &VAR_0;
  }
  FUNC_0 (VAR_4 != VAR_3 && VAR_4 != VAR_2);
  struct tl_scheme_object *VAR_5 = FUNC_1 (sizeof (struct tl_scheme_object));
  VAR_5->type = VAR_4;
  return VAR_5;
}
