
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int rs; int rw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(u8 VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_1();
 VAR_4 &= ~VAR_1->rw;
 if (VAR_3 == VAR_0)
  VAR_4 |= VAR_1->rs;
 else
  VAR_4 &= ~VAR_1->rs;
 FUNC_2(VAR_4);
 FUNC_0(40);
 FUNC_4(VAR_4, VAR_2);
 if (VAR_3 == VAR_0)
  VAR_4 &= ~VAR_1->rs;
 else
  VAR_4 |= VAR_1->rs;
 FUNC_2(VAR_4);
 FUNC_3();
}
