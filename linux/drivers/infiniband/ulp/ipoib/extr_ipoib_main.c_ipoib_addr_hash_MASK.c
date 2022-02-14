
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ipoib_neigh_hash {int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int ) ;

__attribute__((used)) static u32 FUNC_1(struct ipoib_neigh_hash *VAR_1, u8 *VAR_2)
{







 u32 *VAR_3 = (u32 *) VAR_2;
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3[3], VAR_3[4], VAR_0 & VAR_3[0], 0);
 return VAR_4 & VAR_1->mask;
}
