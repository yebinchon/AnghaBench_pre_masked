
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct TYPE_2__ {int ready; } ;
struct amdgpu_device {TYPE_1__ gart; } ;
typedef unsigned int dma_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct amdgpu_device*,void*,unsigned int,unsigned int,unsigned int) ;

int FUNC_2(struct amdgpu_device *VAR_3, uint64_t VAR_4,
      int VAR_5, dma_addr_t *VAR_6, uint64_t VAR_7,
      void *VAR_8)
{
 uint64_t VAR_9;
 unsigned VAR_10, VAR_11, VAR_12;

 if (!VAR_3->gart.ready) {
  FUNC_0(1, "trying to bind memory to uninitialized GART !\n");
  return -VAR_2;
 }

 VAR_12 = VAR_4 / VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_9 = VAR_6[VAR_10];
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++, VAR_12++) {
   FUNC_1(VAR_3, VAR_8, VAR_12, VAR_9, VAR_7);
   VAR_9 += VAR_1;
  }
 }
 return 0;
}
