
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (char*,int ,int ) ;

void FUNC_5(void)
{
 FUNC_0(FUNC_4(
  "wildcard", FUNC_3(), VAR_0));

 VAR_1 = FUNC_2("empty_standard_repo");

 FUNC_1(
  "empty_standard_repo/.gitattributes",
  "* binary\n"
  "hero-flip-* filter=wcflip\n"
  "hero-reverse-* filter=wcreverse\n"
  "none-* filter=unregistered\n");
}
