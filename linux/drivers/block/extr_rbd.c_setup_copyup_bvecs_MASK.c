
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct rbd_obj_request {size_t copyup_bvec_count; TYPE_1__* copyup_bvecs; } ;
struct TYPE_2__ {unsigned int bv_len; scalar_t__ bv_offset; int bv_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (size_t,int,int ) ;
 unsigned int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct rbd_obj_request *VAR_3, u64 VAR_4)
{
 u32 VAR_5;

 FUNC_4(!VAR_3->copyup_bvecs);
 VAR_3->copyup_bvec_count = FUNC_1(0, VAR_4);
 VAR_3->copyup_bvecs = FUNC_2(VAR_3->copyup_bvec_count,
     sizeof(*VAR_3->copyup_bvecs),
     VAR_1);
 if (!VAR_3->copyup_bvecs)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->copyup_bvec_count; VAR_5++) {
  unsigned int VAR_6 = FUNC_3(VAR_4, (u64)VAR_2);

  VAR_3->copyup_bvecs[VAR_5].bv_page = FUNC_0(VAR_1);
  if (!VAR_3->copyup_bvecs[VAR_5].bv_page)
   return -VAR_0;

  VAR_3->copyup_bvecs[VAR_5].bv_offset = 0;
  VAR_3->copyup_bvecs[VAR_5].bv_len = VAR_6;
  VAR_4 -= VAR_6;
 }

 FUNC_4(!VAR_4);
 return 0;
}
