
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct amdgpu_gmc_fault {int timestamp; int key; size_t next; } ;
struct amdgpu_gmc {size_t last_fault; TYPE_1__* fault_hash; struct amdgpu_gmc_fault* fault_ring; } ;
struct amdgpu_device {struct amdgpu_gmc gmc; } ;
struct TYPE_2__ {size_t idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;

bool FUNC_2(struct amdgpu_device *VAR_2, uint64_t VAR_3,
         uint16_t VAR_4, uint64_t VAR_5)
{
 struct amdgpu_gmc *VAR_6 = &VAR_2->gmc;

 uint64_t VAR_7, VAR_8 = VAR_3 << 4 | VAR_4;
 struct amdgpu_gmc_fault *VAR_9;
 uint32_t VAR_10;


 VAR_7 = FUNC_1(VAR_5, VAR_1 + 1) -
  VAR_1;
 if (VAR_6->fault_ring[VAR_6->last_fault].timestamp >= VAR_7)
  return 1;


 VAR_10 = FUNC_0(VAR_8, VAR_0);
 VAR_9 = &VAR_6->fault_ring[VAR_6->fault_hash[VAR_10].idx];
 while (VAR_9->timestamp >= VAR_7) {
  uint64_t VAR_11;

  if (VAR_9->key == VAR_8)
   return 1;

  VAR_11 = VAR_9->timestamp;
  VAR_9 = &VAR_6->fault_ring[VAR_9->next];


  if (VAR_9->timestamp >= VAR_11)
   break;
 }


 VAR_9 = &VAR_6->fault_ring[VAR_6->last_fault];
 VAR_9->key = VAR_8;
 VAR_9->timestamp = VAR_5;


 VAR_9->next = VAR_6->fault_hash[VAR_10].idx;
 VAR_6->fault_hash[VAR_10].idx = VAR_6->last_fault++;
 return 0;
}
