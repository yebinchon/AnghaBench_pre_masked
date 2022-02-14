
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char value_t ;
struct lev_set_value_long {char value; } ;
struct lev_set_value {char value; } ;
struct lev_generic {int dummy; } ;
struct lev_del_entry {int dummy; } ;
typedef int object_id_t ;
typedef int list_id_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct lev_set_value*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct lev_set_value* FUNC_2 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int ,int) ;
 long long FUNC_5 (int ,int ,char,int,struct lev_generic*) ;
 int FUNC_6 (struct lev_set_value*,int ,int ) ;

long long FUNC_7 (list_id_t VAR_7, object_id_t VAR_8, value_t VAR_9, int VAR_10) {
  if (FUNC_3 (VAR_7) < 0) {
    return -1LL << 63;
  }
  if (VAR_6 && FUNC_4 (VAR_7, 1) < 0) {
    return -1LL << 63;
  }
  struct lev_set_value *VAR_11;
  if (VAR_10 && VAR_9 == (signed char) VAR_9) {
    VAR_11 = FUNC_2 (VAR_2 + (VAR_9 & 0xff), sizeof (struct lev_del_entry) + VAR_5, FUNC_0 (VAR_7));





  } else {
    VAR_11 = FUNC_2 (VAR_10 ? VAR_0 : VAR_3, sizeof (struct lev_set_value) + VAR_5, FUNC_0 (VAR_7));
    ((struct lev_set_value *) FUNC_1 (VAR_11))->value = VAR_9;
  }

  FUNC_6 (VAR_11, VAR_7, VAR_8);
  return FUNC_5 (VAR_7, VAR_8, VAR_9, VAR_10, (struct lev_generic *)VAR_11);
}
