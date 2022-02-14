
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(int VAR_0)
{
 switch (VAR_0 & 0x0f) {
 case 0: FUNC_0(", disabled/not present\n"); break;
 case 1: FUNC_0(", direct mapped\n"); break;
 case 2: FUNC_0(", 2-way associative\n"); break;
 case 4: FUNC_0(", 4-way associative\n"); break;
 case 6: FUNC_0(", 8-way associative\n"); break;
 case 8: FUNC_0(", 16-way associative\n"); break;
 case 15: FUNC_0(", fully associative\n"); break;
 default: FUNC_0(", reserved configuration\n"); break;
 }
}
