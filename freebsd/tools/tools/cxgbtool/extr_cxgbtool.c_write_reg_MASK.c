
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct ch_reg {void* val; void* addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_reg*) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct ch_reg VAR_4;

 VAR_4.addr = VAR_2;
 VAR_4.val = VAR_3;

 if (FUNC_0(VAR_1, VAR_0, &VAR_4) < 0)
  FUNC_1(1, "register write");
}
