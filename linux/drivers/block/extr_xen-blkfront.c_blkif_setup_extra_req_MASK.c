
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int nr_segments; int handle; scalar_t__ sector_number; } ;
struct TYPE_4__ {TYPE_1__ rw; } ;
struct blkif_request {int operation; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct blkif_request *VAR_2,
      struct blkif_request *VAR_3)
{
 uint16_t VAR_4 = VAR_2->u.rw.nr_segments;





 VAR_2->u.rw.nr_segments = VAR_0;

 VAR_3->u.rw.nr_segments = VAR_4 - VAR_0;
 VAR_3->u.rw.sector_number = VAR_2->u.rw.sector_number +
  (VAR_0 * VAR_1) / 512;

 VAR_3->u.rw.handle = VAR_2->u.rw.handle;
 VAR_3->operation = VAR_2->operation;
}
