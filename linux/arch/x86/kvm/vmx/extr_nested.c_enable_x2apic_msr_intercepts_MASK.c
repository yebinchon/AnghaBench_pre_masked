
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(unsigned long *VAR_1) {
 int VAR_2;

 for (VAR_2 = 0x800; VAR_2 <= 0x8ff; VAR_2 += VAR_0) {
  unsigned VAR_3 = VAR_2 / VAR_0;

  VAR_1[VAR_3] = ~0;
  VAR_1[VAR_3 + (0x800 / sizeof(long))] = ~0;
 }
}
