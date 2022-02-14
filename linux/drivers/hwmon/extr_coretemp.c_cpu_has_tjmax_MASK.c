
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cpuinfo_x86 {int x86_model; } ;



__attribute__((used)) static bool FUNC_0(struct cpuinfo_x86 *VAR_0)
{
 u8 VAR_1 = VAR_0->x86_model;

 return VAR_1 > 0xe &&
        VAR_1 != 0x1c &&
        VAR_1 != 0x26 &&
        VAR_1 != 0x27 &&
        VAR_1 != 0x35 &&
        VAR_1 != 0x36;
}
