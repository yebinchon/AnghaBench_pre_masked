
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct pasid_state {int lock; TYPE_1__* pri; } ;
struct TYPE_2__ {int status; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct pasid_state *VAR_0,
          u16 VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);
 VAR_0->pri[VAR_1].status = VAR_2;
 FUNC_1(&VAR_0->lock, VAR_3);
}
