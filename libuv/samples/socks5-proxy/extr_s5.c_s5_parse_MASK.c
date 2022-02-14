
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int s5_err ;
struct TYPE_3__ {int state; int arg0; int arg1; int userlen; int* username; int passlen; int* password; int* daddr; int dport; int atyp; int cmd; int methods; } ;
typedef TYPE_1__ s5_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;


 int VAR_14 ;
s5_err FUNC_1(s5_ctx *VAR_15, uint8_t **VAR_16, size_t *VAR_17) {
  s5_err VAR_18;
  uint8_t *VAR_19;
  uint8_t VAR_20;
  size_t VAR_21;
  size_t VAR_22;

  VAR_19 = *VAR_16;
  VAR_22 = *VAR_17;
  VAR_21 = 0;

  while (VAR_21 < VAR_22) {
    VAR_20 = VAR_19[VAR_21];
    VAR_21 += 1;
    switch (VAR_15->state) {
      case 128:
        if (VAR_20 != 5) {
          VAR_18 = VAR_10;
          goto out;
        }
        VAR_15->state = 137;
        break;

      case 137:
        VAR_15->arg0 = 0;
        VAR_15->arg1 = VAR_20;
        VAR_15->state = 138;
        break;

      case 138:
        if (VAR_15->arg0 < VAR_15->arg1) {
          switch (VAR_20) {
            case 0:
              VAR_15->methods |= VAR_1;
              break;
            case 1:
              VAR_15->methods |= VAR_0;
              break;
            case 2:
              VAR_15->methods |= VAR_2;
              break;

          }
          VAR_15->arg0 += 1;
        }
        if (VAR_15->arg0 == VAR_15->arg1) {
          VAR_18 = VAR_6;
          goto out;
        }
        break;

      case 140:
        if (VAR_20 != 1) {
          VAR_18 = VAR_10;
          goto out;
        }
        VAR_15->state = 142;
        break;

      case 142:
        VAR_15->arg0 = 0;
        VAR_15->userlen = VAR_20;
        VAR_15->state = 141;
        break;

      case 141:
        if (VAR_15->arg0 < VAR_15->userlen) {
          VAR_15->username[VAR_15->arg0] = VAR_20;
          VAR_15->arg0 += 1;
        }
        if (VAR_15->arg0 == VAR_15->userlen) {
          VAR_15->username[VAR_15->userlen] = '\0';
          VAR_15->state = 144;
        }
        break;

      case 144:
        VAR_15->arg0 = 0;
        VAR_15->passlen = VAR_20;
        VAR_15->state = 143;
        break;

      case 143:
        if (VAR_15->arg0 < VAR_15->passlen) {
          VAR_15->password[VAR_15->arg0] = VAR_20;
          VAR_15->arg0 += 1;
        }
        if (VAR_15->arg0 == VAR_15->passlen) {
          VAR_15->password[VAR_15->passlen] = '\0';
          VAR_15->state = 129;
          VAR_18 = VAR_7;
          goto out;
        }
        break;

      case 129:
        if (VAR_20 != 5) {
          VAR_18 = VAR_10;
          goto out;
        }
        VAR_15->state = 134;
        break;

      case 134:
        switch (VAR_20) {
          case 1:
            VAR_15->cmd = VAR_11;
            break;
          case 3:
            VAR_15->cmd = VAR_12;
            break;
          default:
            VAR_18 = VAR_9;
            goto out;
        }
        VAR_15->state = 130;
        break;

      case 130:
        VAR_15->state = 136;
        break;

      case 136:
        VAR_15->arg0 = 0;
        switch (VAR_20) {
          case 1:
            VAR_15->state = 133;
            VAR_15->atyp = VAR_4;
            VAR_15->arg1 = 4;
            break;
          case 3:
            VAR_15->state = 135;
            VAR_15->atyp = VAR_3;
            VAR_15->arg1 = 0;
            break;
          case 4:
            VAR_15->state = 133;
            VAR_15->atyp = VAR_5;
            VAR_15->arg1 = 16;
            break;
          default:
            VAR_18 = VAR_8;
            goto out;
        }
        break;

      case 135:
        VAR_15->arg1 = VAR_20;
        VAR_15->state = 133;
        break;

      case 133:
        if (VAR_15->arg0 < VAR_15->arg1) {
          VAR_15->daddr[VAR_15->arg0] = VAR_20;
          VAR_15->arg0 += 1;
        }
        if (VAR_15->arg0 == VAR_15->arg1) {
          VAR_15->daddr[VAR_15->arg1] = '\0';
          VAR_15->state = 132;
        }
        break;

      case 132:
        VAR_15->dport = VAR_20 << 8;
        VAR_15->state = 131;
        break;

      case 131:
        VAR_15->dport |= VAR_20;
        VAR_15->state = 139;
        VAR_18 = VAR_13;
        goto out;

      case 139:
        break;

      default:
        FUNC_0();
    }
  }
  VAR_18 = VAR_14;

out:
  *VAR_16 = VAR_19 + VAR_21;
  *VAR_17 = VAR_22 - VAR_21;
  return VAR_18;
}
