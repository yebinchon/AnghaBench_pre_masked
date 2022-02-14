
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rxe_aeth {int smsn; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(void *VAR_1, u8 VAR_2)
{
 struct rxe_aeth *VAR_3 = VAR_1;
 u32 VAR_4 = FUNC_0(VAR_3->smsn);

 VAR_3->smsn = FUNC_1((VAR_0 & (VAR_2 << 24)) |
    (~VAR_0 & VAR_4));
}
