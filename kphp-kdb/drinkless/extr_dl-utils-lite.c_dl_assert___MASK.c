
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;

void FUNC_3 (const char *VAR_1, const char *VAR_2, const char *VAR_3,
                  int VAR_4, const char *VAR_5, int VAR_6) {
  FUNC_1 (VAR_0, "dl_assert failed [%s : %s : %d]: ", VAR_2, VAR_3, VAR_4);
  FUNC_1 (VAR_0, "%s\n", VAR_5);
  if (VAR_6) {
    FUNC_2 ("perror description");
  }
  FUNC_0();
}
