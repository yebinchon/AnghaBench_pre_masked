
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ch_reg {int val; int addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_reg*) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static uint32_t
FUNC_2(const char *VAR_1, uint32_t VAR_2)
{
 struct ch_reg VAR_3;

 VAR_3.addr = VAR_2;

 if (FUNC_0(VAR_1, VAR_0, &VAR_3) < 0)
  FUNC_1(1, "register read");
 return VAR_3.val;
}
