
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(int VAR_0)
{
 switch (VAR_0) {
 case 256: return 1;
 case 512: return 2;
 case 1024: return 3;
 case 2048: return 4;
 case 4096: return 5;
 default:
  FUNC_0("invalid mtu\n");
  return -1;
 }
}
