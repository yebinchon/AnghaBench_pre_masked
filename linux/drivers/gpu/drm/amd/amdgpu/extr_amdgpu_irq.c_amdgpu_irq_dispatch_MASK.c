
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t u32 ;
struct amdgpu_iv_entry {unsigned int client_id; unsigned int src_id; int const* iv_entry; } ;
struct amdgpu_irq_src {TYPE_3__* funcs; } ;
struct amdgpu_ih_ring {int rptr; int * ring; } ;
struct TYPE_5__ {TYPE_1__* client; int domain; scalar_t__* virq; struct amdgpu_ih_ring ih; } ;
struct amdgpu_device {TYPE_2__ irq; } ;
struct TYPE_6__ {int (* process ) (struct amdgpu_device*,struct amdgpu_irq_src*,struct amdgpu_iv_entry*) ;} ;
struct TYPE_4__ {struct amdgpu_irq_src** sources; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct amdgpu_device*,int const*) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_iv_entry*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct amdgpu_device*,struct amdgpu_irq_src*,struct amdgpu_iv_entry*) ;
 int FUNC_7 (int,struct amdgpu_iv_entry*) ;

void FUNC_8(struct amdgpu_device *VAR_2,
    struct amdgpu_ih_ring *VAR_3)
{
 u32 VAR_4 = VAR_3->rptr >> 2;
 struct amdgpu_iv_entry VAR_5;
 unsigned VAR_6, VAR_7;
 struct amdgpu_irq_src *VAR_8;
 bool VAR_9 = 0;
 int VAR_10;

 VAR_5.iv_entry = (const uint32_t *)&VAR_3->ring[VAR_4];
 FUNC_3(VAR_2, &VAR_5);

 FUNC_7(VAR_3 - &VAR_2->irq.ih, &VAR_5);

 VAR_6 = VAR_5.client_id;
 VAR_7 = VAR_5.src_id;

 if (VAR_6 >= VAR_0) {
  FUNC_0("Invalid client_id in IV: %d\n", VAR_6);

 } else if (VAR_7 >= VAR_1) {
  FUNC_0("Invalid src_id in IV: %d\n", VAR_7);

 } else if (VAR_2->irq.virq[VAR_7]) {
  FUNC_4(FUNC_5(VAR_2->irq.domain, VAR_7));

 } else if (!VAR_2->irq.client[VAR_6].sources) {
  FUNC_0("Unregistered interrupt client_id: %d src_id: %d\n",
     VAR_6, VAR_7);

 } else if ((VAR_8 = VAR_2->irq.client[VAR_6].sources[VAR_7])) {
  VAR_10 = VAR_8->funcs->process(VAR_2, VAR_8, &VAR_5);
  if (VAR_10 < 0)
   FUNC_1("error processing interrupt (%d)\n", VAR_10);
  else if (VAR_10)
   VAR_9 = 1;

 } else {
  FUNC_0("Unhandled interrupt src_id: %d\n", VAR_7);
 }


 if (!VAR_9)
  FUNC_2(VAR_2, VAR_5.iv_entry);
}
