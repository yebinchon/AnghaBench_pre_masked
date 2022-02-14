
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct amdgpu_device {scalar_t__ rmmio_size; scalar_t__ rmmio; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

uint8_t FUNC_2(struct amdgpu_device *VAR_0, uint32_t VAR_1) {
 if (VAR_1 < VAR_0->rmmio_size)
  return (FUNC_1(VAR_0->rmmio + VAR_1));
 FUNC_0();
}
