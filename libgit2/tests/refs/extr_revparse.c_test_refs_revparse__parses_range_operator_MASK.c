
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,char*,int) ;
 int FUNC_1 (char*) ;

void FUNC_2(void)
{
 FUNC_0("HEAD", "a65fedf39aefe402d3bb6e24df4d4f5fe4547750", ((void*)0), VAR_2);
 FUNC_0("HEAD~3..HEAD",
  "4a202b346bb0fb0db7eff3cffeb3c70babbd2045",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  VAR_1);

 FUNC_0("HEAD~3...HEAD",
  "4a202b346bb0fb0db7eff3cffeb3c70babbd2045",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  VAR_1 | VAR_0);

 FUNC_0("HEAD~3..",
  "4a202b346bb0fb0db7eff3cffeb3c70babbd2045",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  VAR_1);

 FUNC_0("HEAD~3...",
  "4a202b346bb0fb0db7eff3cffeb3c70babbd2045",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  VAR_1 | VAR_0);

 FUNC_0("..HEAD~3",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "4a202b346bb0fb0db7eff3cffeb3c70babbd2045",
  VAR_1);

 FUNC_0("...HEAD~3",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "4a202b346bb0fb0db7eff3cffeb3c70babbd2045",
  VAR_1 | VAR_0);

 FUNC_0("...",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  VAR_1 | VAR_0);

 FUNC_1("..");
}
