
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int field_i; TYPE_2__* fields; } ;
typedef TYPE_1__ type_desc ;
struct TYPE_12__ {int type; } ;
typedef TYPE_2__ field_desc ;
typedef int event ;
struct TYPE_13__ {scalar_t__ deleted; int * dyn; int * obj; } ;
typedef TYPE_3__ actual_object ;


 int * FUNC_0 (int *,TYPE_2__*) ;
 int* FUNC_1 (int *,TYPE_2__*) ;
 int * FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 char* FUNC_4 (int *,TYPE_2__*) ;



 char* FUNC_5 (int ) ;
 int FUNC_6 (char*,char) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int) ;
 int FUNC_10 (unsigned char*,int,char*,int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int VAR_6 ;
 int FUNC_13 (char*) ;





 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (char*,int) ;
 TYPE_1__* VAR_7 ;

void FUNC_19 (actual_object *VAR_8, int VAR_9, long long VAR_10) {
  event *VAR_11 = VAR_8->obj, *VAR_12 = VAR_8->dyn;
  type_desc *VAR_13 = &VAR_7[VAR_9];

  int VAR_14 = 0;
  int VAR_15;
  for (VAR_15 = 0; VAR_15 < VAR_13->field_i; VAR_15++) {
    if ((VAR_10 >> VAR_15) & 1) {
      if (VAR_12 == ((void*)0) || !FUNC_12 (VAR_12, VAR_15)) {
        if (VAR_11 == ((void*)0) || !FUNC_12 (VAR_11, VAR_15)) {
          VAR_10 -= (1ll << VAR_15);
        }
      }
    }
  }

  int VAR_16 = (VAR_8->deleted ? (1 << 29) : 0);
  if (VAR_10 >= (1 << 29)) {
    FUNC_15 ((VAR_10 & ((1 << 29) - 1)) + VAR_16 + (1 << 30));
    FUNC_15 (VAR_10 >> 29);
  } else {
    FUNC_15 (VAR_10 + VAR_16);
  }

  for (VAR_15 = 0; VAR_15 < VAR_13->field_i; VAR_15++) {
    if ((VAR_10 >> VAR_15) & 1) {
      event *VAR_17 = ((void*)0);
      if (VAR_12 != ((void*)0) && FUNC_12 (VAR_12, VAR_15)) {
        VAR_17 = VAR_12;
      } else if (VAR_11 != ((void*)0) && FUNC_12 (VAR_11, VAR_15)) {
        VAR_17 = VAR_11;
      }
      FUNC_9 (*VAR_17);

      field_desc *VAR_18 = &VAR_13->fields[VAR_15];
      switch (VAR_18->type) {
        case 131: {
          int VAR_19 = *FUNC_1(VAR_17, VAR_18);

          FUNC_15 (VAR_19);
          break;
        }
        case 130:
          FUNC_16 (*FUNC_2(VAR_17, VAR_18));
          break;
        case 132:
          FUNC_14 (*FUNC_0(VAR_17, VAR_18));
          break;
        case 128: {
          char *VAR_20 = FUNC_4(VAR_17, VAR_18);
          FUNC_18 (VAR_20, FUNC_13 (VAR_20));
          break;
        }
        case 129: {
          char *VAR_21 = FUNC_5 (FUNC_3 (VAR_17, VAR_18));
          FUNC_9 (VAR_21 != ((void*)0));

          char *VAR_22 = VAR_21;
          int VAR_23 = 0;
          if (VAR_21[0] < 0) {
            VAR_21 += -(VAR_21[0] + VAR_6) + 4 * sizeof (int) + 1;
            VAR_23 = 1;
          }
          VAR_23 += *VAR_21;
          VAR_21 = VAR_22;
          FUNC_15 (VAR_23);


          if (VAR_21[0] < 0) {
            switch (VAR_6) {
              case 134:
                VAR_14 = VAR_2;
                break;
              case 133:
                VAR_14 = VAR_4;
                break;
              case 135:
                VAR_14 = VAR_0;
                break;
              default:
                FUNC_9 (0);
            }
            FUNC_15 (VAR_14);

            int VAR_24 = -(VAR_21[0] + VAR_6);
            VAR_21++;

            FUNC_17 (VAR_21, 4 * sizeof (int));
            VAR_21 += 4 * sizeof (int);

            FUNC_18 (VAR_21, VAR_24);
            VAR_21 += VAR_24;
          }

          switch (VAR_6) {
            case 134:
              VAR_14 = VAR_3;
              break;
            case 133:
              VAR_14 = VAR_5;
              break;
            case 135:
              VAR_14 = VAR_1;
              break;
            default:
              FUNC_9 (0);
          }

          int VAR_25 = 0, VAR_26 = 0, VAR_27 = 0, VAR_28, VAR_29;
          char VAR_30 = 0, VAR_31;
          unsigned long long VAR_32;

          for (VAR_28 = *VAR_21++; VAR_28 > 0; VAR_28--) {
            FUNC_6(VAR_21, VAR_30);
            FUNC_9 (VAR_30);

            if (VAR_30 < 0) {
              VAR_30 *= -1;
              FUNC_6(VAR_21, VAR_31);
              VAR_26 += VAR_31;
            } else {
              FUNC_7(VAR_21, VAR_25);
              FUNC_7(VAR_21, VAR_26);
              VAR_27 = FUNC_11 (VAR_25);
            }
            FUNC_7(VAR_21, VAR_29);
            FUNC_8(VAR_21, VAR_32);

            char VAR_33[12];
            FUNC_9 (!FUNC_10 ((unsigned char *)&VAR_32, 8, VAR_33, 12));

            int VAR_34 = (VAR_30 >> 5);
            char VAR_35[2];
            VAR_35[0] = (VAR_30 & 31) + 'a' - 1;
            VAR_35[1] = 0;

            FUNC_15 (VAR_14);
            FUNC_15 (VAR_34);
            FUNC_18 (VAR_35, 1);
            FUNC_15 (VAR_27);
            FUNC_15 (VAR_25);
            FUNC_15 (VAR_26);
            FUNC_15 (VAR_29);
            FUNC_18 (VAR_33, FUNC_13 (VAR_33));
          }
          break;
        }
        default:
          FUNC_9 (0);
      }
    }
  }
}
