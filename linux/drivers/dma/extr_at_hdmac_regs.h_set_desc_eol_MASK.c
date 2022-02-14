
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrlb; scalar_t__ dscr; } ;
struct at_desc {TYPE_1__ lli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct at_desc *VAR_3)
{
 u32 VAR_4 = VAR_3->lli.ctrlb;

 VAR_4 &= ~VAR_1;
 VAR_4 |= VAR_2 | VAR_0;

 VAR_3->lli.ctrlb = VAR_4;
 VAR_3->lli.dscr = 0;
}
