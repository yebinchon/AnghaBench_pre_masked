
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct sdma_engine {TYPE_1__* dd; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct sdma_engine*,unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct sdma_engine *VAR_4, unsigned VAR_5)
{
 u64 VAR_6;

 if (!(VAR_4->dd->flags & VAR_3))
  return;
 VAR_6 = VAR_5;
 VAR_6 &= FUNC_0(VAR_1);
 VAR_6 <<= FUNC_0(VAR_2);
 FUNC_1(VAR_4, FUNC_0(VAR_0), VAR_6);
}
