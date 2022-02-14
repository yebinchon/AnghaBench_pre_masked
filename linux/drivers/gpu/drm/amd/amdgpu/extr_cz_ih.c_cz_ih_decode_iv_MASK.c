
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct amdgpu_iv_entry {int src_id; int* src_data; int ring_id; int vmid; int pasid; int client_id; } ;
struct amdgpu_ih_ring {int rptr; int * ring; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_1,
       struct amdgpu_ih_ring *VAR_2,
       struct amdgpu_iv_entry *VAR_3)
{

 u32 VAR_4 = VAR_2->rptr >> 2;
 uint32_t VAR_5[4];

 VAR_5[0] = FUNC_0(VAR_2->ring[VAR_4 + 0]);
 VAR_5[1] = FUNC_0(VAR_2->ring[VAR_4 + 1]);
 VAR_5[2] = FUNC_0(VAR_2->ring[VAR_4 + 2]);
 VAR_5[3] = FUNC_0(VAR_2->ring[VAR_4 + 3]);

 VAR_3->client_id = VAR_0;
 VAR_3->src_id = VAR_5[0] & 0xff;
 VAR_3->src_data[0] = VAR_5[1] & 0xfffffff;
 VAR_3->ring_id = VAR_5[2] & 0xff;
 VAR_3->vmid = (VAR_5[2] >> 8) & 0xff;
 VAR_3->pasid = (VAR_5[2] >> 16) & 0xffff;


 VAR_2->rptr += 16;
}
