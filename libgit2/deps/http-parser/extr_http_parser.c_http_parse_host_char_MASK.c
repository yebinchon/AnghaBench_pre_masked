
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum http_host_state { ____Placeholder_http_host_state } http_host_state ;


 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;

 int VAR_0 ;
__attribute__((used)) static enum http_host_state
FUNC_4(enum http_host_state VAR_1, const char VAR_2) {
  switch(VAR_1) {
    case 129:
    case 128:
      if (VAR_2 == '@') {
        return 133;
      }

      if (FUNC_3(VAR_2)) {
        return 129;
      }
      break;

    case 133:
      if (VAR_2 == '[') {
        return 130;
      }

      if (FUNC_1(VAR_2)) {
        return 136;
      }

      break;

    case 136:
      if (FUNC_1(VAR_2)) {
        return 136;
      }


    case 131:
      if (VAR_2 == ':') {
        return 134;
      }

      break;

    case 132:
      if (VAR_2 == ']') {
        return 131;
      }


    case 130:
      if (FUNC_0(VAR_2) || VAR_2 == ':') {
        return 132;
      }

      break;

    case 135:
    case 134:
      if (FUNC_2(VAR_2)) {
        return 135;
      }

      break;

    default:
      break;
  }
  return VAR_0;
}
