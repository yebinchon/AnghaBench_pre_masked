
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct icst_vco {int r; size_t s; scalar_t__ v; } ;
struct icst_params {int ref; int* s2div; } ;


 int FUNC_0 (int,int) ;

unsigned long FUNC_1(const struct icst_params *VAR_0, struct icst_vco VAR_1)
{
 u64 VAR_2 = VAR_0->ref * 2 * (u64)(VAR_1.v + 8);
 u32 VAR_3 = (VAR_1.r + 2) * VAR_0->s2div[VAR_1.s];

 FUNC_0(VAR_2, VAR_3);
 return (unsigned long)VAR_2;
}
