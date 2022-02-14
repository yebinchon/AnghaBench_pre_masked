
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_ring {int wptr_offs; int wptr; int doorbell_index; } ;
struct TYPE_2__ {int * wb; } ;
struct radeon_device {TYPE_1__ wb; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct radeon_device *VAR_0,
     struct radeon_ring *VAR_1)
{

 VAR_0->wb.wb[VAR_1->wptr_offs/4] = VAR_1->wptr;
 FUNC_0(VAR_1->doorbell_index, VAR_1->wptr);
}
