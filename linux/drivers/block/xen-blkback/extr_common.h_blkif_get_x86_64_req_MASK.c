
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {int id; } ;
struct TYPE_17__ {int * indirect_grefs; int sector_number; int id; int handle; int nr_segments; int indirect_op; } ;
struct TYPE_15__ {int nr_sectors; int sector_number; int id; int flag; } ;
struct TYPE_13__ {int nr_segments; int * seg; int sector_number; int id; int handle; } ;
struct TYPE_11__ {TYPE_9__ other; TYPE_6__ indirect; TYPE_4__ discard; TYPE_2__ rw; } ;
struct blkif_x86_64_request {TYPE_10__ u; int operation; } ;
struct TYPE_18__ {int id; } ;
struct TYPE_16__ {int * indirect_grefs; int nr_segments; int sector_number; int id; int handle; int indirect_op; } ;
struct TYPE_14__ {int nr_sectors; int sector_number; int id; int flag; } ;
struct TYPE_12__ {int nr_segments; int * seg; int sector_number; int id; int handle; } ;
struct TYPE_19__ {TYPE_7__ other; TYPE_5__ indirect; TYPE_3__ discard; TYPE_1__ rw; } ;
struct blkif_request {int operation; TYPE_8__ u; } ;


 int VAR_0 ;






 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct blkif_request *VAR_2,
     struct blkif_x86_64_request *VAR_3)
{
 int VAR_4, VAR_5 = VAR_0, VAR_6;
 VAR_2->operation = FUNC_1(VAR_3->operation);
 switch (VAR_2->operation) {
 case 130:
 case 129:
 case 128:
 case 132:
  VAR_2->u.rw.nr_segments = VAR_3->u.rw.nr_segments;
  VAR_2->u.rw.handle = VAR_3->u.rw.handle;
  VAR_2->u.rw.id = VAR_3->u.rw.id;
  VAR_2->u.rw.sector_number = VAR_3->u.rw.sector_number;
  FUNC_2();
  if (VAR_5 > VAR_2->u.rw.nr_segments)
   VAR_5 = VAR_2->u.rw.nr_segments;
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
   VAR_2->u.rw.seg[VAR_4] = VAR_3->u.rw.seg[VAR_4];
  break;
 case 133:
  VAR_2->u.discard.flag = VAR_3->u.discard.flag;
  VAR_2->u.discard.id = VAR_3->u.discard.id;
  VAR_2->u.discard.sector_number = VAR_3->u.discard.sector_number;
  VAR_2->u.discard.nr_sectors = VAR_3->u.discard.nr_sectors;
  break;
 case 131:
  VAR_2->u.indirect.indirect_op = VAR_3->u.indirect.indirect_op;
  VAR_2->u.indirect.nr_segments = VAR_3->u.indirect.nr_segments;
  VAR_2->u.indirect.handle = VAR_3->u.indirect.handle;
  VAR_2->u.indirect.id = VAR_3->u.indirect.id;
  VAR_2->u.indirect.sector_number = VAR_3->u.indirect.sector_number;
  FUNC_2();
  VAR_6 = FUNC_3(VAR_1, FUNC_0(VAR_2->u.indirect.nr_segments));
  for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
   VAR_2->u.indirect.indirect_grefs[VAR_4] =
    VAR_3->u.indirect.indirect_grefs[VAR_4];
  break;
 default:




  VAR_2->u.other.id = VAR_3->u.other.id;
  break;
 }
}
