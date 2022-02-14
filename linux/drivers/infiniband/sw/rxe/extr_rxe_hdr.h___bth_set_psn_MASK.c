
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxe_bth {int apsn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(void *VAR_1, u32 VAR_2)
{
 struct rxe_bth *VAR_3 = VAR_1;
 u32 VAR_4 = FUNC_0(VAR_3->apsn);

 VAR_3->apsn = FUNC_1((VAR_0 & VAR_2) |
   (~VAR_0 & VAR_4));
}
