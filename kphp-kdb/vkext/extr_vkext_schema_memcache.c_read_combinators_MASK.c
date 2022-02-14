
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_type {scalar_t__ extra; scalar_t__ constructors_num; struct tl_combinator** constructors; } ;
struct tl_combinator {int is_fun; struct tl_combinator* id; void* name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct tl_combinator*) ;
 scalar_t__ FUNC_5 (struct tl_combinator*) ;
 int FUNC_6 (struct tl_combinator*) ;
 int VAR_0 ;
 int FUNC_7 (struct tl_combinator*) ;
 int FUNC_8 (struct tl_combinator*) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 () ;
 void* FUNC_10 () ;
 scalar_t__ FUNC_11 (struct tl_combinator**) ;
 struct tl_type* FUNC_12 (int) ;
 int FUNC_13 (struct tl_combinator*,int) ;
 struct tl_combinator* FUNC_14 (int) ;

struct tl_combinator *FUNC_15 (int VAR_2) {
  struct tl_combinator *VAR_3 = FUNC_14 (sizeof (*VAR_3));
  VAR_3->name = FUNC_10 ();
  if (FUNC_9 () || FUNC_11 (&VAR_3->id) < 0) {
    FUNC_13 (VAR_3, sizeof (*VAR_3));
    return 0;
  }
  FUNC_0 (FUNC_6 (VAR_3->id));
  FUNC_2 (FUNC_6 (VAR_3->id));
  int VAR_4 = FUNC_10 ();
  struct tl_type *VAR_5 = FUNC_12 (VAR_4);
  if (!VAR_5 && (VAR_4 || VAR_2 != 3)) {
    FUNC_1 (FUNC_6 (VAR_3->id));
    FUNC_13 (VAR_3->id, FUNC_6 (VAR_3->id));
    FUNC_13 (VAR_3, sizeof (*VAR_3));
    return 0;
  }
  FUNC_3 (VAR_5 || (!VAR_4 && VAR_2 == 3));
  if (VAR_2 == 2) {
    if (VAR_5->extra >= VAR_5->constructors_num) {
      FUNC_13 (VAR_3, sizeof (*VAR_3));
      return 0;
    }
    FUNC_3 (VAR_5->extra < VAR_5->constructors_num);
    VAR_5->constructors[VAR_5->extra ++] = VAR_3;
    VAR_0 ++;
    VAR_3->is_fun = 0;
  } else {
    FUNC_3 (VAR_2 == 3);
    FUNC_7 (VAR_3);
    FUNC_8 (VAR_3);
    VAR_1 ++;
    VAR_3->is_fun = 1;
  }
  if (FUNC_4 (VAR_3) < 0) {

    return 0;
  }
  if (FUNC_5 (VAR_3) < 0) {

    return 0;
  }
  FUNC_2 (sizeof (*VAR_3));
  return VAR_3;
}
