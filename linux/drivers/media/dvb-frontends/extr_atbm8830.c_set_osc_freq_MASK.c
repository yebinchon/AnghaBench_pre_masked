
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct atbm_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct atbm_state*,scalar_t__,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct atbm_state *VAR_1, u32 VAR_2 )
{
 u32 VAR_3;
 u64 VAR_4;


 VAR_4 = (u64)0x100000 * VAR_2;
 FUNC_1(VAR_4, 30400);
 VAR_3 = VAR_4;

 FUNC_0(VAR_1, VAR_0, VAR_3);
 FUNC_0(VAR_1, VAR_0 + 1, VAR_3 >> 8);
 FUNC_0(VAR_1, VAR_0 + 2, VAR_3 >> 16);

 return 0;
}
