
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ras_common_if {int dummy; } ;
struct ras_ih_if {struct ras_common_if head; } ;
struct TYPE_4__ {int num_instances; TYPE_1__* instance; scalar_t__ has_page_queue; struct ras_common_if* ras_if; } ;
struct amdgpu_device {TYPE_2__ sdma; } ;
struct TYPE_3__ {int page; int ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,struct ras_common_if*) ;
 int FUNC_1 (struct amdgpu_device*,struct ras_common_if*,int ) ;
 int FUNC_2 (struct amdgpu_device*,struct ras_ih_if*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,int ) ;
 int FUNC_4 (struct amdgpu_device*,struct ras_common_if*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ras_common_if*) ;
 int FUNC_7 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_8(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 int VAR_3;

 if (FUNC_3(VAR_2, VAR_0) &&
   VAR_2->sdma.ras_if) {
  struct ras_common_if *VAR_4 = VAR_2->sdma.ras_if;
  struct ras_ih_if VAR_5 = {
   .head = *VAR_4,
  };


  FUNC_0(VAR_2, VAR_4);
  FUNC_4(VAR_2, VAR_4);

  FUNC_2(VAR_2, &VAR_5);
  FUNC_1(VAR_2, VAR_4, 0);
  FUNC_6(VAR_4);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->sdma.num_instances; VAR_3++) {
  FUNC_5(&VAR_2->sdma.instance[VAR_3].ring);
  if (VAR_2->sdma.has_page_queue)
   FUNC_5(&VAR_2->sdma.instance[VAR_3].page);
 }

 FUNC_7(VAR_2);

 return 0;
}
