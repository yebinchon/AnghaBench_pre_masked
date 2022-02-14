
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int kernel_rule_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
int FUNC_5 (char *VAR_2, kernel_rule_t *VAR_3)
{
  u32 VAR_4;
  u32 VAR_5;
  u32 VAR_6 = VAR_0 - 1;

  for (VAR_4 = 0, VAR_5 = 0; VAR_5 < VAR_6 && VAR_4 < VAR_1; VAR_5++, VAR_4++)
  {
    char VAR_7;

    FUNC_0 (VAR_3);

    if (VAR_4 > 0) VAR_2[VAR_5++] = ' ';

    switch (VAR_7)
    {
      case 150:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 152:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 129:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 151:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 128:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 131:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 132:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 141:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 156:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 155:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 145:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 140:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 139:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 169:
        VAR_2[VAR_5] = VAR_7;
        FUNC_1 (VAR_3);
        break;

      case 147:
        VAR_2[VAR_5] = VAR_7;
        FUNC_1 (VAR_3);
        break;

      case 163:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 162:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 164:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 154:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        FUNC_4 (VAR_3);
        break;

      case 149:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        FUNC_4 (VAR_3);
        break;

      case 153:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        FUNC_3 (VAR_3);
        break;

      case 148:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        FUNC_3 (VAR_3);
        break;

      case 130:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 144:
        VAR_2[VAR_5] = VAR_7;
        FUNC_1 (VAR_3);
        FUNC_3 (VAR_3);
        break;

      case 146:
        VAR_2[VAR_5] = VAR_7;
        FUNC_1 (VAR_3);
        break;

      case 133:
        return -1;

      case 158:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 157:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 159:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 137:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 136:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 138:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        FUNC_4 (VAR_3);
        break;

      case 166:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 165:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 167:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 168:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 142:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 143:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 161:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 160:
        VAR_2[VAR_5] = VAR_7;
        FUNC_2 (VAR_3);
        break;

      case 135:
        VAR_2[VAR_5] = VAR_7;
        break;

      case 134:
        VAR_2[VAR_5] = VAR_7;
        FUNC_1 (VAR_3);
        break;

      case 0:
        if (VAR_5 == 0) return -1;
        return VAR_5 - 1;

      default:
        return -1;
    }
  }

  return VAR_5;
}
