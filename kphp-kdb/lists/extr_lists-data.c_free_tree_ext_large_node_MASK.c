
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree_ext_large_t ;
struct tree_payload {scalar_t__ text; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct tree_payload* FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static inline void FUNC_5 (tree_ext_large_t *VAR_6) {
  int VAR_7 = FUNC_0 (VAR_6);
  struct tree_payload *VAR_8 = FUNC_1 (VAR_6);
  if (VAR_7 == VAR_2 || VAR_7 == VAR_1) {
    if (VAR_8->text && VAR_8->text != VAR_4) {
      FUNC_2 (VAR_8->text >= VAR_0);
      FUNC_4 (VAR_8->text, FUNC_3 (VAR_8->text));
    }
    VAR_8->text = 0;
  } else {
    FUNC_2 (!VAR_8->text);
  }
  VAR_3--;
  FUNC_4 (VAR_6, VAR_5);
}
