
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wt ;
typedef int w ;
typedef int u8 ;
typedef int u32 ;
struct sm3_state {int state; } ;


 int FUNC_0 (unsigned int*,int) ;
 int FUNC_1 (unsigned int*,unsigned int*,int ) ;
 int FUNC_2 (int *,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct sm3_state *VAR_0, u8 const *VAR_1)
{
 unsigned int VAR_2[68];
 unsigned int VAR_3[64];

 FUNC_2((u32 *)VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_3, VAR_0->state);

 FUNC_0(VAR_2, sizeof(VAR_2));
 FUNC_0(VAR_3, sizeof(VAR_3));
}
