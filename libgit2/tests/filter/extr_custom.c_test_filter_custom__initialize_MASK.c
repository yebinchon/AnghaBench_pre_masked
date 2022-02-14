
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 FUNC_2();

 VAR_0 = FUNC_1("empty_standard_repo");

 FUNC_0(
  "empty_standard_repo/.gitattributes",
  "hero* bitflip reverse\n"
  "herofile text\n"
  "heroflip -reverse binary\n"
  "villain erroneous\n"
  "*.bin binary\n");
}
