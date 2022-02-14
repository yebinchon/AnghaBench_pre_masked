
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpages {unsigned long vma_invalidate_size; int * vma_invalidate_address; } ;
struct TYPE_3__ {int addr; int * vma; int bio; int pl; } ;
struct TYPE_4__ {int type; TYPE_1__ ptr; int offset; } ;
struct dm_io_request {TYPE_2__ mem; int bi_op; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpages*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct dpages*,int ) ;
 int FUNC_3 (struct dpages*,int ,int ) ;
 int FUNC_4 (struct dpages*,int *) ;

__attribute__((used)) static int FUNC_5(struct dm_io_request *VAR_2, struct dpages *VAR_3,
     unsigned long VAR_4)
{


 VAR_3->vma_invalidate_address = ((void*)0);
 VAR_3->vma_invalidate_size = 0;

 switch (VAR_2->mem.type) {
 case 129:
  FUNC_3(VAR_3, VAR_2->mem.ptr.pl, VAR_2->mem.offset);
  break;

 case 131:
  FUNC_0(VAR_3, VAR_2->mem.ptr.bio);
  break;

 case 128:
  FUNC_1(VAR_2->mem.ptr.vma, VAR_4);
  if (VAR_2->bi_op == VAR_1) {
   VAR_3->vma_invalidate_address = VAR_2->mem.ptr.vma;
   VAR_3->vma_invalidate_size = VAR_4;
  }
  FUNC_4(VAR_3, VAR_2->mem.ptr.vma);
  break;

 case 130:
  FUNC_2(VAR_3, VAR_2->mem.ptr.addr);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
