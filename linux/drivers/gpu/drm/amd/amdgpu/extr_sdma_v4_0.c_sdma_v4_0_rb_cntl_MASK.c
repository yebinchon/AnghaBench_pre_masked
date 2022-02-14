
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int ring_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint32_t FUNC_2(struct amdgpu_ring *VAR_4, uint32_t VAR_5)
{

 uint32_t VAR_6 = FUNC_1(VAR_4->ring_size / 4);

 VAR_5 = FUNC_0(VAR_5, VAR_3, VAR_0, VAR_6);





 return VAR_5;
}
