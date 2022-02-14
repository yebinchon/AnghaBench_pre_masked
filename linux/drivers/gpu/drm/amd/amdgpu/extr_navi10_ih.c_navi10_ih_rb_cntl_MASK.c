
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ih_ring {int ring_size; scalar_t__ use_bus_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint32_t FUNC_2(struct amdgpu_ih_ring *VAR_9, uint32_t VAR_10)
{
 int VAR_11 = FUNC_1(VAR_9->ring_size / 4);

 VAR_10 = FUNC_0(VAR_10, VAR_0,
       VAR_3, VAR_9->use_bus_addr ? 1 : 4);
 VAR_10 = FUNC_0(VAR_10, VAR_0,
       VAR_6, 1);
 VAR_10 = FUNC_0(VAR_10, VAR_0,
       VAR_7, 1);
 VAR_10 = FUNC_0(VAR_10, VAR_0, VAR_5, VAR_11);



 VAR_10 = FUNC_0(VAR_10, VAR_0,
       VAR_8, 1);
 VAR_10 = FUNC_0(VAR_10, VAR_0, VAR_2, 1);
 VAR_10 = FUNC_0(VAR_10, VAR_0, VAR_1, 0);
 VAR_10 = FUNC_0(VAR_10, VAR_0, VAR_4, 0);

 return VAR_10;
}
