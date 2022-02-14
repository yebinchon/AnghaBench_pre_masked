
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int witness_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const witness_t *VAR_0, void *VAR_1,
    const witness_t *VAR_2, void *VAR_3) {
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));
 uintptr_t VAR_4 = (uintptr_t)VAR_1;
 uintptr_t VAR_5 = (uintptr_t)VAR_3;
 if (VAR_4 < VAR_5) {
  return -1;
 } else if (VAR_4 == VAR_5) {
  return 0;
 } else {
  return 1;
 }
}
