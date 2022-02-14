
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(uint64_t* VAR_0, int VAR_1, size_t VAR_2, int VAR_3){
  int VAR_4;
  uint32_t VAR_5 = 0x4441454c;
  uint32_t VAR_6 = 0x4c4c4f46;
  for (VAR_4 = VAR_1; VAR_4 < VAR_1 + VAR_2; VAR_4 += sizeof(uint64_t)){
    uint64_t VAR_7 = ((VAR_3 ?
          (uint64_t)VAR_6 : (uint64_t)VAR_5) << (uint64_t)32) |
      FUNC_0((VAR_4 & 0xFFFFFFFF));
    int VAR_8 = (VAR_4 - VAR_1) / sizeof(uint64_t);
    VAR_0[VAR_8] = VAR_7;
  }
}
