
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rxe_bth {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(void *VAR_1)
{
 struct rxe_bth *VAR_2 = VAR_1;

 return (VAR_0 & VAR_2->flags) >> 4;
}
