
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct connection*,char const*) ;
 int VAR_0 ;

int FUNC_2 (struct connection *VAR_1, const char *VAR_2) {
  if (VAR_2 == ((void*)0)) {
    FUNC_0 (VAR_0, "buffer overflow\n");
    return -500;
  }

  FUNC_1 (VAR_1, VAR_2);

  return 0;
}
