
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct http_parser_url {int port; int field_set; TYPE_1__* field_data; } ;
typedef enum state { ____Placeholder_state } state ;
typedef enum http_parser_url_fields { ____Placeholder_http_parser_url_fields } http_parser_url_fields ;
struct TYPE_2__ {int len; int off; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,struct http_parser_url*,int) ;
 int FUNC_2 (int,char const) ;
 int VAR_8 ;
 unsigned long FUNC_3 (char const*,int *,int) ;

int
FUNC_4(const char *VAR_9, size_t VAR_10, int VAR_11,
                      struct http_parser_url *VAR_12)
{
  enum state VAR_13;
  const char *VAR_14;
  enum http_parser_url_fields VAR_15, VAR_16;
  int VAR_17 = 0;

  if (VAR_10 > VAR_7)
    return 1;

  VAR_12->port = VAR_12->field_set = 0;
  VAR_13 = VAR_11 ? 129 : VAR_8;
  VAR_15 = VAR_16 = VAR_2;

  for (VAR_14 = VAR_9; VAR_14 < VAR_9 + VAR_10; VAR_14++) {
    VAR_13 = FUNC_2(VAR_13, *VAR_14);


    switch (VAR_13) {
      case 139:
        return 1;


      case 132:
      case 131:
      case 129:
      case 134:
      case 137:
        continue;

      case 133:
        VAR_15 = VAR_6;
        break;

      case 128:
        VAR_17 = 1;


      case 130:
        VAR_15 = VAR_1;
        break;

      case 136:
        VAR_15 = VAR_3;
        break;

      case 135:
        VAR_15 = VAR_5;
        break;

      case 138:
        VAR_15 = VAR_0;
        break;

      default:
        FUNC_0(!"Unexpected state");
        return 1;
    }


    if (VAR_15 == VAR_16) {
      VAR_12->field_data[VAR_15].len++;
      continue;
    }

    VAR_12->field_data[VAR_15].off = (uint16_t)(VAR_14 - VAR_9);
    VAR_12->field_data[VAR_15].len = 1;

    VAR_12->field_set |= (1 << VAR_15);
    VAR_16 = VAR_15;
  }



  if ((VAR_12->field_set & ((1 << VAR_6) | (1 << VAR_1))) != 0) {
    if (FUNC_1(VAR_9, VAR_12, VAR_17) != 0) {
      return 1;
    }
  }


  if (VAR_11 && VAR_12->field_set != ((1 << VAR_1)|(1 << VAR_4))) {
    return 1;
  }

  if (VAR_12->field_set & (1 << VAR_4)) {

    unsigned long VAR_18 = FUNC_3(VAR_9 + VAR_12->field_data[VAR_4].off, ((void*)0), 10);


    if (VAR_18 > 0xffff) {
      return 1;
    }

    VAR_12->port = (uint16_t) VAR_18;
  }

  return 0;
}
