
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
{
 FUNC_1(
  "[general]\n"
  "foo=bar\n"
  "\n"
  "[other]\n"
  "key=value\n");
 FUNC_0(VAR_0, "general.foo", "bar");
 FUNC_0(VAR_0, "other.key", "value");
}
