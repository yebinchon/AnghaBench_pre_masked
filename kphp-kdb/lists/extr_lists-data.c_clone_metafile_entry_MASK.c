
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_ext_large_t ;
struct tree_payload {int date; int value; int flags; scalar_t__ text; int global_id; } ;
typedef int object_id_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 struct tree_payload* FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static tree_ext_large_t *FUNC_8 (int VAR_5) {
  FUNC_3 (VAR_5 >= 0 && VAR_5 < VAR_2);
  object_id_t VAR_6 = FUNC_1 (VAR_1, VAR_5);
  tree_ext_large_t *VAR_7 = FUNC_4 (&VAR_3, VAR_6);
  FUNC_3 (FUNC_0 (VAR_7) == VAR_4);
  struct tree_payload *VAR_8 = FUNC_2 (VAR_7);
  VAR_8->global_id = VAR_0[VAR_5];
  VAR_8->text = 0;
  VAR_8->flags = FUNC_6 (VAR_5);
  VAR_8->value = FUNC_7 (VAR_5);
  VAR_8->date = FUNC_5 (VAR_5);
  return VAR_7;
}
