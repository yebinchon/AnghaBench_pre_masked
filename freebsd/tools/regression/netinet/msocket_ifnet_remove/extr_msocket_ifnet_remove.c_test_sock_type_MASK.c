
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int*,int,char const*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int
FUNC_6(int VAR_4, const char *VAR_5)
{
 int VAR_6;

 if (FUNC_1() < 0)
  return (-1);

 if (FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3) < 0) {
  FUNC_0();
  return (-1);
 }

 if (FUNC_4(&VAR_6, VAR_4, VAR_5) < 0) {
  FUNC_0();
  return (-1);
 }





 FUNC_0();
 FUNC_3(VAR_6);

 FUNC_5("test_sock_type(%s) passed\n", VAR_5);

 return (0);
}
