
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int settings ;
struct TYPE_4__ {int on_message_complete; int on_body; int on_headers_complete; int on_header_value; int on_header_field; int on_url; int on_message_begin; } ;
typedef TYPE_1__ http_parser_settings ;
typedef int http_parser ;
typedef enum http_parser_type { ____Placeholder_http_parser_type } http_parser_type ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 size_t FUNC_4 (char*,int,long,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ) ;
 long FUNC_7 (int *) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (int ) ;
 size_t FUNC_10 (int *,TYPE_1__*,char*,long) ;
 int FUNC_11 (int *,int) ;
 char* FUNC_12 (long) ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (char*) ;
 int VAR_14 ;
 int FUNC_15 (char*) ;

int FUNC_16(int VAR_15, char* VAR_16[]) {
  enum http_parser_type VAR_17;

  if (VAR_15 != 3) {
    FUNC_15(VAR_16[0]);
  }

  char* VAR_18 = VAR_16[1];
  if (VAR_18[0] != '-') {
    FUNC_15(VAR_16[0]);
  }

  switch (VAR_18[1]) {

    case 'r':
      VAR_17 = VAR_4;
      break;
    case 'q':
      VAR_17 = VAR_3;
      break;
    case 'b':
      VAR_17 = VAR_2;
      break;
    default:
      FUNC_15(VAR_16[0]);
  }

  char* VAR_19 = VAR_16[2];
  FILE* VAR_20 = FUNC_2(VAR_19, "r");
  if (VAR_20 == ((void*)0)) {
    FUNC_14("fopen");
    goto fail;
  }

  FUNC_6(VAR_20, 0, VAR_5);
  long VAR_21 = FUNC_7(VAR_20);
  if (VAR_21 == -1) {
    FUNC_14("ftell");
    goto fail;
  }
  FUNC_6(VAR_20, 0, VAR_6);

  char* VAR_22 = FUNC_12(VAR_21);
  if (FUNC_4(VAR_22, 1, VAR_21, VAR_20) != (size_t)VAR_21) {
    FUNC_3(VAR_14, "couldn't read entire file\n");
    FUNC_5(VAR_22);
    goto fail;
  }

  http_parser_settings VAR_23;
  FUNC_13(&VAR_23, 0, sizeof(VAR_23));
  VAR_23.on_message_begin = VAR_11;
  VAR_23.on_url = VAR_13;
  VAR_23.on_header_field = VAR_8;
  VAR_23.on_header_value = VAR_9;
  VAR_23.on_headers_complete = VAR_10;
  VAR_23.on_body = VAR_7;
  VAR_23.on_message_complete = VAR_12;

  http_parser VAR_24;
  FUNC_11(&VAR_24, VAR_17);
  size_t VAR_25 = FUNC_10(&VAR_24, &VAR_23, VAR_22, VAR_21);
  FUNC_5(VAR_22);

  if (VAR_25 != (size_t)VAR_21) {
    FUNC_3(VAR_14,
            "Error: %s (%s)\n",
            FUNC_8(FUNC_0(&VAR_24)),
            FUNC_9(FUNC_0(&VAR_24)));
    goto fail;
  }

  return VAR_1;

fail:
  FUNC_1(VAR_20);
  return VAR_0;
}
