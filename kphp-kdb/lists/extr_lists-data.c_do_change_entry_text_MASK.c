
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_set_entry_text_long {int len; int text; } ;
struct lev_set_entry_text {int len; int text; } ;
struct lev_generic {int dummy; } ;
typedef int object_id_t ;
typedef int list_id_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct lev_set_entry_text_long*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lev_set_entry_text_long* FUNC_2 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_4 (int ,char const*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,char const*,int,struct lev_generic*) ;
 int FUNC_7 (struct lev_set_entry_text_long*,int ,int ) ;

int FUNC_8 (list_id_t VAR_5, object_id_t VAR_6, const char *VAR_7, int VAR_8) {
  if (FUNC_3 (VAR_5) < 0 || (unsigned) VAR_8 >= VAR_3) {
    return -1;
  }
  if (VAR_4 && FUNC_5 (VAR_5, 1) < 0) {
    return -2;
  }
  if (VAR_8 < 256) {
    struct lev_set_entry_text *VAR_9 = FUNC_2 (VAR_0 + VAR_8, sizeof (struct lev_set_entry_text) + VAR_8 + VAR_2, FUNC_0(VAR_5));
    FUNC_7 (VAR_9, VAR_5, VAR_6);
    FUNC_4 (((struct lev_set_entry_text *) FUNC_1 (VAR_9))->text, VAR_7, VAR_8);
    return FUNC_6 (VAR_5, VAR_6, VAR_7, VAR_8, (struct lev_generic *)VAR_9);
  } else {
    struct lev_set_entry_text_long *VAR_10 = FUNC_2 (VAR_1, sizeof (struct lev_set_entry_text_long) + VAR_8 + VAR_2, FUNC_0(VAR_5));
    FUNC_7 (VAR_10, VAR_5, VAR_6);
    VAR_10->len = VAR_8;
    FUNC_4 (((struct lev_set_entry_text *) FUNC_1 (VAR_10))->text, VAR_7, VAR_8);
    return FUNC_6 (VAR_5, VAR_6, VAR_7, VAR_8, (struct lev_generic *)VAR_10);
  }
}
