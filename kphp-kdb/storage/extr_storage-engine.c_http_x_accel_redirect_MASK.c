
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (char*,int,char*,char const*,long long,char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct connection*,int,int ,int,char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3 (struct connection *VAR_2, const char *VAR_3, long long VAR_4, char VAR_5[12], int VAR_6) {
  static char VAR_7[256] = "X-Accel-Redirect: ";
  int VAR_8 = FUNC_0 (VAR_7 + 18, 238, "%s:%llx:%s:%x\r\n", VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_8 >= 238) {
    FUNC_1 (1, "location buffer overflow\n");
    return -500;
  }
  FUNC_2 (VAR_2, 307, 0, -1, VAR_7, VAR_0[VAR_6]);
  VAR_1++;
  return 0;
}
