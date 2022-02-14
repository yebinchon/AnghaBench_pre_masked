
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mod_regs {char* member_0; int member_1; } ;


 int FUNC_0 (int,char const**,int const*,struct mod_regs*,int ) ;
 int FUNC_1 (struct mod_regs*) ;






__attribute__((used)) static int
FUNC_2(int VAR_0, const char *VAR_1[], const uint32_t *VAR_2)
{
 static struct mod_regs VAR_3[] = {
  { "sge", 128 },
  { "mps", 130 },
  { "pl", 129 },
  { "mbdata", 131 },
  { "cim", 132 },
 };

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, FUNC_1(VAR_3));
}
