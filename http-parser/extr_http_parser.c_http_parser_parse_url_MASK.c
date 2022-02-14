
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct http_parser_url {int port; int field_set; TYPE_1__* field_data; } ;
typedef enum state { ____Placeholder_state } state ;
typedef enum http_parser_url_fields { ____Placeholder_http_parser_url_fields } http_parser_url_fields ;
struct TYPE_2__ {int len; size_t off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,struct http_parser_url*,int) ;
 int FUNC_2 (int,char const) ;
 int VAR_7 ;

int
FUNC_3(const char *VAR_8, size_t VAR_9, int VAR_10,
                      struct http_parser_url *VAR_11)
{
  enum state VAR_12;
  const char *VAR_13;
  enum http_parser_url_fields VAR_14, VAR_15;
  int VAR_16 = 0;

  if (VAR_9 == 0) {
    return 1;
  }

  VAR_11->port = VAR_11->field_set = 0;
  VAR_12 = VAR_10 ? 129 : VAR_7;
  VAR_15 = VAR_2;

  for (VAR_13 = VAR_8; VAR_13 < VAR_8 + VAR_9; VAR_13++) {
    VAR_12 = FUNC_2(VAR_12, *VAR_13);


    switch (VAR_12) {
      case 139:
        return 1;


      case 132:
      case 131:
      case 129:
      case 134:
      case 137:
        continue;

      case 133:
        VAR_14 = VAR_6;
        break;

      case 128:
        VAR_16 = 1;


      case 130:
        VAR_14 = VAR_1;
        break;

      case 136:
        VAR_14 = VAR_3;
        break;

      case 135:
        VAR_14 = VAR_5;
        break;

      case 138:
        VAR_14 = VAR_0;
        break;

      default:
        FUNC_0(!"Unexpected state");
        return 1;
    }


    if (VAR_14 == VAR_15) {
      VAR_11->field_data[VAR_14].len++;
      continue;
    }

    VAR_11->field_data[VAR_14].off = (uint16_t)(VAR_13 - VAR_8);
    VAR_11->field_data[VAR_14].len = 1;

    VAR_11->field_set |= (1 << VAR_14);
    VAR_15 = VAR_14;
  }



  if ((VAR_11->field_set & (1 << VAR_6)) &&
      (VAR_11->field_set & (1 << VAR_1)) == 0) {
    return 1;
  }

  if (VAR_11->field_set & (1 << VAR_1)) {
    if (FUNC_1(VAR_8, VAR_11, VAR_16) != 0) {
      return 1;
    }
  }


  if (VAR_10 && VAR_11->field_set != ((1 << VAR_1)|(1 << VAR_4))) {
    return 1;
  }

  if (VAR_11->field_set & (1 << VAR_4)) {
    uint16_t VAR_17;
    uint16_t VAR_18;
    const char* VAR_19;
    const char* VAR_20;
    unsigned long VAR_21;

    VAR_17 = VAR_11->field_data[VAR_4].off;
    VAR_18 = VAR_11->field_data[VAR_4].len;
    VAR_20 = VAR_8 + VAR_17 + VAR_18;


    FUNC_0(VAR_17 + VAR_18 <= VAR_9 && "Port number overflow");
    VAR_21 = 0;
    for (VAR_19 = VAR_8 + VAR_17; VAR_19 < VAR_20; VAR_19++) {
      VAR_21 *= 10;
      VAR_21 += *VAR_19 - '0';


      if (VAR_21 > 0xffff) {
        return 1;
      }
    }

    VAR_11->port = (uint16_t) VAR_21;
  }

  return 0;
}
