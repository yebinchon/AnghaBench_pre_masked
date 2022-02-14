
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct blkfront_ring_info {unsigned long shadow_free; TYPE_4__* shadow; } ;
struct TYPE_5__ {unsigned long id; } ;
struct TYPE_6__ {TYPE_1__ rw; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {int * request; TYPE_3__ req; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct blkfront_ring_info *VAR_1,
         unsigned long VAR_2)
{
 if (VAR_1->shadow[VAR_2].req.u.rw.id != VAR_2)
  return -VAR_0;
 if (VAR_1->shadow[VAR_2].request == ((void*)0))
  return -VAR_0;
 VAR_1->shadow[VAR_2].req.u.rw.id = VAR_1->shadow_free;
 VAR_1->shadow[VAR_2].request = ((void*)0);
 VAR_1->shadow_free = VAR_2;
 return 0;
}
