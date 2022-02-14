
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resolver_conf {int dummy; } ;


 int FUNC_0 (struct resolver_conf*,char*,int,unsigned int) ;
 char* FUNC_1 (char**,int*) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5 (struct resolver_conf *VAR_0, char *VAR_1, int VAR_2) {
  char *VAR_3;
  int VAR_4 = 0;

  for (VAR_3 = VAR_1; *VAR_3; VAR_3 = FUNC_4 (VAR_3)) {
    VAR_3 = FUNC_3 (VAR_3);
    int VAR_5;
    unsigned VAR_6 = 0;

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
      int VAR_7 = FUNC_2 (&VAR_3);
      if (VAR_7 < 0) {
        break;
      }
      VAR_6 = (VAR_6 << 8) | VAR_7;
      if (VAR_5 < 3 && *VAR_3++ != '.') {
        break;
      }
    }



    if (VAR_5 < 4 || (*VAR_3 != ' ' && *VAR_3 != '\t') || !VAR_6) {
      continue;
    }

    char *VAR_8;
    int VAR_9;

    do {
      VAR_8 = FUNC_1 (&VAR_3, &VAR_9);
      if (VAR_8 && VAR_9 < 128) {

        if (VAR_2) {
          FUNC_0 (VAR_0, VAR_8, VAR_9, VAR_6);
        }
        ++VAR_4;
      }
    } while (VAR_8);
  }
  return VAR_4;
}
