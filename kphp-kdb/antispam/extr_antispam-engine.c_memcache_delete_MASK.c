
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const*,char*,int*,int*) ;
 int FUNC_3 (char const*,char*,int const) ;
 int FUNC_4 (int *,char*,int) ;

int FUNC_5 (struct connection *VAR_2, const char *VAR_3, int VAR_4) {
  VAR_0;


  const int VAR_5 = 7;
  if (VAR_4 >= VAR_5 && !FUNC_3 (VAR_3, "pattern", VAR_5)) {
    int VAR_6 = 0, VAR_7 = 0;
    if (FUNC_2 (VAR_3 + VAR_5, "%d%n", &VAR_6, &VAR_7) >= 1 && !VAR_3[VAR_5 + VAR_7]) {
      if (FUNC_1 (VAR_6)) {
        FUNC_4 (&VAR_2->Out, "DELETED\r\n", 9);
        FUNC_0 (VAR_1, 0);
      }
    }
  }
  FUNC_4 (&VAR_2->Out, "NOT_FOUND\r\n", 11);
  FUNC_0 (VAR_1, 0);
}
