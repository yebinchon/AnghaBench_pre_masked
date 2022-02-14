
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpuinfo_x86*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct cpuinfo_x86 *VAR_2)
{
 if (FUNC_0(VAR_2, VAR_0))
  VAR_1 = ((FUNC_1(0x8000001e) >> 8) & 0xff) + 1;
}
