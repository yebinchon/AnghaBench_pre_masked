
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (int *,char*,int) ;

int FUNC_5 (struct connection *VAR_0, const char *VAR_1, int VAR_2) {
  const int VAR_3 = FUNC_1 (VAR_1, VAR_2);
  VAR_1 += VAR_3;
  VAR_2 -= VAR_3;
  int VAR_4;
  if (FUNC_3 (VAR_1, "counter%d", &VAR_4) >= 1) {
    FUNC_0 (VAR_4, 0);
    FUNC_4 (&VAR_0->Out, "DELETED\r\n", 9);
    return 0;
  }
  return FUNC_2 (VAR_0);
}
