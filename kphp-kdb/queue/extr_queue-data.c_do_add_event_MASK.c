
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ,char*,char*,int,char*,int,int,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3 (char *VAR_3, int VAR_4, char *VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9) {
  if (VAR_2 > 2) {
    FUNC_1 (VAR_1, "Queue name [%s], data %d:[%s] { & %d = %d} ttl = %d\n", VAR_3, VAR_6, VAR_5, VAR_7, VAR_8, VAR_9);
  }


  if (VAR_4 <= 0 || VAR_6 <= 0 || VAR_4 > VAR_0 || VAR_6 > 32768) {
    return 0;
  }

  return FUNC_0 (FUNC_2 (VAR_3, 0), VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
