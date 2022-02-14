
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int*,int*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2 (char *VAR_4) {
  int VAR_5, VAR_6;
  if (FUNC_1 (VAR_4, "%d-%d", &VAR_5, &VAR_6) != 2) {
    return -1;
  }
  if (VAR_5 > VAR_6) {
    return -1;
  }
  if (VAR_5 <= VAR_0) {
    FUNC_0 (VAR_3, "min port number should be greater than PRIVILEGED_TCP_PORTS(%d)\n", VAR_0);
    return -1;
  }
  if (VAR_6 >= 65536) {
    FUNC_0 (VAR_3, "max port number should be less than 65536\n");
    return -1;
  }
  VAR_2 = VAR_5;
  VAR_1 = VAR_6;
  return 0;
}
