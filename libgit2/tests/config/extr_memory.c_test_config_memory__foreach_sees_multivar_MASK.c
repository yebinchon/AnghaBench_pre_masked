
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expected_entry {char* member_0; char* member_1; int member_2; } ;


 int FUNC_0 (int ,struct expected_entry*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
{
 struct expected_entry VAR_1[] = {
  { "general.foo", "bar1", 0 },
  { "general.foo", "bar2", 0 },
  { ((void*)0), ((void*)0), 0 },
 };

 FUNC_1(
  "[general]\n"
  "foo=bar1\n"
  "foo=bar2\n");
 FUNC_0(VAR_0, VAR_1);
}
