
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct amdgpu_iv_entry {int client_id; int src_id; int * src_data; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {int * ring_enc; int ring; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,...) ;


 int FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_0,
          struct amdgpu_irq_src *VAR_1,
          struct amdgpu_iv_entry *VAR_2)
{
 uint32_t VAR_3;

 switch (VAR_2->client_id) {
 case 129:
  VAR_3 = 0;
  break;
 case 128:
  VAR_3 = 1;
  break;
 default:
  FUNC_1("Unhandled client id: %d\n", VAR_2->client_id);
  return 0;
 }

 FUNC_0("IH: UVD TRAP\n");

 switch (VAR_2->src_id) {
 case 124:
  FUNC_2(&VAR_0->uvd.inst[VAR_3].ring);
  break;
 case 119:
  FUNC_2(&VAR_0->uvd.inst[VAR_3].ring_enc[0]);
  break;
 case 120:
  if (!FUNC_3(VAR_0))
   FUNC_2(&VAR_0->uvd.inst[VAR_3].ring_enc[1]);
  break;
 default:
  FUNC_1("Unhandled interrupt: %d %d\n",
     VAR_2->src_id, VAR_2->src_data[0]);
  break;
 }

 return 0;
}
