
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char const*,int*,int*) ;
 int FUNC_3 (int ,char*,int,char const*) ;

int
FUNC_4(const char *VAR_1, int *VAR_2, int *VAR_3)
{
  int VAR_4;

  FUNC_0();
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  FUNC_3(VAR_0, "%d = NgMkSockNode(\"%s\", &cs, &ds)\n",
             VAR_4, VAR_1 ? VAR_1 : "");
  FUNC_1();
  return VAR_4;
}
