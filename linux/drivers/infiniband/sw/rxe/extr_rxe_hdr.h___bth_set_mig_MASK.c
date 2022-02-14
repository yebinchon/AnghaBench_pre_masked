
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rxe_bth {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(void *VAR_1, u8 VAR_2)
{
 struct rxe_bth *VAR_3 = VAR_1;

 if (VAR_2)
  VAR_3->flags |= VAR_0;
 else
  VAR_3->flags &= ~VAR_0;
}
