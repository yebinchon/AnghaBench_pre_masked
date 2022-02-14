
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(uint64_t* VAR_1, int VAR_2, size_t VAR_3, int VAR_4){
  int VAR_5;
  uint32_t VAR_6 = VAR_4;
  uint32_t VAR_7 = 0xe005b0ca;
  for (VAR_5 = VAR_2; VAR_5 < VAR_2 + VAR_3; VAR_5 += sizeof(uint64_t)){
    uint64_t VAR_8 = ((VAR_4 == (VAR_0 - 1) ?
          (uint64_t)VAR_7 : (uint64_t)VAR_6) << (uint64_t)32) |
      FUNC_0(VAR_5 & 0xFFFFFFFF);
    int VAR_9 = (VAR_5 - VAR_2) / sizeof(uint64_t);
    VAR_1[VAR_9] = VAR_8;
  }
}
