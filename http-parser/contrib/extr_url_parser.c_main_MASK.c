
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct http_parser_url {int dummy; } ;


 int FUNC_0 (char*,struct http_parser_url*) ;
 int FUNC_1 (char*,int,int,struct http_parser_url*) ;
 int FUNC_2 (struct http_parser_url*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

int FUNC_6(int VAR_0, char ** VAR_1) {
  struct http_parser_url VAR_2;
  int VAR_3, VAR_4, VAR_5;

  if (VAR_0 != 3) {
    FUNC_3("Syntax : %s connect|get url\n", VAR_1[0]);
    return 1;
  }
  VAR_3 = FUNC_5(VAR_1[2]);
  VAR_4 = FUNC_4("connect", VAR_1[1]) == 0 ? 1 : 0;
  FUNC_3("Parsing %s, connect %d\n", VAR_1[2], VAR_4);

  FUNC_2(&VAR_2);
  VAR_5 = FUNC_1(VAR_1[2], VAR_3, VAR_4, &VAR_2);
  if (VAR_5 != 0) {
    FUNC_3("Parse error : %d\n", VAR_5);
    return VAR_5;
  }
  FUNC_3("Parse ok, result : \n");
  FUNC_0(VAR_1[2], &VAR_2);
  return 0;
}
