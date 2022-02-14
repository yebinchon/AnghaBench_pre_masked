
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct http_parser_url {int field_set; TYPE_1__* field_data; } ;
typedef enum http_host_state { ____Placeholder_http_host_state } http_host_state ;
struct TYPE_2__ {size_t off; size_t len; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int,char const) ;

 int VAR_4 ;







__attribute__((used)) static int
FUNC_1(const char * VAR_5, struct http_parser_url *VAR_6, int VAR_7) {
  enum http_host_state VAR_8;

  const char *VAR_9;
  size_t VAR_10 = VAR_6->field_data[VAR_0].off + VAR_6->field_data[VAR_0].len;

  if (VAR_10 > VAR_3)
    return 1;

  VAR_6->field_data[VAR_0].len = 0;

  VAR_8 = VAR_7 ? 128 : 132;

  for (VAR_9 = VAR_5 + VAR_6->field_data[VAR_0].off; VAR_9 < VAR_5 + VAR_10; VAR_9++) {
    enum http_host_state VAR_11 = FUNC_0(VAR_8, *VAR_9);

    if (VAR_11 == VAR_4) {
      return 1;
    }

    switch(VAR_11) {
      case 134:
        if (VAR_8 != 134) {
          VAR_6->field_data[VAR_0].off = (uint16_t)(VAR_9 - VAR_5);
        }
        VAR_6->field_data[VAR_0].len++;
        break;

      case 131:
        if (VAR_8 != 131) {
          VAR_6->field_data[VAR_0].off = (uint16_t)(VAR_9 - VAR_5);
        }
        VAR_6->field_data[VAR_0].len++;
        break;

      case 133:
        if (VAR_8 != 133) {
          VAR_6->field_data[VAR_1].off = (uint16_t)(VAR_9 - VAR_5);
          VAR_6->field_data[VAR_1].len = 0;
          VAR_6->field_set |= (1 << VAR_1);
        }
        VAR_6->field_data[VAR_1].len++;
        break;

      case 129:
        if (VAR_8 != 129) {
          VAR_6->field_data[VAR_2].off = (uint16_t)(VAR_9 - VAR_5);
          VAR_6->field_data[VAR_2].len = 0;
          VAR_6->field_set |= (1 << VAR_2);
        }
        VAR_6->field_data[VAR_2].len++;
        break;

      default:
        break;
    }
    VAR_8 = VAR_11;
  }


  switch (VAR_8) {
    case 132:
    case 130:
    case 131:
    case 129:
    case 128:
      return 1;
    default:
      break;
  }

  return 0;
}
