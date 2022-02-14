
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int* ring; int gpu_addr; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 void* FUNC_0 (int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_ring*,int*,int,int) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_ring *VAR_12, uint32_t VAR_13)
{
 struct amdgpu_device *VAR_14 = VAR_12->adev;

 uint32_t VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;


 VAR_15 = FUNC_1(VAR_4, 0, VAR_11);
 VAR_16 = (VAR_15 << 2);
 VAR_17 = FUNC_2(VAR_12->gpu_addr);
 FUNC_4(VAR_12, &VAR_13, VAR_16, VAR_17);


 VAR_15 = FUNC_1(VAR_4, 0, VAR_10);
 VAR_16 = (VAR_15 << 2);
 VAR_17 = FUNC_3(VAR_12->gpu_addr);
 FUNC_4(VAR_12, &VAR_13, VAR_16, VAR_17);


 for (VAR_19 = 0; VAR_19 <= 2; VAR_19++) {
  VAR_12->ring[VAR_13++] = FUNC_0(0, 0, 0, VAR_1);
  VAR_12->ring[VAR_13++] = 0;
 }


 VAR_15 = FUNC_1(VAR_4, 0, VAR_6);
 VAR_16 = (VAR_15 << 2);
 VAR_17 = 0x13;
 FUNC_4(VAR_12, &VAR_13, VAR_16, VAR_17);


 VAR_15 = FUNC_1(VAR_4, 0, VAR_8);
 VAR_16 = (VAR_15 << 2);
 VAR_17 = 0x1;
 FUNC_4(VAR_12, &VAR_13, VAR_16, VAR_17);


 VAR_15 = FUNC_1(VAR_4, 0, VAR_6);
 VAR_16 = (VAR_15 << 2);
 VAR_17 = 0x1;
 VAR_18 = 0x1;

 VAR_12->ring[VAR_13++] = FUNC_0(FUNC_1(VAR_4, 0, VAR_7), 0, 0, VAR_0);
 VAR_12->ring[VAR_13++] = 0x01400200;
 VAR_12->ring[VAR_13++] = FUNC_0(FUNC_1(VAR_4, 0, VAR_8), 0, 0, VAR_0);
 VAR_12->ring[VAR_13++] = VAR_17;
 VAR_12->ring[VAR_13++] = FUNC_0(FUNC_1(VAR_4, 0, VAR_5), 0, 0, VAR_0);
 if (((VAR_16 >= 0x1f800) && (VAR_16 <= 0x21fff)) ||
  ((VAR_16 >= 0x1e000) && (VAR_16 <= 0x1e1ff))) {
  VAR_12->ring[VAR_13++] = 0;
  VAR_12->ring[VAR_13++] = FUNC_0((VAR_16 >> 2), 0, 0, VAR_2);
 } else {
  VAR_12->ring[VAR_13++] = VAR_16;
  VAR_12->ring[VAR_13++] = FUNC_0(0, 0, 0, VAR_2);
 }
 VAR_12->ring[VAR_13++] = VAR_18;


 for (VAR_19 = 0; VAR_19 <= 12; VAR_19++) {
  VAR_12->ring[VAR_13++] = FUNC_0(0, 0, 0, VAR_3);
  VAR_12->ring[VAR_13++] = 0;
 }


 VAR_15 = FUNC_1(VAR_4, 0, VAR_9);
 VAR_16 = (VAR_15 << 2);
 VAR_17 = 0;
 FUNC_4(VAR_12, &VAR_13, VAR_16, VAR_17);


 VAR_15 = FUNC_1(VAR_4, 0, VAR_6);
 VAR_16 = (VAR_15 << 2);
 VAR_17 = 0x12;
 FUNC_4(VAR_12, &VAR_13, VAR_16, VAR_17);
}
