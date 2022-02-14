
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct blkfront_ring_info {unsigned long shadow_free; TYPE_1__* shadow; int dev_info; } ;
struct TYPE_6__ {unsigned long id; } ;
struct TYPE_8__ {TYPE_2__ rw; } ;
struct TYPE_7__ {TYPE_4__ u; } ;
struct TYPE_5__ {TYPE_3__ req; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct blkfront_ring_info *VAR_0)
{
 unsigned long VAR_1 = VAR_0->shadow_free;

 FUNC_1(VAR_1 >= FUNC_0(VAR_0->dev_info));
 VAR_0->shadow_free = VAR_0->shadow[VAR_1].req.u.rw.id;
 VAR_0->shadow[VAR_1].req.u.rw.id = 0x0fffffee;
 return VAR_1;
}
