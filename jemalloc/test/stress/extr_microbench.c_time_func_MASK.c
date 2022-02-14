
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int timedelta_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(timedelta_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2,
    void (*VAR_3)(void)) {
 uint64_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3();
 }
 FUNC_0(VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3();
 }
 FUNC_1(VAR_0);
}
