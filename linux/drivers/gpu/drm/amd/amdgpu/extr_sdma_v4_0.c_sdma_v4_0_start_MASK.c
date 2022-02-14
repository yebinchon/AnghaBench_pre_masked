
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_8__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct TYPE_7__ {int num_instances; TYPE_2__* instance; scalar_t__ has_page_queue; } ;
struct TYPE_5__ {scalar_t__ load_type; } ;
struct amdgpu_device {TYPE_4__ mman; TYPE_3__ sdma; TYPE_1__ firmware; } ;
struct TYPE_6__ {struct amdgpu_ring page; struct amdgpu_ring ring; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int ,scalar_t__) ;
 int FUNC_3 (struct amdgpu_ring*) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*,int) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*,int) ;
 int FUNC_11 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_8)
{
 struct amdgpu_ring *VAR_9;
 int VAR_10, VAR_11 = 0;

 if (FUNC_4(VAR_8)) {
  FUNC_6(VAR_8, 0);
  FUNC_7(VAR_8, 0);
 } else {

  if (VAR_8->firmware.load_type != VAR_0) {
   VAR_11 = FUNC_9(VAR_8);
   if (VAR_11)
    return VAR_11;
  }


  FUNC_7(VAR_8, 1);

  FUNC_6(VAR_8, 1);
 }


 for (VAR_10 = 0; VAR_10 < VAR_8->sdma.num_instances; VAR_10++) {
  uint32_t VAR_12;

  FUNC_2(VAR_10, VAR_7, 0);
  FUNC_8(VAR_8, VAR_10);
  if (VAR_8->sdma.has_page_queue)
   FUNC_10(VAR_8, VAR_10);


  VAR_12 = FUNC_1(VAR_10, VAR_5);
  VAR_12 = FUNC_0(VAR_12, VAR_2, VAR_4, 1);
  FUNC_2(VAR_10, VAR_5, VAR_12);

  if (!FUNC_4(VAR_8)) {

   VAR_12 = FUNC_1(VAR_10, VAR_6);
   VAR_12 = FUNC_0(VAR_12, VAR_3, VAR_1, 0);
   FUNC_2(VAR_10, VAR_6, VAR_12);
  }
 }

 if (FUNC_4(VAR_8)) {
  FUNC_6(VAR_8, 1);
  FUNC_7(VAR_8, 1);
 } else {
  VAR_11 = FUNC_11(VAR_8);
  if (VAR_11)
   return VAR_11;
 }

 for (VAR_10 = 0; VAR_10 < VAR_8->sdma.num_instances; VAR_10++) {
  VAR_9 = &VAR_8->sdma.instance[VAR_10].ring;

  VAR_11 = FUNC_3(VAR_9);
  if (VAR_11)
   return VAR_11;

  if (VAR_8->sdma.has_page_queue) {
   struct amdgpu_ring *VAR_13 = &VAR_8->sdma.instance[VAR_10].page;

   VAR_11 = FUNC_3(VAR_13);
   if (VAR_11)
    return VAR_11;

   if (VAR_8->mman.buffer_funcs_ring == VAR_13)
    FUNC_5(VAR_8, 1);
  }

  if (VAR_8->mman.buffer_funcs_ring == VAR_9)
   FUNC_5(VAR_8, 1);
 }

 return VAR_11;
}
