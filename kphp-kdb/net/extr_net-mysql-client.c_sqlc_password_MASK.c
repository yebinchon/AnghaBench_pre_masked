
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (unsigned char*,int,unsigned char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char const*,char*) ;

int FUNC_3 (struct connection *VAR_0, const char *VAR_1, char VAR_2[20]) {
  FUNC_1 (VAR_2, 0, 20);

  if (!FUNC_2 (VAR_1, "kitten")) {
    unsigned char VAR_3[20];
    FUNC_0 ((unsigned char *)"test", 4, VAR_3);
    FUNC_0 (VAR_3, 20, (unsigned char *)VAR_2);
    return 2;
  }

  return 1;
}
