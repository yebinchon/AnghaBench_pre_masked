
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(uint64_t VAR_0) {
  uint32_t VAR_1 = (uint32_t)VAR_0;
  uint64_t VAR_2 = VAR_0 >> 30;
  if (VAR_2 > 2) {

    VAR_1 = (VAR_1 & ((1u << 30) - 1)) | ((uint32_t)((VAR_2 - 1) & 1) + 1) << 30;
  }
  return VAR_1;
}
