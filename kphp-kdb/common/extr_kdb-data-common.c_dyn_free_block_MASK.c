
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NX ;
typedef int MAGIC ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1 (void *VAR_5, int VAR_6) {
  FUNC_0 (VAR_6 >= VAR_4);
  VAR_3[VAR_6]++;
  if (!((long) VAR_5 & 7)) {
    NX(VAR_7) = VAR_2[VAR_6];
    VAR_2[VAR_6] = VAR_7;
  } else {
    NX(VAR_8) = VAR_1[VAR_6];
    VAR_1[VAR_6] = VAR_8;
  }
  if (VAR_6 > VAR_4) {
    MAGIC(VAR_9) = VAR_0;
  }
}
