
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned int uint32_t ;
struct amdgpu_ring {int dummy; } ;


 int FUNC_0 (struct amdgpu_ring*,unsigned int,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static uint64_t FUNC_1(struct amdgpu_ring *VAR_3,
         unsigned VAR_4, uint64_t VAR_5)
{
 uint32_t VAR_6;


 if (VAR_4 < 8)
  VAR_6 = VAR_0 + VAR_4;
 else
  VAR_6 = VAR_1 + (VAR_4 - 8);
 FUNC_0(VAR_3, VAR_6, VAR_5 >> 12);


 FUNC_0(VAR_3, VAR_2, 1 << VAR_4);

 return VAR_5;
}
