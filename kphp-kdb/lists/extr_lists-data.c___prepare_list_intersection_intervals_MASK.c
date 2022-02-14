
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ N; int * root; } ;
typedef TYPE_1__ listree_t ;
typedef int list_t ;
typedef int list_id_t ;
typedef int array_object_id_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 int * FUNC_1 (int ,int) ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,TYPE_1__*,int ,scalar_t__,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ,int ,int) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int VAR_21 ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_11 (int *) ;
 int VAR_24 ;

int FUNC_12 (list_id_t VAR_25, int VAR_26, array_object_id_t VAR_27[], int VAR_28, int VAR_29, int VAR_30) {
  if (VAR_19 && FUNC_9 (VAR_25, 1) < 0) {
    return -2;
  }
  list_t *VAR_31 = FUNC_1 (VAR_25, 2);
  int VAR_32, VAR_33;

  VAR_8 = VAR_7;
  VAR_13 = VAR_30;
  VAR_21 = VAR_30 + VAR_18;
  VAR_20 = VAR_21 * 4;

  if (VAR_26 & 1984) {
    VAR_22 = VAR_14;
    if (VAR_29) {
      return -1;
    }
  } else {
    VAR_22 = VAR_23;
  }
  VAR_10 = VAR_26;

  VAR_24 = -1;

  int VAR_34 = VAR_4;
  if (VAR_26 & 64) { VAR_34++; }
  if (VAR_26 & 128) { VAR_34++; }
  if (VAR_26 & 256) { VAR_34++; }
  if (VAR_26 & 512) {
    VAR_24 = VAR_34;
    VAR_34 += VAR_12;
  }
  if (VAR_26 & 1024) { VAR_34 += VAR_6 + 1; }

  VAR_9 = VAR_34;

  if ((unsigned) (VAR_26 & 63) > VAR_11 || VAR_28 < 0 || VAR_28 > VAR_3) {
    return -1;
  }

  if (!VAR_28) {
    return 0;
  }

  if (!VAR_31) {
    return FUNC_3 (VAR_25) < 0 ? -1 : 0;
  }

  FUNC_11 (VAR_31);

  listree_t *VAR_35, VAR_36;


  if ((VAR_26 & 63) == 0) {
    VAR_35 = (listree_t *) &VAR_5;
    VAR_15 = VAR_16;
  } else {
    FUNC_6 (VAR_35 = &VAR_36, VAR_26 & (VAR_11 - 1));
    VAR_15 = VAR_17;
  }

  for (VAR_32 = 1; VAR_32 < VAR_28; VAR_32++) {
    if (FUNC_8 (FUNC_0 (VAR_27, VAR_32), FUNC_0 (VAR_27, VAR_32-1)) <= 0) {
      break;
    }
  }

  if (VAR_32 < VAR_28) {
    FUNC_4 (VAR_27, VAR_28-1);
  }
  VAR_32 = VAR_33 = 1;
  while (VAR_32 < VAR_28) {
    if (FUNC_8 (FUNC_0 (VAR_27, VAR_32), FUNC_0 (VAR_27, VAR_32-1)) > 0) {



      if (VAR_30) {
        VAR_27[2*VAR_33] = VAR_27[2*VAR_32];
        VAR_27[2*VAR_33+1] = VAR_27[2*VAR_32+1];
      } else {
        VAR_27[VAR_33] = VAR_27[VAR_32];
      }

      VAR_33++;
    }
    VAR_32++;
  }



  VAR_27[VAR_33*VAR_21] = VAR_2;

  VAR_0 = VAR_27;

  FUNC_5 (*VAR_35->root, VAR_35, 0, VAR_35->N - 1, VAR_2);

  if (VAR_29) {
    FUNC_10 (VAR_2);
  }

  FUNC_2 (!((VAR_8 - VAR_7) % VAR_9));

  return (VAR_8 - VAR_7) / VAR_9;
}
