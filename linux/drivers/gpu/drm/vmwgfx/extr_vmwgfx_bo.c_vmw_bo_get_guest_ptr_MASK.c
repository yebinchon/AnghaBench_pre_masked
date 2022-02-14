
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mem_type; int start; } ;
struct ttm_buffer_object {TYPE_1__ mem; scalar_t__ offset; } ;
struct TYPE_5__ {scalar_t__ offset; int gmrId; } ;
typedef TYPE_2__ SVGAGuestPtr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(const struct ttm_buffer_object *VAR_2,
     SVGAGuestPtr *VAR_3)
{
 if (VAR_2->mem.mem_type == VAR_1) {
  VAR_3->gmrId = VAR_0;
  VAR_3->offset = VAR_2->offset;
 } else {
  VAR_3->gmrId = VAR_2->mem.start;
  VAR_3->offset = 0;
 }
}
