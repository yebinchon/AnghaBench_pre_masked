
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;



__attribute__((used)) static uint64_t
FUNC_0(uint64_t VAR_0, uint64_t VAR_1) {
 uint64_t VAR_2 = 1000000000;
 if (VAR_1 == 0 || VAR_0 == 0) {
  return 0;
 }
 if (VAR_1 < VAR_2) {
  return VAR_0;
 } else {
  uint64_t VAR_3 = VAR_1 / VAR_2;
  return VAR_0 / VAR_3;
 }
}
