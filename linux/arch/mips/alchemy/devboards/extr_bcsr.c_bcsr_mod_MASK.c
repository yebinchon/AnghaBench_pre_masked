
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum bcsr_id { ____Placeholder_bcsr_id } bcsr_id ;
struct TYPE_2__ {int lock; int raddr; } ;


 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 () ;

void FUNC_5(enum bcsr_id VAR_1, unsigned short VAR_2, unsigned short VAR_3)
{
 unsigned short VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_0[VAR_1].lock, VAR_5);
 VAR_4 = FUNC_0(VAR_0[VAR_1].raddr);
 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;
 FUNC_1(VAR_4, VAR_0[VAR_1].raddr);
 FUNC_4();
 FUNC_3(&VAR_0[VAR_1].lock, VAR_5);
}
