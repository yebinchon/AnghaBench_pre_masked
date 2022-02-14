
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_cmdbuf {int * vaddr; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct etnaviv_cmdbuf *VAR_0,
 unsigned int VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 *VAR_4 = VAR_0->vaddr + VAR_1;

 VAR_4[1] = VAR_3;
 FUNC_0();
 VAR_4[0] = VAR_2;
 FUNC_0();
}
