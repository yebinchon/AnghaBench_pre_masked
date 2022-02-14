
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct t4_reg {long long val; void* size; void* addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct t4_reg*) ;

__attribute__((used)) static int
FUNC_1(long VAR_1, int VAR_2, long long *VAR_3)
{
 struct t4_reg VAR_4;
 int VAR_5;

 VAR_4.addr = (uint32_t) VAR_1;
 VAR_4.size = (uint32_t) VAR_2;
 VAR_4.val = 0;

 VAR_5 = FUNC_0(VAR_0, &VAR_4);

 *VAR_3 = VAR_4.val;

 return (VAR_5);
}
