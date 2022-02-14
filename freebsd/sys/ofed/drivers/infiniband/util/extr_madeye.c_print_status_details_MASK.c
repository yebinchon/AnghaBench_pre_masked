
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(u16 VAR_0)
{
 if (VAR_0 & 0x0001)
  FUNC_0("               busy\n");
 if (VAR_0 & 0x0002)
  FUNC_0("               redirection required\n");
 switch((VAR_0 & 0x001C) >> 2) {
 case 1:
  FUNC_0("               bad version\n");
  break;
 case 2:
  FUNC_0("               method not supported\n");
  break;
 case 3:
  FUNC_0("               method/attribute combo not supported\n");
  break;
 case 7:
  FUNC_0("               invalid attribute/modifier value\n");
  break;
 }
}
