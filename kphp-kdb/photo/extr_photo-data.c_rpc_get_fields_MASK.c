
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {long long field_i; TYPE_2__* fields; } ;
typedef TYPE_4__ type_desc ;
struct TYPE_13__ {int v_fid; int type; int v_int; long long v_long; double v_double; int v_string_len; char* v_string; } ;
struct TYPE_8__ {int size; int secret; int extra; int local_id; int volume_id; int server; int rotate; } ;
struct TYPE_10__ {int photo_len; char* photo; int orig_album_id; int orig_owner_id; int server_id2; int server_id; } ;
struct TYPE_12__ {int v_fid; int is_location_engine; TYPE_1__ location_engine; TYPE_3__ location_old; } ;
struct TYPE_9__ {int type; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int *) ;
 TYPE_7__* VAR_8 ;
 size_t VAR_9 ;
 TYPE_6__* VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 (char*,char*,int) ;





 int FUNC_2 (int ,char*,...) ;
 TYPE_4__* VAR_12 ;

int FUNC_3 (int VAR_13, long long VAR_14, char *VAR_15, int VAR_16) {
  if (VAR_16 % sizeof (int) != 0 || VAR_16 == 0) {
    return -1;
  }

  type_desc *VAR_17 = &VAR_12[VAR_13];
  if ((VAR_14 & ((1ll << VAR_17->field_i) - 1)) != VAR_14) {
    FUNC_2 (VAR_1, "Wrong mask = %llx specified", VAR_14);
    return -1;
  }

  int *VAR_18 = (int *)VAR_15;
  int *VAR_19 = (int *)(VAR_15 + VAR_16);

  int VAR_20;
  VAR_9 = 0;
  VAR_11 = 0;
  for (VAR_20 = 0; VAR_20 < VAR_17->field_i; VAR_20++) {
    if ((VAR_14 >> VAR_20) & 1) {
      VAR_8[VAR_9].v_fid = VAR_20;
      int VAR_21 = VAR_8[VAR_9].type = VAR_17->fields[VAR_20].type;

      switch (VAR_21) {
        case 131:
          if (VAR_19 - VAR_18 < 1) {
            return -1;
          }
          VAR_8[VAR_9].v_int = *VAR_18;
          VAR_18++;
          break;
        case 130:
          if (VAR_19 - VAR_18 < 2) {
            return -1;
          }
          VAR_8[VAR_9].v_long = *(long long *)VAR_18;
          VAR_18 += 2;
          break;
        case 132:
          if (VAR_19 - VAR_18 < 2) {
            return -1;
          }
          VAR_8[VAR_9].v_double = *(double *)VAR_18;
          VAR_18 += 2;
          break;
        case 128: {
          if (VAR_19 == VAR_18) {
            return -1;
          }
          char *VAR_22 = (char *)VAR_18;
          VAR_18++;
          int VAR_23 = (unsigned char)*VAR_22++;
          if (VAR_23 < 254) {
            if (VAR_19 - VAR_18 < (VAR_23 >> 2)) {
              return -1;
            }
            VAR_18 += (VAR_23 >> 2);
          } else if (VAR_23 == 254) {
            VAR_23 = (unsigned char)VAR_22[0] + ((unsigned char)VAR_22[1] << 8) + ((unsigned char)VAR_22[2] << 16);
            VAR_22 += 3;
            if (VAR_19 - VAR_18 < ((VAR_23 + 3) >> 2)) {
              return -1;
            }
            VAR_18 += ((VAR_23 + 3) >> 2);
          } else {
            return -1;
          }

          VAR_8[VAR_9].v_string_len = VAR_23;
          VAR_8[VAR_9].v_string = VAR_22;
          break;
        }
        case 129: {
          if (VAR_19 - VAR_18 < 1) {
            return -1;
          }
          int VAR_24 = *VAR_18++;
          while (VAR_24--) {
            if (VAR_11 == VAR_0) {
              FUNC_2 (VAR_1, "Too much locations specified");
              return -1;
            }
            if (VAR_19 - VAR_18 < 1) {
              return -1;
            }
            VAR_10[VAR_11].v_fid = VAR_20;
            int VAR_25 = *VAR_18++;
            if (VAR_25 == VAR_4 || VAR_25 == VAR_2 || VAR_25 == VAR_6) {
              VAR_10[VAR_11].is_location_engine = 0;
              if (VAR_19 - VAR_18 < 5) {
                return -1;
              }
              VAR_10[VAR_11].location_old.server_id = *VAR_18++;
              VAR_10[VAR_11].location_old.server_id2 = *VAR_18++;
              VAR_10[VAR_11].location_old.orig_owner_id = *VAR_18++;
              VAR_10[VAR_11].location_old.orig_album_id = *VAR_18++;

              char *VAR_26 = (char *)VAR_18;
              VAR_18++;
              int VAR_27 = (unsigned char)*VAR_26++;
              if (VAR_27 < 127) {
                if (VAR_19 - VAR_18 < (VAR_27 >> 2)) {
                  return -1;
                }
                VAR_18 += (VAR_27 >> 2);
              } else {
                return -1;
              }

              VAR_10[VAR_11].location_old.photo_len = VAR_27;
              FUNC_1 (VAR_10[VAR_11].location_old.photo, VAR_26, VAR_27);
            } else if (VAR_25 == VAR_5 || VAR_25 == VAR_3 || VAR_25 == VAR_7) {
              VAR_10[VAR_11].is_location_engine = 1;
              if (VAR_19 - VAR_18 < 7) {
                return -1;
              }
              VAR_10[VAR_11].location_engine.rotate = *VAR_18++;
              int VAR_28 = *VAR_18++;
              if ((VAR_28 & 255) != 1 || (VAR_28 >> 16) != 0) {
                FUNC_2 (VAR_1, "Wrong size specified. Size must contain exactly one symbol 'a' - 'z'");
                return -1;
              }
              VAR_10[VAR_11].location_engine.size = (VAR_28 >> 8) & 255;
              VAR_10[VAR_11].location_engine.server = *VAR_18++;
              VAR_10[VAR_11].location_engine.volume_id = *VAR_18++;
              VAR_10[VAR_11].location_engine.local_id = *VAR_18++;
              VAR_10[VAR_11].location_engine.extra = *VAR_18++;

              char *VAR_29 = (char *)VAR_18;
              VAR_18++;
              int VAR_30 = (unsigned char)*VAR_29++;
              char VAR_31[12];
              if (VAR_30 < 12) {
                if (VAR_19 - VAR_18 < (VAR_30 >> 2)) {
                  return -1;
                }
                VAR_18 += (VAR_30 >> 2);
              } else {
                FUNC_2 (VAR_1, "Url_secret is too long");
                return -1;
              }

              FUNC_1 (VAR_31, VAR_29, VAR_30);
              VAR_31[VAR_30] = 0;

              if (FUNC_0 (VAR_31, &VAR_10[VAR_11].location_engine.secret) != 0) {
                FUNC_2 (VAR_1, "Can't decode url_secret");
                return -1;
              }
            } else {
              return -1;
            }

            VAR_11++;
          }
          VAR_9--;
          break;
        }
      }

      VAR_9++;
    }
  }

  if (VAR_18 != VAR_19) {
    FUNC_2 (VAR_1, "Not all data fetched");
    return -1;
  }
  return VAR_9;
}
