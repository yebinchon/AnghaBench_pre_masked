
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; } ;
union entry_union {int w2; int w1; TYPE_1__ entry; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 union entry_union VAR_5 = { .entry.mask = VAR_0 };

 FUNC_1(&VAR_1, VAR_4);
 FUNC_0(VAR_2, 0x10 + 2*VAR_3, VAR_5.w1);
 FUNC_0(VAR_2, 0x11 + 2*VAR_3, VAR_5.w2);
 FUNC_2(&VAR_1, VAR_4);
}
