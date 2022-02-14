
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int listree_t ;
typedef int list_t ;
typedef int list_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

int FUNC_7 (list_id_t VAR_16, int VAR_17, int VAR_18, int VAR_19, int VAR_20) {
  if (VAR_18 <= 0 || VAR_19 <= VAR_18 || VAR_20 <= 0 || (unsigned) VAR_17 >= 16) {
    return -1;
  }
  int VAR_21 = (VAR_19 - VAR_18) % VAR_20;
  int VAR_22 = (VAR_19 - VAR_18) / VAR_20;
  if (VAR_21 || VAR_22 > VAR_1 - 2) {
    return -1;
  }
  if (VAR_15 && FUNC_5 (VAR_16, 1) < 0) {
    return -2;
  }

  VAR_4 = VAR_3;

  list_t *VAR_23 = FUNC_0 (VAR_16, 2);

  if (!VAR_23) {
    return FUNC_1 (VAR_16) < 0 ? -1 : 0;
  }

  FUNC_6 (VAR_23);

  FUNC_4 (VAR_3, 0, (VAR_22 + 2) * 4);

  listree_t VAR_24, *VAR_25 = &VAR_24;

  if (!VAR_17) {
    VAR_13 = VAR_9;
    VAR_14 = VAR_10;
    VAR_25 = (listree_t *) &VAR_2;
  } else {
    VAR_13 = VAR_11;
    VAR_14 = VAR_12;
    FUNC_3 (VAR_25, VAR_17 & 7);
  }
  VAR_8 = VAR_18;
  VAR_7 = VAR_19;
  VAR_6 = VAR_20;
  VAR_5 = VAR_22;

  FUNC_2 (VAR_25, 0, VAR_0);

  VAR_4 = VAR_3 + VAR_22 + 2;

  return VAR_22 + 2;
}
