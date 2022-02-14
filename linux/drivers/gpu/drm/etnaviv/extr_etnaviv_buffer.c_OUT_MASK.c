
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_cmdbuf {int user_size; int size; scalar_t__ vaddr; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct etnaviv_cmdbuf *VAR_0, u32 VAR_1)
{
 u32 *VAR_2 = (u32 *)VAR_0->vaddr;

 FUNC_0(VAR_0->user_size >= VAR_0->size);

 VAR_2[VAR_0->user_size / 4] = VAR_1;
 VAR_0->user_size += 4;
}
