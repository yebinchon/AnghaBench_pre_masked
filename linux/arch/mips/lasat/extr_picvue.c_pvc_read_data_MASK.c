
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int rs; int rw; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u8 FUNC_4(void)
{
 u32 VAR_1 = FUNC_2();
 u8 VAR_2;
 VAR_1 |= VAR_0->rw;
 VAR_1 &= ~VAR_0->rs;
 FUNC_3(VAR_1);
 FUNC_0(40);
 VAR_2 = FUNC_1(VAR_1);
 VAR_1 |= VAR_0->rs;
 FUNC_3(VAR_1);
 return VAR_2;
}
