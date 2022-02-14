
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u64 ;
typedef int u32 ;
struct amdgpu_iv_entry {int client_id; int src_id; int ring_id; int vmid; int vmid_src; int timestamp; int timestamp_src; int pasid; int pasid_src; int* src_data; } ;
struct amdgpu_ih_ring {int rptr; int * ring; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0,
    struct amdgpu_ih_ring *VAR_1,
    struct amdgpu_iv_entry *VAR_2)
{

 u32 VAR_3 = VAR_1->rptr >> 2;
 uint32_t VAR_4[8];

 VAR_4[0] = FUNC_0(VAR_1->ring[VAR_3 + 0]);
 VAR_4[1] = FUNC_0(VAR_1->ring[VAR_3 + 1]);
 VAR_4[2] = FUNC_0(VAR_1->ring[VAR_3 + 2]);
 VAR_4[3] = FUNC_0(VAR_1->ring[VAR_3 + 3]);
 VAR_4[4] = FUNC_0(VAR_1->ring[VAR_3 + 4]);
 VAR_4[5] = FUNC_0(VAR_1->ring[VAR_3 + 5]);
 VAR_4[6] = FUNC_0(VAR_1->ring[VAR_3 + 6]);
 VAR_4[7] = FUNC_0(VAR_1->ring[VAR_3 + 7]);

 VAR_2->client_id = VAR_4[0] & 0xff;
 VAR_2->src_id = (VAR_4[0] >> 8) & 0xff;
 VAR_2->ring_id = (VAR_4[0] >> 16) & 0xff;
 VAR_2->vmid = (VAR_4[0] >> 24) & 0xf;
 VAR_2->vmid_src = (VAR_4[0] >> 31);
 VAR_2->timestamp = VAR_4[1] | ((u64)(VAR_4[2] & 0xffff) << 32);
 VAR_2->timestamp_src = VAR_4[2] >> 31;
 VAR_2->pasid = VAR_4[3] & 0xffff;
 VAR_2->pasid_src = VAR_4[3] >> 31;
 VAR_2->src_data[0] = VAR_4[4];
 VAR_2->src_data[1] = VAR_4[5];
 VAR_2->src_data[2] = VAR_4[6];
 VAR_2->src_data[3] = VAR_4[7];


 VAR_1->rptr += 32;
}
